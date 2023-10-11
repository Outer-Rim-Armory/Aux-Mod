#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"


class CBA_Extended_EventHandlers;

class CfgVehicles
{
    class 3as_GNK;
    class BNA_KC_Utility_Base: 3as_GNK
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_Utility";
        editorPreview = "\BNA_KC_Props\Gonks\Data\Textures\Previews\Gonk_Droid.jpg";

        class EventHandlers
        {
            // Using CBA_Extended_EventHandlers_base was creating a class reference in CfgVehicles
            // Not sure why
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers {};
        };
    };

    class BNA_KC_Gonk_Uniforms: BNA_KC_Utility_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Uniform Dispenser";

        class UserActions
        {
            /*
            "Page" IDs
            0: Home Page
            1: Uniforms
            2: Detachment Helmets
            */
            class ChangeMenu_Uniforms
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>View Rank Uniforms</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = 1;

                hideOnUse = 0;
                priority = 100;

                condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Uniform_Menu', 0]) == 0)";
                statement = "player setVariable ['BNAKC_Uniform_Menu', 1];";
            };

            class ChangeMenu_Helmets: ChangeMenu_Uniforms
            {
                priority = 99;
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>View Helmets</t>";
                condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Uniform_Menu', 0]) == 0)";
                statement = "player setVariable ['BNAKC_Uniform_Menu', 2];";
            };

            class ChangeMenu_Home: ChangeMenu_Uniforms
            {
                priority = 98;
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>Home</t>";
                condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Uniform_Menu', 0]) != 0)";
                statement = "player setVariable ['BNAKC_Uniform_Menu', 0];";
            };

            class BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>Grab CR Uniform</t>";      // Structured text, displayed in the scroll menu

                position = "camera";
                radius = 3;
                onlyForPlayer = 1;

                hideOnUse = 0;
                priority = 100;

                condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Uniform_Menu', 0]) == 1)";
                statement = "[""CR""] call BNAKC_fnc_GrabUniform;";                // Calls the loadout script and tells it to look for the Basic hashmap key, change this to relevant hashmap key
            };
            class BNA_KC_CTUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>Grab CT Uniform</t>";
                statement = "[""CT""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_SCTUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>Grab SCT Uniform</t>";
                statement = "[""SCT""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_VCTUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>Grab VCT Uniform</t>";
                statement = "[""VCT""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_CLCUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>Grab CLC Uniform</t>";
                statement = "[""CLC""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_CPLUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>Grab CPL Uniform</t>";
                statement = "[""CPL""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_CSUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#586619'>Grab CS Uniform</t>";
                statement = "[""CS""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_CSSUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#586619'>Grab CSS Uniform</t>";
                statement = "[""CSS""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_CSFCUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#586619'>Grab CSFC Uniform</t>";
                statement = "[""CSFC""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_CMSUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#586619'>Grab CMS Uniform</t>";
                statement = "[""CMS""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_CSMUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#586619'>Grab CSM Uniform</t>";
                statement = "[""CSM""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_WOUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#194A66'>Grab WO Uniform</t>";
                statement = "[""WO""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_WO2Uniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#194A66'>Grab WO2 Uniform</t>";
                statement = "[""WO2""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_WO3Uniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#194A66'>Grab WO3 Uniform</t>";
                statement = "[""WO3""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_LTUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#194A66'>Grab LT Uniform</t>";
                statement = "[""LT""] call BNAKC_fnc_GrabUniform;";
            };
            class BNA_KC_1LTUniform: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#194A66'>Grab 1LT Uniform</t>";
                statement = "[""1LT""] call BNAKC_fnc_GrabUniform;";
            };

            class BNA_KC_CrewHelmet: BNA_KC_CRUniform
            {
                displayName = "<t size='0.9' font='RobotoCondensedBold' color='#ffffff'>Grab Crew Helmet</t>";
                condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Uniform_Menu', 0]) == 2)";
                statement = "removeHeadgear player; player addHeadgear 'BNA_KC_Helmet_Phase1_Tanker_v2';";
            };
        };
    };

    class BNA_KC_Gonk_Loadouts: BNA_KC_Utility_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Loadouts Gonk";

        class UserActions
        {
            /*
            "Page" IDs
            0: Home Page
            1: Weapons
            */
            class Rifleman
            {
                displayName = "<t color='#FFFFFF'>Rifleman</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = 1;

                hideOnUse = 0;
                priority = 100;

                condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Loadout_Menu', 0]) == 0)";
                statement = "'Rifleman' call BNAKC_fnc_setMos; player setVariable ['BNAKC_Loadout_Menu', 1];";
            };

            class OpenArsenal: Rifleman
            {
                displayName = "<t color='#FFFFFF'>Weapon Attachments</t>";
                priority = 99;

                condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Loadout_Menu', 0]) == 0)";
                statement = "call BNAKC_fnc_openAttachmentArsenal";
            };

            class ChangeMenu_Home: Rifleman
            {
                displayName = "<t color='#FFFFFF' font='RobotoCondensedBold'>Home</t>";
                priority = 98;

                condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Loadout_Menu', 0]) != 0)";
                statement = "player setVariable ['BNAKC_Loadout_Menu', 0];";
            };
        };
    };

    class BNA_KC_Gonk_Permissions: BNA_KC_Utility_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Permissions Gonk";

        class UserActions
        {
            class AssignMedic
            {
                displayName = "<t color='#c40000'><img image='\BNA_KC_Gear\Insignias\Data\Textures\Medic.paa'/> Assign Medic Permissions</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = 0;

                hideOnUse = 1;
                priority = 100;

                condition = "!(player getUnitTrait 'Medic')";
                statement = "player setUnitTrait ['Medic', true]";
            };
            class UnassignMedic: AssignMedic
            {
                displayName = "<t color='#c40000'><img image='\BNA_KC_Gear\Insignias\Data\Textures\Medic.paa'/> Unassign Medic Permissions</t>";
                condition = "player getUnitTrait 'Medic'";
                statement = "player setUnitTrait ['Medic', false]";
            };
            class AssignEngineer: AssignMedic
            {
                displayName = "<t color='#f0be00'><img image='\BNA_KC_Gear\Insignias\Data\Textures\Engineer.paa'/> Assign Engineer Permissions</t>";
                condition = "!(player getUnitTrait 'Engineer')";
                statement = "player setUnitTrait ['Engineer', true]";
            };
            class UnassignEngineer: AssignEngineer
            {
                displayName = "<t color='#f0be00'><img image='\BNA_KC_Gear\Insignias\Data\Textures\Engineer.paa'/> Unassign Engineer Permissions</t>";
                condition = "player getUnitTrait 'Engineer'";
                statement = "player setUnitTrait ['Engineer', false]";
            };
        };
    };

    class BNA_KC_Utility_Arsenal: BNA_KC_Utility_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Arsenal Terminal";
        model = "3AS\3AS_Props\Terminals\Terminal_short.p3d";
        editorPreview = "\BNA_KC_Props\Gonks\Data\Textures\Previews\Terminal_Black.jpg";

        class UserActions
        {
            class ArsenalACE
            {
                displayName = "<t color='#3996e7'><img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\rearm_ca.paa'/> Open ACE Arsenal</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = 1;

                hideOnUse = 1;
                priority = 100;

                condition = "true";
                statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
            };
            class ArsenalBIS: ArsenalACE
            {
                displayName = "<t color='#E6E6E6'><img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\rearm_ca.paa'/> Open BIS Arsenal</t>";
                statement = "['Open', [true]] call BIS_fnc_arsenal;";
            };
        };
    };

    class BNA_KC_Utility_Heal: BNA_KC_Utility_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Full Heal Droid";
        model = "RD501_Vehicles\static\FX7Droid\FX7Droid.p3d";
        editorPreview = "\BNA_KC_Props\Gonks\Data\Textures\Previews\FX7.jpg";

        class UserActions
        {
            class FullHeal
            {
                displayName = "<t color='#c40000'><img image='z\ace\addons\zeus\ui\icon_module_zeus_heal_ca.paa'/> Recieve Treatment</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = 1;

                hideOnUse = 1;
                priority = 100;

                condition = "true";
                statement = "[player, player] call ace_medical_treatment_fnc_fullHeal; playSound3D ['BNA_KC_Props\Deployables\Data\Audio\FX7_Ambient.wss', objNull, false, getPosASL this, 3, 1, 10, 0, true];";
            };
        };
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Utility
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Utility";
    };
};