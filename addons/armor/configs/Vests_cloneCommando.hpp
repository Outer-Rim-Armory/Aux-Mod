class CLASS(cloneCommando_basic_vest): CLASS(Vest_ARC) {
    displayName = "[KC] SF Clone Commando Vest";
    model = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando.p3d";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    hiddenUnderwaterSelections[] = {};
    picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {};
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando.p3d";
    };
};

class CLASS(cloneCommando_SL_vest): CLASS(cloneCommando_basic_vest) {
    displayName = "[KC] SF Clone Commando SL Pauldron";
    model = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_sl.p3d";
    hiddenSelections[] = {"camo1",};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_clone_legacy\uniforms\commando\data\camo2_co.paa"};
    picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_sl_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_sl.p3d";
    };
};

class CLASS(cloneCommando_EOD_vest): CLASS(cloneCommando_basic_vest) {
    displayName = "[KC] SF Clone Commando EOD Vest";
    model = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_eod.p3d";
    picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_eod_vest_ui_ca.paa";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_clone_legacy\uniforms\commando\data\camo2_co.paa"};

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_eod.p3d";
    };
};

class CLASS(cloneCommando_Sniper_vest): CLASS(cloneCommando_basic_vest) {
    displayName = "[KC] SF Commando Sniper Vest";
    model = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
    hiddenSelections[] = {"illum", "camo1"};
    hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\uniforms\commando\data\camo2_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\commando\data\camo2_co.paa"
    };
    picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sniper_armor_k1_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"illum", "camo1"};
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
    };
};

class CLASS(cloneCommando_Tech_vest): CLASS(cloneCommando_basic_vest) {
    displayName = "[KC] SF Commando Tech Vest";
    model = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_tech.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_clone_legacy\uniforms\commando\data\camo2_co.paa"};
    picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_tech_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_tech.p3d";
    };
};
