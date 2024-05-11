class CLASS(Helmet_Phase12_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF P1-2 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\rex\ls_gar_rex_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\rex\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\rex\data\visor_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_p1_2_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\rex\ls_gar_rex_helmet.p3d";
    };
};