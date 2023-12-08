class BNA_KC_Helmet_Phase2_Pilot_Base: BNA_KC_Helmet_Base
{
    SCOPE_PUBLIC;

    displayName = "[KC] AVI P2 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] =
    {
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_pilot_P2_helmet_ca.paa";

    HEARING_PROTECTION_CREW

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
    };
};

class BNA_KC_Helmet_Phase2_Pilot_Airman: BNA_KC_Helmet_Phase2_Pilot_Base
{
    displayName = "[KC] AVI P2 Helm 01+ (Airman)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2Pilot\Airman_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_Pilot_Officer: BNA_KC_Helmet_Phase2_Pilot_Base
{
    displayName = "[KC] AVI P2 Helm 11+ (Officer)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2Pilot\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_Pilot_Enlisted_CamoBrown: BNA_KC_Helmet_Phase2_Pilot_Airman
{
    displayName = "[KC] AVI P2 Helm 01+ (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2Pilot\camo\brown\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_Pilot_CamoGrey: BNA_KC_Helmet_Phase2_Pilot_Airman
{
    displayName = "[KC] AVI P2 Helm 01+ (Enlisted) - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2Pilot\camo\grey\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};