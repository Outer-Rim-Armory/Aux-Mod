#include "CfgPatches.hpp"


class CfgVehicles
{
    // ┌────────────────┐
    // │    Venators    │
    // └────────────────┘
    #include "Resurgence_Parts.hpp"
    class venator_base_5;
    class BNA_KC_Ven_Resurgence_OpenFullyHollowed: venator_base_5
	{
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
		editorSubcategory = "BNA_KC_SubCat_VStaticShips";

		displayName = "[KC] The Resurgance - Venator (Open Fully Hollowed)";

		multiStructureParts[] =
		{
			{"BNA_KC_Ven_Resurgence_Body1_1", "body1_1"},
			{"BNA_KC_Ven_Resurgence_Body1_2", "body1_2"},
			{"BNA_KC_Ven_Resurgence_Body2_1", "body2_1"},
			{"BNA_KC_Ven_Resurgence_Body2_2", "body2_2"},
			{"BNA_KC_Ven_Resurgence_Body2_3", "body2_3"},
			{"BNA_KC_Ven_Resurgence_Body3", "body3"},
			{"BNA_KC_Ven_Resurgence_Body4", "body4"},
			{"BNA_KC_Ven_Resurgence_Body5", "body5"},
			{"BNA_KC_Ven_Resurgence_Body6", "body6"},
			{"BNA_KC_Ven_Resurgence_Body7", "body7"},
			{"BNA_KC_Ven_Resurgence_Body8", "body8"},
			{"BNA_KC_Ven_Resurgence_Body9", "body9"},
			{"BNA_KC_Ven_Resurgence_Body10", "body10"},
			{"BNA_KC_Ven_Resurgence_Door2", "door"},
			{"BNA_KC_Ven_Resurgence_Engine", "engine"},
			{"BNA_KC_Ven_Resurgence_Bridge", "bridge"},
			{"BNA_KC_Ven_Resurgence_Interior1", "interior1"},
			{"BNA_KC_Ven_Resurgence_Interior2", "interior2"},
			{"BNA_KC_Ven_Resurgence_Interior3", "interior3"},
			{"BNA_KC_Ven_Resurgence_Interior4", "interior4"},
			{"BNA_KC_Ven_Resurgence_Interior5", "interior5"},
			{"BNA_KC_Ven_Resurgence_Interior6", "interior6"},
			{"BNA_KC_Ven_Resurgence_Interior7", "interior7"},
			{"BNA_KC_Ven_Resurgence_Interior8", "interior8"}
		};
	};

    class BNA_KC_Ven_Resurgence_ClosedFullyHollowed: BNA_KC_Ven_Resurgence_OpenFullyHollowed
	{
		displayName = "[KC] The Resurgance - Venator (Closed Fully Hollowed)";
		multiStructureParts[] =
		{
			{"BNA_KC_Ven_Resurgence_Body1_1", "body1_1"},
			{"BNA_KC_Ven_Resurgence_Body1_2", "body1_2"},
			{"BNA_KC_Ven_Resurgence_Body2_1", "body2_1"},
			{"BNA_KC_Ven_Resurgence_Body2_2", "body2_2"},
			{"BNA_KC_Ven_Resurgence_Body2_3", "body2_3"},
			{"BNA_KC_Ven_Resurgence_Body3", "body3"},
			{"BNA_KC_Ven_Resurgence_Body4", "body4"},
			{"BNA_KC_Ven_Resurgence_Body5", "body5"},
			{"BNA_KC_Ven_Resurgence_Body6", "body6"},
			{"BNA_KC_Ven_Resurgence_Body7", "body7"},
			{"BNA_KC_Ven_Resurgence_Body8", "body8"},
			{"BNA_KC_Ven_Resurgence_Body9", "body9"},
			{"BNA_KC_Ven_Resurgence_Body10", "body10"},
			{"BNA_KC_Ven_Resurgence_Door", "door"},
			{"BNA_KC_Ven_Resurgence_Engine", "engine"},
			{"BNA_KC_Ven_Resurgence_Bridge", "bridge"},
			{"BNA_KC_Ven_Resurgence_Interior1", "interior1"},
			{"BNA_KC_Ven_Resurgence_Interior2", "interior2"},
			{"BNA_KC_Ven_Resurgence_Interior3", "interior3"},
			{"BNA_KC_Ven_Resurgence_Interior4", "interior4"},
			{"BNA_KC_Ven_Resurgence_Interior5", "interior5"},
			{"BNA_KC_Ven_Resurgence_Interior6", "interior6"},
			{"BNA_KC_Ven_Resurgence_Interior7", "interior7"},
			{"BNA_KC_Ven_Resurgence_Interior8", "interior8"}
		};
	};

    class venator_zeus;
    class BNA_KC_Ven_Resurgence_Zeus: venator_zeus
	{
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
		editorSubcategory = "BNA_KC_SubCat_VStaticShips";

		displayName = "[KC] The Resurgance - Venator (Zeus)";

		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body1.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body2.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body3.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body4.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body5.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body6.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body7.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body8.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body9.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Body10.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Door.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Engine.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Interior1.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Interior2.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Interior3.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Interior4.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Interior5.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Interior6.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Interior7.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Interior8.paa",
			"BNA_KC_Props\StaticShips\Data\Resurgence\Resurgence_Bridge.paa"
		};
	};
};


class CfgEditorSubcategories
{
	class BNA_KC_SubCat_VStaticShips
	{
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Static Ships";
	};
};