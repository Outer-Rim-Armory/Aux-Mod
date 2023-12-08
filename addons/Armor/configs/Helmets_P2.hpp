class BNA_KC_Helmet_Phase2_Base: BNA_KC_Helmet_Base
{
    SCOPE_PUBLIC;

    displayName = "[KC] INF P2 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] =
    {
        "\ls_armor_bluefor\helmet\gar\phase2\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
    };
};

class BNA_KC_Helmet_Phase2_CR: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 00 (Recruit)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CR_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_CR_Legacy: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 00 (Recruit, Legacy)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CR_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_CT: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 01 (Trooper)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_CT_v2: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 01 (Trooper, Version 2)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CT_v2_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_CT_Legacy: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 01 (Trooper, Legacy)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CT_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_SCT: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 02 (Senior Trooper)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\SCT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_SCT_Legacy: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 02 (Senior Trooper, Legacy)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\SCT_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_VCT: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 03 (Veteran Trooper)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\VCT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_VCT_Legacy: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 03 (Veteran Trooper, Legacy)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\VCT_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_CLC: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 04 (Lance Corporal)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CLC_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_CLC_Legacy: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 04 (Lance Corporal, Legacy)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CLC_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_CPL: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 05 (Corporal)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CPL_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_CS: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 06 (Sergeant)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CS_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_CS_Legacy: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 06 (Sergeant, Legacy)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CS_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_CSS: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 07 (Staff Sergeant)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CSS_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_CSFC: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 08 (Sergeant First Class)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CSFC_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_CMS: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 09 (Master Sergeant)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CMS_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_CMS_Legacy: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 09 (Master Sergeant, Legacy)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CMS_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_CSM: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 10 (Sergeant Major)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\CSM_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_Officer: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 11+ (Officer)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_WO: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 11 (Warrant Officer)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\WO_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_WO2: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 12 (Warrant Officer 2)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\WO2_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_WO3: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 13 (Warrant Officer 3)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\WO3_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_LT: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 14 (Lieutenant)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\LT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_1LT: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 15 (1st Lieutenant)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\1LT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

// class BNA_KC_Helmet_Phase2_CPT: BNA_KC_Helmet_Phase2_Base
// {
//     displayName = "[KC] INF P2 Helm 16 (Captain)";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\helmets\phase2\CPT_camo1_co.paa),
//         "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
//     };
// };

// class BNA_KC_Helmet_Phase2_MAJ: BNA_KC_Helmet_Phase2_Base
// {
//     displayName = "[KC] INF P2 Helm 17 ()";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\helmets\phase2\MAJ_camo1_co.paa),
//         "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
//     };
// };

// class BNA_KC_Helmet_Phase2_COM: BNA_KC_Helmet_Phase2_Base
// {
//     displayName = "[KC] INF P2 Helm 18 (Commander)";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\helmets\phase2\COM_camo1_co.paa),
//         "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
//     };
// };

// Camo Helmets
class BNA_KC_Helmet_Phase2_Recruit_CamoBrown: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 00 (Recruit) - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\brown\Recruit_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_Recruit_CamoGrey: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 00 (Recruit) - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\grey\Recruit_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_Enlisted_CamoBrown: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 01+ (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\brown\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_Enlisted_CamoGrey: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 01+ (Enlisted) - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\grey\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_NCO_CamoBrown: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 06+ (NCO) - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\brown\NCO_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_NCO_CamoGrey: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 06+ (NCO) - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\grey\NCO_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_Officer_CamoBrown: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 12+ (Officer) - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\brown\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class BNA_KC_Helmet_Phase2_Officer_CamoGrey: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Helm 12+ (Officer) - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\grey\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Phase2_Insulated_CT: BNA_KC_Helmet_Phase2_Base
{
    displayName = "[KC] INF P2 Snow Helm 01 (Trooper)";

    model = "\ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\insulated\CT_camo1_co.paa)
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"Camo1"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
    };
};