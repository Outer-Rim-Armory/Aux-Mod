class CLASS(Helmet_Phase1_Tanker_Base): CLASS(Helmet_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] ARMR P1 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\sob\phase1SpecOp\ls_sob_phase1SpecOp_helmet.p3d";
    hiddenSelections[] = {"Camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\sob\phase1SpecOp\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa"
    };

    subItems[] = {QCLASS(NVG_Chip)};

    HEARING_PROTECTION_CREW;

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\sob\phase1SpecOp\ls_sob_phase1SpecOp_helmet.p3d";
    };
};

class CLASS(Helmet_Phase1_Tanker_CT): CLASS(Helmet_Phase1_Tanker_Base) {
    displayName = "[KC] ARMR P1 Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1SpecOp\CT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase1_Tanker_CT_v2): CLASS(Helmet_Phase1_Tanker_CT) {
    displayName = "[KC] ARMR P1 Helm 01 (Trooper, v2)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1SpecOp\CT_v2_camo1_co.paa),
        "\ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa"
    };
};