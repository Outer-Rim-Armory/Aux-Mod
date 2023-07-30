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

// Window sizes, measured in % of screen size
#define WINDOW_WIDTH 0.025
#define WINDOW_HEIGHT 0.3

#define WINDOW_X 0.95
#define WINDOW_Y 0.5

// Center display formula - displays in center of screen
// _x = (safeZoneX + (safeZoneWAbs / 2)) - (WINDOW_X / 2);
// _y = (safeZoneY + (safeZoneH / 2)) - (WINDOW_Y / 2);

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

        onLoad = "[_this] call BNAKC_fnc_JetDialogOnLoad;"; // Code to run when loaded
        onUnload = ""; // Same thing but when unloaded

        // List of all the UI elements
        controls[] =
        {
            "background",
            "fuel"
        };

        // See https://community.bistudio.com/wiki/Arma:_GUI_Configuration#Controls
        class background: RscPicture
        {
            idc = 9000; // Id for this control
            moving = 1; // Control will be moved when the display is dragged
            
            text = "#(argb,8,8,3)color(0,0,0,0.7)"; // Procedural texture - https://community.bistudio.com/wiki/Procedural_Textures

            // Control size
            w = WINDOW_WIDTH;
            h = WINDOW_HEIGHT;

            // Control position
            x = (profileNamespace getVariable ["IGUI_BNA_KC_Jet_Grid_jetpackFuel_X", safeZoneX + WINDOW_X * safeZoneW]); // Near the right side of the screen
            y = (profileNamespace getVariable ["IGUI_BNA_KC_Jet_Grid_jetpackFuel_Y", (safeZoneY + (safeZoneH / 2)) - (WINDOW_HEIGHT / 2)]); // Centers the bar vertically
        };

        class fuel: RscPicture
        {
            idc = 9001; // Id for this control
            moving = 1; // Control will be moved when the display is dragged
            
            text = "#(argb,8,8,3)color(1,1,1,0.7)";
            
            #define FUEL_WIDTH WINDOW_WIDTH * 0.5// 50% width of background
            #define FUEL_HEIGHT WINDOW_HEIGHT * 0.95// 95% height of background

            // Control size
            w = FUEL_WIDTH;
            h = FUEL_HEIGHT;

            // Control position
            x = (profileNamespace getVariable ["IGUI_BNA_KC_Jet_Grid_jetpackFuel_X", safeZoneX + WINDOW_X * safeZoneW]) + ((WINDOW_WIDTH / 2) - (FUEL_WIDTH / 2));
            y = (profileNamespace getVariable ["IGUI_BNA_KC_Jet_Grid_jetpackFuel_Y", (safeZoneY + (safeZoneH / 2)) - (WINDOW_HEIGHT / 2)]) + ((WINDOW_HEIGHT / 2) - (FUEL_HEIGHT / 2));
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
                /*
                0: Save X coordinate
                1: Save Y coordinate
                2: Save width (if resizing is allowed)
                3: Save height (if resizing is allowed)
                */
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
                            safeZoneX + WINDOW_X * safeZoneW, // Default X pos
                            (safeZoneY + (safeZoneH / 2)) - (WINDOW_HEIGHT / 2), // Default Y pos
                            WINDOW_WIDTH, // Width
                            WINDOW_HEIGHT // Height
                        },
                        "(((safezoneW / safezoneH) min 1.2) / 40)", // ???
                        "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)" // ???
                    };
                };
            };
        };
    };
};