class CLASS(cloneCommando_helmet): CLASS(Helmet_ARC_Base) {
    displayName = "[KC] SF Clone Commando Helm (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\commando\ls_helmet_clone_commando.p3d";
    hiddenSelections[] = {"illum", "camo1"};
    hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\commando\data\camo1_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\commando\data\camo1_co.paa"
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_helmet_ui_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"illum", "camo1"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\commando\ls_helmet_clone_commando.p3d";
    };
};
