#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"


class CfgVehicles
{
    class 3as_GNK;
    class BNA_KC_Gonk_Uniforms: 3as_GNK
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_Gonks";

        displayName = "[KC] Uniform Dispenser";

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

    class BNA_KC_Gonk_Permissions: 3as_GNK
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_Gonks";

        displayName = "Permissions Gonk";

        class UserActions
        {
            class AssignMedic
            {
                displayName = "Assign Medic Permissions";

                position = "camera";
                radius = 5;
                onlyForPlayer = 0;

                hideOnUse = 1;
                priority = 5;

                condition = "!(player getUnitTrait 'Medic')";
                statement = "player setUnitTrait ['Medic', true]";
            };
            class UnassignMedic: AssignMedic
            {
                displayName = "Unassign Medic Permissions";
                condition = "player getUnitTrait 'Medic'";
                statement = "player setUnitTrait ['Medic', false]";
            };
            class AssignEngineer: AssignMedic
            {
                displayName = "Assign Engineer Permissions";
                condition = "!(player getUnitTrait 'Engineer')";
                statement = "player setUnitTrait ['Engineer', true]";
            };
            class UnassignEngineer: AssignEngineer
            {
                displayName = "Unassign Engineer Permissions";
                condition = "player getUnitTrait 'Engineer'";
                statement = "player setUnitTrait ['Engineer', false]";
            };
        };
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Gonks
	{
		// Mod Info
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;

		displayName = "Gonks";
	};
};