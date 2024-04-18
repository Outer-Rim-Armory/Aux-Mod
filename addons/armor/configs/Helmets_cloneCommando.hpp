class CLASS(cloneCommando_helmet): CLASS(Helmet_ARC_Base) {
    displayName = "[KC] SF Clone Commando Helm (Base)";

    model = "\ls_armor_bluefor\helmet\sob\commando\lsd_sob_commando_helmet.p3d";
    hiddenSelections[] = {"illum", "camo1"};
    hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\sob\commando\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\sob\commando\data\helmet_co.paa"
    };
    picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_helmet_k1_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"illum", "camo1"};
        uniformModel = "\ls_armor_bluefor\helmet\sob\commando\lsd_sob_commando_helmet.p3d";
    };
};