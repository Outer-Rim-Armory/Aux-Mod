#include "CfgPatches.hpp"

class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class BNA_KC_Helmet_Base;
    class BNA_KC_Helmet_ARC: BNA_KC_Helmet_Base
    {
        class ItemInfo;
    };
    class BNA_KC_Helmet_Katarn: BNA_KC_Helmet_ARC
    {
        displayName = "[KC] SF Katarn I Helmet";

        model = "\ls_armor_bluefor\helmet\sob\commando\lsd_sob_commando_helmet.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        hiddenSelectionsTextures[] =
        {
            "\ls_armor_bluefor\helmet\sob\commando\data\helmet_co.paa",
            "\ls_armor_bluefor\helmet\sob\commando\data\helmet_co.paa"
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_helmet_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"illum", "camo1"};
            uniformModel = "\ls_armor_bluefor\helmet\sob\commando\lsd_sob_commando_helmet.p3d";
        };
    };


    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class BNA_KC_Uniform_Base;
    class BNA_KC_Uniform_ARC: BNA_KC_Uniform_Base
    {
        class ItemInfo;
    };
    class BNA_KC_Uniform_Katarn: BNA_KC_Uniform_ARC
    {
        displayName = "[KC] SF Katarn I Armor";
        model = "\ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform_groundholder.p3d";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_uniform_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Commando";
        };
    };


    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class BNA_KC_Vest_Basic;
    class BNA_KC_Vest_ARC: BNA_KC_Vest_Basic
    {
        class ItemInfo;
    };
    class BNA_KC_Vest_Katarn_Basic: BNA_KC_Vest_ARC
    {
        displayName = "[KC] SF Katarn I Vest";
        model = "\SWLB_clones_spec\SWLB_clone_commando_basic_armor.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenUnderwaterSelections[] = {};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_basic_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {};
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_basic_armor.p3d";
            containerClass = "Supply300";
        };
    };

    class BNA_KC_Vest_Katarn_EOD: BNA_KC_Vest_Katarn_Basic
    {
        displayName = "[KC] SF Katarn I EOD Vest";
        model = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_eod_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        };
    };

    class BNA_KC_Vest_Katarn_SL: BNA_KC_Vest_Katarn_Basic
    {
        displayName = "[KC] SF Katarn I SL Pauldron";
        model = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sl_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
        };
    };

    class BNA_KC_Vest_Katarn_Sniper: BNA_KC_Vest_Katarn_Basic
    {
        displayName = "[KC] SF Katarn I Sniper Vest";
        model = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones_spec\data\camo2_co.paa",
            "\SWLB_clones_spec\data\camo2_co.paa"
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sniper_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"illum", "camo1"};
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
        };
    };

    class BNA_KC_Vest_Katarn_Tech: BNA_KC_Vest_Katarn_Basic
    {
        displayName = "[KC] SF Katarn I Tech Vest";
        model = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\SWLB_clones_spec\data\camo2_co.paa"};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_tech_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1"};
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
        };
    };

    // ┌──────────────────┐
    // │       NVGs       │
    // └──────────────────┘
    class BNA_KC_NVG_Chip;
    class BNA_KC_NVG_Katarn_Visor: BNA_KC_NVG_Chip
    {
        displayName = "[KC] SF Katarn I Visor";
        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        hiddenSelectionsTextures[] = {"\SWLB_clones_spec\data\helmet_co.paa", "\SWLB_clones_spec\data\helmet_co.paa"};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_ca.paa";
    };

    class BNA_KC_NVG_Katarn_Antenna: BNA_KC_NVG_Chip
    {
        displayName = "[KC] SF Katarn I Antenna";
        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\SWLB_clones_spec\data\helmet_co.paa"};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_antenna_ca.paa";
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_Unit_ARC;
    class BNA_KC_Unit_Commando: BNA_KC_Unit_ARC
    {
        displayName = "Republic Commando"
        editorPreview = "\SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_base.jpg";
        editorSubcategory = "BNA_KC_Subcat_Commandos";

        uniformClass = "BNA_KC_Uniform_Katarn";
        model = "\ls_armor_bluefor\uniform\sob\commando\ls_sob_commando_uniform.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\ls_armor_bluefor\uniform\sob\commando\data\camo1_co.paa",
            "\ls_armor_bluefor\uniform\sob\commando\data\camo2_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_Katarn", "BNA_KC_Vest_Katarn_Basic", "BNA_KC_NVG_Chip", "lsd_gar_republicCommando_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Katarn", "BNA_KC_Vest_Katarn_Basic", "BNA_KC_NVG_Chip", "lsd_gar_republicCommando_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        backpack = "BNA_KC_Backack_Katarn";
    };


    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class BNA_KC_Backpack;
    class BNA_KC_Backack_Katarn: BNA_KC_Backpack
    {
        displayName = "[KC] Katarn II Commando Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones_spec\backpacks\data\backpack_co.paa",
            "\SWLB_clones_spec\backpacks\data\backpack_co.paa"
        };
        picture = "\SWLB_clones_spec\backpacks\data\ui\icon_SWLB_clone_commando_backpack_k2_ca.paa";
        maximumLoad = 450;
    };

    class BNA_KC_Backack_Katarn_EOD: BNA_KC_Backack_Katarn
    {
        displayName = "[KC] Katarn II Commando EOD Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_eod.p3d";
        picture = "\SWLB_clones_spec\backpacks\data\ui\icon_SWLB_clone_commando_backpack_k2_eod_ca.paa";
    };

    class BNA_KC_Backack_Katarn_RTO: BNA_KC_Backack_Katarn
    {
        displayName = "[KC] Katarn II Commando Radio Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_rto.p3d";
        picture = "\SWLB_clones_spec\backpacks\data\ui\icon_SWLB_clone_commando_backpack_k2_rto_ca.paa";

        // TFAR Long Range
        tf_hasLRradio = 1;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class BNA_KC_Backack_Katarn_Tech: BNA_KC_Backack_Katarn
    {
        displayName = "[KC] Katarn II Commando Tech Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_tech.p3d";
        hiddenSelections[] = {"illum", "camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones_spec\backpacks\data\backpack_co.paa",
            "\SWLB_clones_spec\backpacks\data\backpack_co.paa",
            "\SWLB_clones_spec\backpacks\data\backpack_tech_co.paa"
        };
        picture = "\SWLB_clones_spec\backpacks\data\ui\icon_SWLB_clone_commando_backpack_k2_ca.paa";
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_Subcat_Commandos
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Commandos";
    };
};