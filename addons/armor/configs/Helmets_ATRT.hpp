class CLASS(Helmet_ATRT_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF ATRT Helm (Base)";

    model = "ls_armor_bluefor\helmet\gar\atrt\ls_gar_atrt_helmet.p3d";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        "ls_armor_bluefor\helmet\gar\atrt\data\helmet_atrt_co.paa",
        "ls_armor_bluefor\helmet\gar\atrt\data\helmet_atrt_t_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2","visor"};
        uniformModel = "ls_armor_bluefor\helmet\gar\atrt\ls_gar_atrt_helmet.p3d";
    };
};