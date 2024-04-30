class CLASS(Helmet_Phase1_Base): CLASS(Helmet_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF P1 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor", "illum"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\phase1\data\helmet_P1_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor", "illum"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
    };
};

class CLASS(Helmet_Phase1_CR): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 00 (Recruit)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CR_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_CT): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};
class CLASS(Helmet_Phase1_CT_v2): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 01 (Trooper, v2)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CT_v2_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};
class CLASS(Helmet_Phase1_CT_v3): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 01 (Trooper, v3)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CT_v3_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};
class CLASS(Helmet_Phase1_CT_v4): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 01 (Trooper, Version 4)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CT_v4_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_SCT): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 02 (Senior Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\SCT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_VCT): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 03 (Veteran Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\VCT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_CLC): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 04 (Lance Corporal)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CLC_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_CPL): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 05 (Corporal)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CPl_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_CS): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 06 (Sergeant)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CS_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_CSS): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 07 (Staff Sergeant)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CSS_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_CSFC): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 08 (Sergeant First Class)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CSFC_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_CMS): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 09 (Master Sergeant)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CMS_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_CSM): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 10 (Sergeant Major)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\CSM_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

// class CLASS(Helmet_Phase1_CL): CLASS(Helmet_Phase1_Base)
// {
//     displayName = "[KC] INF P1 Helm 11 (Lieutenant)";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\helmets\phase1\LT_camo1_co.paa),
//         "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
//         "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
//     };
// };

// class CLASS(Helmet_Phase1_Officer): CLASS(Helmet_Phase1_Base)
// {
//     displayName = "[KC] INF P1 Helm 12+ (Officer)";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\helmets\phase1\Officer_camo1_co.paa),
//         "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
//         "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
//     };
// };

// Camo Helmets
class CLASS(Helmet_Phase1_Recruit_CamoBrown): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 00 (Recruit) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\brown\Recruit_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};
class CLASS(Helmet_Phase1_Recruit_CamoGrey): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 00 (Recruit) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\grey\Recruit_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_Enlisted_CamoBrown): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 01+ (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\brown\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};
class CLASS(Helmet_Phase1_Enlisted_CamoGrey): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 01+ (Enlisted) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\grey\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_NCO_CamoBrown): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 06+ (NCO) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\brown\NCO_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};
class CLASS(Helmet_Phase1_NCO_CamoGrey): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 06+ (NCO) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\grey\NCO_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_Officer_CamoBrown): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 12+ (Officer) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\brown\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};
class CLASS(Helmet_Phase1_Officer_CamoGrey): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm 12+ (Officer) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\camo\grey\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_ARC_CT): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] SF ARC P1 Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase1\ARC_CT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_phase1Geo_Enlisted): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 01 (Enlisted)";
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\phase1\data\helmet_P1_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_phase1Geo_NCO): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 02 (NCO)";
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\SWLB_clone_P1Sergeant_helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_phase1Geo_Officer): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 03 (Officer)";
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\SWLB_clone_P1Lieutenant_helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_phase1Geo_Captain): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 04 (CPT)";
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\SWLB_clone_P1Captain_helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_phase1Geo_Commander): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF GEO Helm 05 (CMD)";
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\SWLB_clone_P1Commander_helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};