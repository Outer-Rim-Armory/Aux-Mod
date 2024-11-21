class CLASS(Helmet_Phase2_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF P2 Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\phase2\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
    };
};

class CLASS(Helmet_Phase2_CR): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 00 (Recruit)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CR_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_CR_Legacy): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 00 (Recruit, Legacy)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CR_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CT): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_CT_v2): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 01 (Trooper, v2)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CT_v2_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_CT_Legacy): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 01 (Trooper, Legacy)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CT_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_CT_Empire): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 01 (Trooper, Empire)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CT_Empire_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_SCT): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 02 (Senior Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\SCT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_SCT_Legacy): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 02 (Senior Trooper, Legacy)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\SCT_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_SCT_Empire): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 02 (Senior Trooper, Empire)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\SCT_Empire_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_VCT): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 03 (Veteran Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\VCT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_VCT_Legacy): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 03 (Veteran Trooper, Legacy)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\VCT_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_VCT_Empire): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 03 (Veteran Trooper, Empire)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\VCT_Empire_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CLC): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 04 (Lance Corporal)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CLC_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_CLC_Legacy): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 04 (Lance Corporal, Legacy)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CLC_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CPL): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 05 (Corporal)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CPL_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CS): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 06 (Sergeant)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CS_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CS_Legacy): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 06 (Sergeant, Legacy)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CS_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CSS): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 07 (Staff Sergeant)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CSS_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CSFC): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 08 (Sergeant First Class)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CSFC_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CMS): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 09 (Master Sergeant)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CMS_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_CMS_Legacy): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 09 (Master Sergeant, Legacy)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CMS_legacy_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CSM): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 10 (Sergeant Major)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CSM_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Officer): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 11+ (Officer)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_WO): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 11 (Warrant Officer)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\WO_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_WO2): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 12 (Warrant Officer 2)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\WO2_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_WO3): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 13 (Warrant Officer 3)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\WO3_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CL): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 14 (Lieutenant)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CL_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CL1): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 15 (1st Lieutenant)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CL1_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CT_Medic): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 16 (CT Medic)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CT_Medic_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_CS_Medic): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 17 (Sergeant Medic)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\CS_Medic_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_WO_Medic): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 18 (WO Medic)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\WO_Medic_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

// class CLASS(Helmet_Phase2_CPT): CLASS(Helmet_Phase2_Base)
// {
//     displayName = "[KC] INF P2 Helm 16 (Captain)";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\helmets\phase2\CPT_camo1_co.paa),
//         "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
//     };
// };

// class CLASS(Helmet_Phase2_MAJ): CLASS(Helmet_Phase2_Base)
// {
//     displayName = "[KC] INF P2 Helm 17 ()";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\helmets\phase2\MAJ_camo1_co.paa),
//         "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
//     };
// };

// class CLASS(Helmet_Phase2_COM): CLASS(Helmet_Phase2_Base)
// {
//     displayName = "[KC] INF P2 Helm 18 (Commander)";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\helmets\phase2\COM_camo1_co.paa),
//         "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
//     };
// };

// Camo Helmets
class CLASS(Helmet_Phase2_Recruit_CamoBrown): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 00 (Recruit) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\Recruit_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_Recruit_CamoGrey): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 00 (Recruit) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\grey\Recruit_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Enlisted_CamoBrown): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 01+ (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_Enlisted_CamoGrey): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 01+ (Enlisted) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\grey\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_NCO_CamoBrown): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 06+ (NCO) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\NCO_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_NCO_CamoGrey): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 06+ (NCO) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\grey\NCO_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(Helmet_Phase2_Officer_CamoBrown): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 12+ (Officer) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\brown\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
class CLASS(Helmet_Phase2_Officer_CamoGrey): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm 12+ (Officer) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\camo\grey\Officer_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};

class CLASS(cloneArmor_helmet_phase2_textureTest): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helmet (Texture Test)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\phase2\standard\camo1_co.paa),
        QPATHTOF(data\helmets\phase2\standard\visor_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\helmets\phase2\standard\camo1.rvmat),
        QPATHTOF(data\helmets\phase2\standard\visor.rvmat)
    };
};