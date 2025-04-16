class CLASS(Helmet_ATRT_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF AT-RT Helm (Base)";

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

class CLASS(Helmet_ATRT_CT_V1): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF AT-RT Helm (CT V1)";

    model = "ls_armor_bluefor\helmet\gar\atrt\ls_gar_atrt_helmet.p3d";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\atrt\CT_V1_camo1_co.paa),
        "ls_armor_bluefor\helmet\gar\atrt\data\helmet_atrt_t_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2"};
        uniformModel = "ls_armor_bluefor\helmet\gar\atrt\ls_gar_atrt_helmet.p3d";
    };
};

class CLASS(Helmet_ATRT_CT_V2): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF AT-RT Helm (CT V2)";

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