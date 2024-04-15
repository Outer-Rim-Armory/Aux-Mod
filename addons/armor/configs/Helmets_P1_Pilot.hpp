class CLASS(Helmet_Phase1_Pilot_Base): CLASS(Helmet_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] AVI P1 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
    hiddenSelections[] = {"camo1", "camo2", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

    HEARING_PROTECTION_CREW;

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "camo2", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
    };
};

class CLASS(Helmet_Phase1Geo_Pilot): CLASS(Helmet_Phase1_Pilot_Base) {
    displayName = "[KC] AVI GEO Helm";
    hiddenSelectionsTextures[] = {
        "\swlb_cee\data\swlb_p1_pilot_helmet_republic_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase1_Pilot_CXA): CLASS(Helmet_Phase1_Pilot_Base) {
    displayName = "[KC] AVI P1 Helm 01 (Airman)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1Pilot\CXA_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };
};