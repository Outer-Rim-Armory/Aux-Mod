class CLASS(Helmet_Phase2_Pilot_Base): CLASS(Helmet_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] AVI P2 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_pilot_P2_helmet_ca.paa";

    HEARING_PROTECTION_CREW;

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
    };
};

class CLASS(Helmet_Phase2_Pilot_CXA): CLASS(Helmet_Phase2_Pilot_Base) {
    displayName = "[KC] AVI P2 Helm 01 (Airman)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2Pilot\CXA_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Pilot_CXE): CLASS(Helmet_Phase2_Pilot_Base) {
    displayName = "[KC] AVI P2 Helm 06 (Ensign)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2Pilot\CXE_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Pilot_Officer_CamoBrown): CLASS(Helmet_Phase2_Pilot_CXE) {
    displayName = "[KC] AVI P2 Helm 06+ (Officer) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2Pilot\camo\brown\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_Pilot_Officer_CamoGrey): CLASS(Helmet_Phase2_Pilot_CXE) {
    displayName = "[KC] AVI P2 Helm 06+ (Officer) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2Pilot\camo\grey\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};