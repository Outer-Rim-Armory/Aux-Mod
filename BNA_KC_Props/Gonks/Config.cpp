#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"


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
    };

    class BNA_KC_Gonk_Uniforms: BNA_KC_Utility_Base
	{
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Uniform Dispenser";

        class UserActions
		{
			class BNA_KC_CRUniform
			{
				displayName = "<t size='0.9' font='PuristaSemibold' color='#ffffff'>Grab CR Uniform</t>";		// Structured text, displayed in the scroll menu
				radius = 3;
				priority = 100;
				onlyForPlayer = 1;
				hideOnUse = 0;
				condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Uniform_Menu', 0]) == 0)";
				statement = "[""CR""] call BNAKC_fnc_GrabUniform;";				// Calls the loadout script and tells it to look for the Basic hashmap key, change this to relevant hashmap key
			};
			class BNA_KC_CTUniform: BNA_KC_CRUniform
			{
				displayName = "<t size='0.9' font='PuristaSemibold' color='#ffffff'>Grab CT Uniform</t>";
				statement = "[""CT""] call BNAKC_fnc_GrabUniform;";
			};
			class BNA_KC_ChangeMenu: BNA_KC_CRUniform
			{
				priority = 99;
				displayName = "<t size='0.9' font='PuristaSemibold' color='#ffffff'>View Detachment Helmets</t>";
				condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Uniform_Menu', 0]) == 0)";
				statement = "player setVariable ['BNAKC_Uniform_Menu', 1];";
			};
			class BNA_KC_CrewHelmet: BNA_KC_CRUniform
			{
				displayName = "<t size='0.9' font='PuristaSemibold' color='#ffffff'>Grab Crew Helmet</t>";
				condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Uniform_Menu', 0]) == 1)";
				statement = "removeHeadgear player; player addHeadgear 'BNA_KC_Helmet_Phase1_Tanker_v2';";
			};
			class BNA_KC_ChangeMenu2: BNA_KC_ChangeMenu
			{
				displayName = "<t size='0.9' font='PuristaSemibold' color='#ffffff'>View Rank Uniforms</t>";
				condition = "(isNull objectParent player) && ((player getVariable ['BNAKC_Uniform_Menu', 0]) == 1)";
				statement = "player setVariable ['BNAKC_Uniform_Menu', 0];";
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
                priority = 5;

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

        class UserActions
        {
            class ArsenalACE
            {
                displayName = "<t color='#3996e7'>Open ACE Arsenal</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = 1;

                hideOnUse = 1;
                priority = 5;

                condition = "true";
                statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
            };
            class ArsenalBIS: ArsenalACE
            {
                displayName = "<t color='#3996e7'>Open BIS Arsenal</t>";
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

        class UserActions
        {
            class FullHeal
            {
                displayName = "<t color='#c40000'>Recieve Treatment</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = 1;

                hideOnUse = 1;
                priority = 5;

                condition = "true";
                statement = "[player, player] call ace_medical_treatment_fnc_fullHeal; playSound3D ['BNA_KC_Props\Deployables\Data\Audio\FX7_Ambient.wss', objNull, false, getPosASL this, 1, 1, 10, 0, true];";
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