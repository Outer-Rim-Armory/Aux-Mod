#include "CfgPatches.hpp"


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
    class BNA_KC_Helmet_Engineer: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] ENG Helm (Base)";

        model = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
        hiddenSelections[] = {"camo1", "illum", "visor"};
        hiddenSelectionsMaterials[] = {"", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat", ""};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Engineers\Data\Textures\Helmets\Helmet_Engineer.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
        };
        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_engineer_helmet_ca.paa";

        // LS Headlamp
        ls_lighting_hasLight = 1;
        ls_lighting_itemType = "headgear";
        ls_lighting_attachedBone = "head";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "illum", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_Engineer_CamoBrown: BNA_KC_Helmet_Engineer
    {
        displayName = "[KC] ENG Helm (Base) - Brown Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Engineers\Data\Textures\Helmets\Helmet_Engineer_CamoBrown.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_Engineer_CamoGrey: BNA_KC_Helmet_Engineer
    {
        displayName = "[KC] ENG Helm (Base) - Grey Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Engineers\Data\Textures\Helmets\Helmet_Engineer_CamoGrey.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
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
    class BNA_KC_Vest_Engineer: BNA_KC_Vest_Basic
    {
        displayName = "[KC] ENG Vest 01+ (Engineer)";

        model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",
            "\SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
        };
    };

    class BNA_KC_Vest_Engineer_NCO: BNA_KC_Vest_Engineer
    {
        displayName = "[KC] ENG Vest 04+ (NCO)";

        model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            "\SWLB_clones\data\officer_accessories_co.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            "\SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa",
            "\SWLB_clones\data\arc_accessories_co.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6"};
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
        };
    };

    class BNA_KC_Vest_Engineer_Officer: BNA_KC_Vest_Engineer
    {
        displayName = "[KC] ENG Vest 12+ (Officer)";

        model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_Officer.p3d";
        hiddenSelectionsTextures[] =
        {
            "\SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa",
            "\SWLB_clones\data\officer_accessories_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_Officer.p3d";
        };
    };

    // ┌──────────────────┐
    // │       NVGs       │
    // └──────────────────┘
    class lsd_gar_standard_nvg;
    class BNA_KC_NVG_Chip: lsd_gar_standard_nvg
    {
        class ItemInfo;
    };
    class BNA_KC_NVG_Engineer: BNA_KC_NVG_Chip
    {
        displayName = "[KC] Engineer Comms";

        model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Comms.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\SWLB_clone_nvg_co.paa",
            "\SWLB_clones\data\SWLB_clone_nvg_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ccVisor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Comms.p3d";
            modelOff = "\SWLB_CEE\data\SWLB_CEE_Engineer_Comms.p3d";
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
    class BNA_KC_SubCat_Engineers
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Engineers";
    };
};