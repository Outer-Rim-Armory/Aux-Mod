class CLASS(Helmet_Phase1_Tanker_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] ARMR P1 Helm 00 (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\ls_sob_phase1SpecOp_helmet.p3d";
    hiddenSelections[] = {"Camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\helmet_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"
    };
    picture = "\ls\core\addons\main\data\ui\ls_logo_ca.paa";

    subItems[] = {QCLASS(cloneNvg_chip)};

    HEARING_PROTECTION_CREW;
    TFAR_externalIntercomWirelessCapable = TRUE;

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo1", "visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\ls_sob_phase1SpecOp_helmet.p3d";
    };
};

class CLASS(Helmet_Phase1_Tanker_CT): CLASS(Helmet_Phase1_Tanker_Base) {
    displayName = "[KC] ARMR P1 Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1SpecOp\CT_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase1_Tanker_SCT): CLASS(Helmet_Phase1_Tanker_CT) {
    displayName = "[KC] ARMR P1 Helm 02 (Senior Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1SpecOp\SCT_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase1_Tanker_VCT): CLASS(Helmet_Phase1_Tanker_CT) {
    displayName = "[KC] ARMR P1 Helm 03 (Veteran Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1SpecOp\VCT_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase1_Tanker_NCO): CLASS(Helmet_Phase1_Tanker_CT) {
    displayName = "[KC] ARMR P1 Helm 04 (NCO)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1SpecOp\NCO_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase1_Tanker_Officer): CLASS(Helmet_Phase1_Tanker_CT) {
    displayName = "[KC] ARMR P1 Helm 05 (Officer)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1SpecOp\Officer_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa"
    };
};
