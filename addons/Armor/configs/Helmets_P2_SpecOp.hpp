class BNA_KC_Helmet_Phase2_Tanker_Base: BNA_KC_Helmet_Base
{
    SCOPE_PUBLIC;

    displayName = "[KC] ARMR P2 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\sob\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d";
    hiddenSelections[] = {"Camo1", "visor"};
    hiddenSelectionsTextures[] =
    {
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
    };

    subItems[] = {"BNA_KC_NVG_Chip"};

    HEARING_PROTECTION_CREW

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"Camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\sob\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d";
    };
};

class BNA_KC_Helmet_Phase2_Tanker_CT: BNA_KC_Helmet_Phase2_Tanker_Base
{
    displayName = "[KC] ARMR P2 Helm 01 (Trooper)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2SpecOp\CT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_Tanker_CT_v2: BNA_KC_Helmet_Phase2_Tanker_CT
{
    displayName = "[KC] ARMR P2 Helm 01 (Trooper, v2)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2SpecOp\CT_v2_camo1_co.paa),
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_Tanker_Enlisted_CamoBrown: BNA_KC_Helmet_Phase2_Tanker_CT
{
    displayName = "[KC] ARMR P2 Helm 01 (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2SpecOp\camo\brown\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_Tanker_Enlisted_CamoGrey: BNA_KC_Helmet_Phase2_Tanker_CT
{
    displayName = "[KC] ARMR P2 Helm 01 (Enlisted) - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2SpecOp\camo\grey\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
    };
};