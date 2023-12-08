class BNA_KC_Helmet_Phase1_Pilot_Base: BNA_KC_Helmet_Base
{
    SCOPE_PUBLIC;

    displayName = "[KC] AVI P1 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
    hiddenSelections[] = {"camo1", "camo2", "visor"};
    hiddenSelectionsTextures[] =
    {
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

    HEARING_PROTECTION_CREW

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "camo2", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
    };
};

class BNA_KC_Helmet_Phase1_Pilot_Airman: BNA_KC_Helmet_Phase1_Pilot_Base
{
    displayName = "[KC] AVI P1 Helm 01+ (Airman)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1Pilot\Airman_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };
};