#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"


class CfgVehicles
{
    class BNA_KC_Backpack;
    class BNA_KC_Jetpack_JT12: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper JT-12 Jetpack";

        // Use JLTS model/textures, LS model will be removed
        model = "MRC\JLTS\characters\CloneArmor2\CloneJumppackJT12.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "MRC\JLTS\characters\CloneArmor2\data\Clone_jumppack_jt12_co.paa" };
        picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\Clone_jumppack_jt12_ui_ca.paa";

        BNA_KC_Jet_isJetpack = 1;
        BNA_KC_Jet_fuel = 100;
        BNA_KC_Jet_speed = 2;     // Jetpack speed, effects how fast you move in the air
        BNA_KC_Jet_strength = 15; // Jetpack strength, effects fast the player rises

        // Effects
        BNA_KC_Jet_effectPoints[] = { "effect_left", "effect_right" }; // Points to spawn effects, these come from the JLTS model
        BNA_KC_Jet_effectFire  = "BNA_KC_Jetpack_Fire";
        BNA_KC_Jet_effectSmoke = "JLTS_jumppack_smoke";
        BNA_KC_Jet_effectSound = "BNA_KC_Gear\Jetpacks\Data\Sounds\BNA_KC_Jetpack_Loop.wss";
    };

    class BNA_KC_Jetpack_CDV21: BNA_KC_Jetpack_JT12
    {
        displayName = "[KC] Clone Trooper CDV-21 Jetpack";

        // Use JLTS model/textures, LS model will be removed
        model = "\MRC\JLTS\characters\CloneArmor\CloneJumppack.p3d";
        hiddenSelectionsTextures[] = { "MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_co.paa" };
        picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_ui_ca.paa";
    };

    class BNA_KC_Backpack_Radio;
    class BNA_KC_Jetpack_CDV19: BNA_KC_Backpack_Radio
    {
        displayName = "[KC] Clone Commander CDV-19 Jumppack";

        model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_mc_co.paa" };
        picture = "MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";

        BNA_KC_Jet_isJetpack = 1;
        BNA_KC_Jet_fuel = 100;
        BNA_KC_Jet_speed = 2;     // Jetpack speed, effects how fast you move in the air
        BNA_KC_Jet_strength = 15; // Jetpack strength, effects fast the player rises

        // Effects
        BNA_KC_Jet_effectPoints[] = { "effect" }; // Points to spawn effects, comes from the JLTS model
        BNA_KC_Jet_effectFire  = "BNA_KC_Jetpack_Fire";
        BNA_KC_Jet_effectSmoke = "JLTS_jumppack_smoke";
        BNA_KC_Jet_effectSound = "BNA_KC_Gear\Jetpacks\Data\Sounds\BNA_KC_Jetpack_Loop.wss";
    };
};


class CfgCloudlets
{
    // https://community.bistudio.com/wiki/Arma_3:_Particle_Effects
    class Flare2;
    class BNA_KC_Jetpack_Fire: Flare2
    {
        colorCoef[] =
        {
            // R, G, B, A
            0,
            0.1,
            0.9,
            1
        };
    };
};


class RscTitles
{
    class RscPicture;

    class BNA_KC_Jet_Dialog
    {
        // See https://community.bistudio.com/wiki/Arma:_GUI_Configuration#HUDs

        // Custom HUD element for jetpack fuel
        idd = 8000; // Custom id, should be unique
        // enableSimulation = 1; // ?
        movingEnable = 1; // Allow the player to move the display in the "Customize Layout" menu
        duration = 9.9999998e+010; // Make menu last "forever", will be closed if jetpack is removed

        // 0.5 second fate in/out
        fadeIn = 0.5;
        fadeOut = 0.5;

        // onLoad = "[_this] call BNAKC_fnc_jetpackDisplayOnLoad;"; // Code to run when loaded
        onUnload = ""; // Same thing but when unloaded

        // List of all the UI elements
        controls[] =
        {
            "background",
            "title",
            "fuel"
        };

        // See https://community.bistudio.com/wiki/Arma:_GUI_Configuration#Controls
        class background: RscPicture
        {
            idc = 9000; // Id for this control
            moving = 1; // Control will be moved when the display is dragged
            
            text = "#(argb,8,8,3)color(0,0,0,0.7)";

            // Control size
            // Size and position are measured in % of screen size
            w = "0.190781 * safezoneW";
            h = "0.1 * safezoneH";

            // Control position
            x = "(profileNamespace getVariable ['IGUI_BNA_KC_Jet_Grid_jetpackFuel_X', 0.773281 * safezoneW + safezoneX])";
            y = "(profileNamespace getVariable ['IGUI_BNA_KC_Jet_Grid_jetpackFuel_Y', 0.478 * safezoneH + safezoneY])";
        };

        class title: RscPicture
        {
            idc = 9001; // Id for this control
            moving = 1; // Control will be moved when the display is dragged
            
            text = "Title";
            type = "CT_STATIC"; // Normal text - https://community.bistudio.com/wiki/Arma:_GUI_Configuration#Control_Types
            style = "ST_LEFT"; // Left-aligned text - https://community.bistudio.com/wiki/Arma:_GUI_Configuration#Control_Styles
            font = "RobotoCondensed";

            // Color
            // colorText[] = { 1, 1, 1, 1 };
            // colorBackground[] = { 0, 0, 0, 0.5 };

            // Control size
            // Size and position are measured in % of screen size
            w = "0.180469 * safezoneW";
            h = "0.022 * safezoneH";

            // Control position
            x = "(profileNamespace getVariable ['IGUI_BNA_KC_Jet_Grid_jetpackFuel_X', 0.773281 * safezoneW + safezoneX]) + 0.005156 * safezoneW";
            y = "(profileNamespace getVariable ['IGUI_BNA_KC_Jet_Grid_jetpackFuel_Y', 0.478 * safezoneH + safezoneY]) + 0.011 * safezoneH";
        };

        class fuel: RscPicture
        {
            idc = 9002; // Id for this control
            moving = 1; // Control will be moved when the display is dragged
            
            text = "#(argb,8,8,3)color(0.5,0,0.05,1)";
            
            // Control size
            // Size and position are measured in % of screen size
            w = "0.180781 * safezoneW";
            h = "0.044 * safezoneH";

            // Control position
            x = "(profileNamespace getVariable ['IGUI_BNA_KC_Jet_Grid_jetpackFuel_X', 0.773281 * safezoneW + safezoneX]) + 0.005156 * safezoneW";
            y = "(profileNamespace getVariable ['IGUI_BNA_KC_Jet_Grid_jetpackFuel_Y', 0.478 * safezoneH + safezoneY]) + 0.011 * safezoneH";
        };
    };
};


// UI Grids, used to let the player move the jetpack hud element
class CfgUIGrids
{
    class IGUI
    {
        class Variables
        {
            class BNA_KC_Jet_Grid_jetpackFuel
            {
                // Variable for saving the position of the UI control
                displayName = "Jetpack Fuel";
                description = "Fuel display for jetpacks";
                preview = "\MRC\JLTS\jumppacks\data\ui\igui_preview_energy_ca.paa";
                saveToProfile[] = {0, 1};
                // ? - Not 100% sure what the 0 and 1 are doing, but it's present in JLTS's settings, seems to be what saves the control's
                // ? - location in the "Customize Hud" menu
            };
        };

        class Presets
        {
            class Arma3
            {
                class Variables
                {
                    // Default values (roughly on the right side of the screen)
                    BNA_KC_Jet_Grid_jetpackFuel[]=
                    {
                        
                        {
                            "0.773281 * safezoneW + safezoneX",
                            "0.478 * safezoneH + safezoneY",
                            "0.190781 * safezoneW",
                            "0.044 * safezoneH"
                        },
                        "(((safezoneW / safezoneH) min 1.2) / 40)",
                        "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"
                    };
                };
            };
        };
    };
};