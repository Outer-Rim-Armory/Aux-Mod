class CLASS(Helmet_ATRT_CT_V2): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF ATRT Helm (CT V2)";

    model = "ls_armor_bluefor\helmet\gar\atrt\ls_gar_atrt_helmet.p3d";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\atrt\CT_V2_camo1_co.paa),
        "ls_armor_bluefor\helmet\gar\atrt\data\helmet_atrt_t_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2"};
        uniformModel = "ls_armor_bluefor\helmet\gar\atrt\ls_gar_atrt_helmet.p3d";
    };
};