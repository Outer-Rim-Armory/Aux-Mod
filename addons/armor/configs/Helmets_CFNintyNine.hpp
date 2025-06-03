class CLASS(Helmet_Hunter_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF Hunter Helm (Base)";

    model = "\ls_armor_bluefor\helmet\sob\hunter\ls_sob_hunter_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "ls_armor_bluefor\helmet\sob\hunter\data\camo1_co.paa",
        "ls_armor_bluefor\helmet\sob\hunter\data\visor_co.paa"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\sob\hunter\ls_sob_hunter_helmet.p3d";
    };
};