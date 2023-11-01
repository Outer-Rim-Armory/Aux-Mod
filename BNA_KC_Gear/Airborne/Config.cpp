#include "CfgPatches.hpp"
#include "\BNA_KC_Gear\Macros.hpp"


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_gar_phase2_helmet;
    class BNA_KC_Helmet_Base: ls_gar_phase2_helmet
    {
        class ItemInfo;
    };
    class BNA_KC_Helmet_Airborne: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] AB Helm (Trooper)";

        model = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
        hiddenSelections[] = {"camo1", "visor"};
        hiddenSelectionsMaterials[] =
        {
            "\lsd_armor_bluefor\helmet\gar\airborne\data\helmet.rvmat",
            "\lsd_armor_bluefor\helmet\gar\airborne\data\visor.rvmat"
        };
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Airborne\Data\Textures\Helmets\Helmet_Airborne.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ab_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "visor"};
            uniformModel = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
        };

        subItems[] = {"BNA_KC_NVG_Chip"};
    };

    class BNA_KC_Helmet_Airborne_v2: BNA_KC_Helmet_Airborne
    {
        displayName = "[KC] AB Helm (Trooper, Version 2)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Airborne\Data\Textures\Helmets\Helmet_Airborne_v2.paa"
        };
    };
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
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            "\SWLB_clones\data\officer_accessories_co.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
            uniformModel = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
        };
    };

    class BNA_KC_Vest_Airborne_Light: BNA_KC_Vest_Airborne
    {
        displayName = "[KC] AB Vest 01+ (Trooper, Light)";
        model = "\SWLB_CEE\data\SWLB_CEE_Airborne_Light.p3d";
        hiddenSelections[] = {"ammo", "camo1", "camo2", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            ""
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"ammo", "camo1", "camo2", "pauldron"};
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Airborne_Light.p3d";
        };
    };

    class BNA_KC_Vest_Airborne_CLS: BNA_KC_Vest_Airborne_Light
    {
        displayName = "[KC] AB Medic Vest 01+ (CLS)";
        model = "\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
        };
    };

    class BNA_KC_Vest_Airborne_NCO: BNA_KC_Vest_Airborne
    {
        displayName = "[KC] AB Vest 04+ (NCO)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            "\SWLB_clones\data\officer_accessories_co.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_nco_armor_ca.paa";
    };

    class BNA_KC_Vest_Airborne_Officer: BNA_KC_Vest_Airborne
    {
        displayName = "[KC] AB Vest 12+ (Officer)";
        model = "\ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
        hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_core\data\common_textures\accessories\heavy_accessories_co.paa",
            "\SWLB_core\data\common_textures\accessories\heavy_accessories_co.paa",
            "\SWLB_core\data\common_textures\accessories\officer_accessories_co.paa",
            "\SWLB_core\data\common_textures\accessories\officer_accessories_co.paa",
            ""
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
            uniformModel = "\ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
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