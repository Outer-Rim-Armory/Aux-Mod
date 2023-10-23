#include "CfgPatches.hpp"


class CfgWeapons
{
    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class SWLB_clone_basic_armor;
    class BNA_KC_Vest_Basic: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class BNA_KC_Vest_Airborne: BNA_KC_Vest_Basic
    {
        displayName = "[KC] AB Vest 01+ (Trooper)";

        model = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\heavy_accessories_co.paa",
            "\SWLB_clones\data\officer_accessories_co.paa",
            "\SWLB_clones\data\heavy_accessories_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
            uniformModel = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Airborne
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Airborne";
    };
};