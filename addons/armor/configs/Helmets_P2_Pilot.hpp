class CLASS(Helmet_Phase2_Pilot_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] AVI P2 Helm (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\helmet_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
    picture = "\ls\core\addons\main\data\ui\ls_logo_ca.paa";

    HEARING_PROTECTION_CREW;
    TFAR_externalIntercomWirelessCapable = TRUE;

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
    };
};

class CLASS(Helmet_Phase2_Pilot_CXA): CLASS(Helmet_Phase2_Pilot_Base) {
    displayName = "[KC] AVI P2 Helm 01 (Airman)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2Pilot\CXA_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Pilot_CXE): CLASS(Helmet_Phase2_Pilot_Base) {
    displayName = "[KC] AVI P2 Helm 06 (Ensign)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2Pilot\CXE_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Pilot_Officer_CamoBrown): CLASS(Helmet_Phase2_Pilot_CXE) {
    displayName = "[KC] AVI P2 Helm 06+ (Officer) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2Pilot\camo\brown\Officer_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_Pilot_Officer_CamoGrey): CLASS(Helmet_Phase2_Pilot_CXE) {
    displayName = "[KC] AVI P2 Helm 06+ (Officer) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2Pilot\camo\grey\Officer_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
    };
};
