class CLASS(Helmet_Phase1_Pilot_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] AVI P1 Helm (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\ls_cloneHelmet_phase1_pilot.p3d";
    hiddenSelections[] = {"camo1", "camo2", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\helmet_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\lifesupport_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\visor_co.paa"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

    HEARING_PROTECTION_CREW;
    TFAR_externalIntercomWirelessCapable = TRUE;

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "camo2", "visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\ls_cloneHelmet_phase1_pilot.p3d";
    };
};

class CLASS(Helmet_Phase1Geo_Pilot): CLASS(Helmet_Phase1_Pilot_Base) {
    displayName = "[KC] AVI GEO Helm";
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\helmet_republic_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\lifesupport_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase1_Pilot_CXA): CLASS(Helmet_Phase1_Pilot_Base) {
    displayName = "[KC] AVI P1 Helm 01 (Airman)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1Pilot\CXA_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\lifesupport_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\visor_co.paa"
    };
};
