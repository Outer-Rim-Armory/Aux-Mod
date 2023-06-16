#include "CfgPatches.hpp"


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
        scopeArsenal = 2;
		side = 3;
        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_PGonks";

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
};

class CfgEditorSubcategories
{
    class BNA_KC_SubCat_PGonks
	{
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Props - Gonks";
	};
};