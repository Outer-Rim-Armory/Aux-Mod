#include "CfgPatches.hpp"


class CfgVehicles
{
    class 3AS_ATRT;
    class BNA_KC_ATRT: 3AS_ATRT
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VOther";

        displayName = "[KC] AT-RT";

		// Textures are not set-up on the 3AS end yet.
		// hiddenSelectionsTextures[] =
		// {
		// 	"BNA_KC_Vehicles\Other\Data\ATRT\BNA_KC_ATRT.paa"
		// };
	};
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_VOther
	{
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicles - Other";
	};
};