class CLASS(Helmet_BARC_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF BARC Helm 00 (Base)";

    model = "\ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\barc\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_barc_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
    };
};

class CLASS(Helmet_BARC_CT): CLASS(Helmet_BARC_Base) {
    displayName = "[KC] INF BARC Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\barc\CT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
    };
};