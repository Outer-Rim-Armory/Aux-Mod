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
    class BNA_KC_Vest_ARC;
    class BNA_KC_Vest_Katarn_Basic: BNA_KC_Vest_ARC
    {
        displayName = "[KC] SF Katarn I Vest";
        model = "\SWLB_clones_spec\SWLB_clone_commando_basic_armor.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenUnderwaterSelections[] = {};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_basic_armor_k1_ca.paa";
    };

    class BNA_KC_Vest_Katarn_EOD: BNA_KC_Vest_Katarn_Basic
    {
        displayName = "[KC] SF Katarn I EOD Vest";
        model = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_eod_armor_k1_ca.paa";
    };

    class BNA_KC_Vest_Katarn_SL: BNA_KC_Vest_Katarn_Basic
    {
        displayName = "[KC] SF Katarn I SL Pauldron";
        model = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sl_armor_k1_ca.paa";
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
        backpack = "";
    };


    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
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