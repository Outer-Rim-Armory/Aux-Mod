class CLASS(Helmet_Sand_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF Sand Helm (Base)";

    model = "ls_armor_bluefor\helmet\gar\desert\ls_gar_desert_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "ls_armor_bluefor\helmet\gar\desert\data\camo1_co.paa",
        "ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa"
    };
    picture = "\ls_data\icons\LS_logo_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "ls_armor_bluefor\helmet\gar\desert\ls_gar_desert_helmet.p3d";
    };
};

class CLASS(Helmet_Sand_CT): CLASS(Helmet_Sand_Base) {
    displayName = "[KC] INF Sand Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\desert\CT_camo1_co.paa),
        "ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa"
    };
};