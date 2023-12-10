class BNA_KC_Unit_Phase2_Base: BNA_KC_Unit_Base
{
    SCOPE_PUBLIC;

    // Editor Properties
    editorSubcategory = "BNA_KC_EdSubCat_INF_P2";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_Base);

    uniformClass = "BNA_KC_Uniform_Base";
    hiddenSelectionsTextures[] =
    {
        "\ls_armor_bluefor\uniform\gar\phase2\data\camo1_co.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\camo2_co.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CR: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 00 - Clone Recruit";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CR);

    uniformClass = "BNA_KC_Uniform_CR";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CR_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CR_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CR", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CR", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CT: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 01 - Clone Trooper";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CT);

    uniformClass = "BNA_KC_Uniform_CT";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CT_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CT_Legacy: BNA_KC_Unit_Phase2_Base
{
    SCOPE_HIDDEN;
    displayName = "INF 01 - Clone Trooper";

    uniformClass = "BNA_KC_Uniform_CT_Legacy";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CT_legacy_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CT_legacy_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // No need to specify linked items,
    // this unit only exist to texture the legacy uniform
};

class BNA_KC_Unit_Phase2_SCT: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 02 - Senior Clone Trooper";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_SCT);

    uniformClass = "BNA_KC_Uniform_SCT";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\SCT_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\SCT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_SCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_SCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_VCT: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 03 - Veteran Clone Trooper";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_VCT);

    uniformClass = "BNA_KC_Uniform_VCT";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\VCT_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\VCT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_VCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_VCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// Start of JNCO Ranks

class BNA_KC_Unit_Phase2_CLC: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 04 - Clone Lance Corporal";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CLC);

    uniformClass = "BNA_KC_Uniform_CLC";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CLC_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CLC_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CLC", "BNA_KC_Vest_CLC", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CLC", "BNA_KC_Vest_CLC", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CPL: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 05 - Clone Corporal";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CPL);

    uniformClass = "BNA_KC_Uniform_CPL";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CPL_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CPL_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CPL", "BNA_KC_Vest_CPL", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CPL", "BNA_KC_Vest_CPL", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// Start of NCO Ranks

class BNA_KC_Unit_Phase2_CS: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 06 - Clone Sergeant";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CS);

    uniformClass = "BNA_KC_Uniform_CS";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CS_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CS_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CS", "BNA_KC_Vest_CS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CS", "BNA_KC_Vest_CS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CSS: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 07 - Clone Staff Sergeant";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CSS);

    uniformClass = "BNA_KC_Uniform_CSS";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CSS_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CSS_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSS", "BNA_KC_Vest_CSS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSS", "BNA_KC_Vest_CSS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CSFC: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 08 - Clone Sergeant First Class";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CSFC);

    uniformClass = "BNA_KC_Uniform_CSFC";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CSFC_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CSFC_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSFC", "BNA_KC_Vest_CSFC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSFC", "BNA_KC_Vest_CSFC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CMS: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 09 - Clone Master Sergeant";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CMS);

    uniformClass = "BNA_KC_Uniform_CSFC";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CMS_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CMS_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CMS", "BNA_KC_Vest_CMS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CMS", "BNA_KC_Vest_CMS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CSM: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 10 - Clone Sergeant Major";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CSM);

    uniformClass = "BNA_KC_Uniform_CSM";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CSM_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CSM_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSM", "BNA_KC_Vest_CSM", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSM", "BNA_KC_Vest_CSM", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// Start of Officer Ranks
class BNA_KC_Unit_Phase2_WO: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 11 - Clone Warrant Officer";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_WO);

    uniformClass = "BNA_KC_Uniform_WO";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\WO_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\WO_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    backpack = "BNA_KC_Backpack_Radio_Mini";
};

class BNA_KC_Unit_Phase2_WO2: BNA_KC_Unit_Phase2_WO
{
    displayName = "INF 12 - Clone Warrant Officer 2";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_WO2);

    uniformClass = "BNA_KC_Uniform_WO2";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\WO2_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\WO2_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO2", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO2", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_WO3: BNA_KC_Unit_Phase2_WO
{
    displayName = "INF 13 - Clone Warrant Officer 3";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_WO3);

    uniformClass = "BNA_KC_Uniform_WO";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\WO3_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\WO3_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO3", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO3", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CL: BNA_KC_Unit_Phase2_WO
{
    displayName = "INF 14 - Clone Lieutenant";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CL);

    uniformClass = "BNA_KC_Uniform_CL";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CL_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CL_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CL", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CL", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CL1: BNA_KC_Unit_Phase2_WO
{
    displayName = "INF 15 - Clone 1st Lieutenant";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CL1);

    uniformClass = "BNA_KC_Uniform_CL";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\CL1_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CL1_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CL1", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CL1", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// class BNA_KC_Unit_Phase2_CAP: BNA_KC_Unit_Phase2_WO
// {
//     displayName = "INF 16 - Clone Captain";

//     uniformClass = "BNA_KC_Uniform_CAP";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\uniforms\infantry\CAP_upper_co.paa),
//         QPATHTOF(data\uniforms\infantry\CAP_lower_co.paa),
//         "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CAP", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CAP", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// class BNA_KC_Unit_Phase2_MAJ: BNA_KC_Unit_Phase2_WO
// {
//     displayName = "INF 17 - Clone Major";

//     uniformClass = "BNA_KC_Uniform_MAJ";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\uniforms\infantry\MAJ_upper_co.paa),
//         QPATHTOF(data\uniforms\infantry\MAJ_lower_co.paa),
//         "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_MAJ", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_MAJ", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// class BNA_KC_Unit_Phase2_CMD: BNA_KC_Unit_Phase2_WO
// {
//     displayName = "INF 18 - Clone Commander";

//     uniformClass = "BNA_KC_Uniform_CMD";
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\uniforms\infantry\CMD_upper_co.paa),
//         QPATHTOF(data\uniforms\infantry\CMD_lower_co.paa),
//         "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CMD", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CMD", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// Camo Units
class BNA_KC_Unit_Phase2_Recruit_CamoBrown: BNA_KC_Unit_Phase2_Base
{
    SCOPE_HIDDEN;
    uniformClass = "BNA_KC_Uniform_Recruit_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\camo\brown\Recruit_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\brown\Recruit_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class BNA_KC_Unit_Phase2_Recruit_CamoGrey: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Recruit_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\camo\grey\Recruit_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\grey\Recruit_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class BNA_KC_Unit_Phase2_Enlisted_CamoBrown: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Enlisted_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\camo\brown\Enlisted_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\brown\Enlisted_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class BNA_KC_Unit_Phase2_Enlisted_CamoGrey: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Enlisted_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\camo\grey\Enlisted_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\grey\Enlisted_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class BNA_KC_Unit_Phase2_NCO_CamoBrown: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_NCO_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\camo\brown\NCO_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\brown\NCO_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class BNA_KC_Unit_Phase2_NCO_CamoGrey: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_NCO_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\camo\grey\NCO_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\grey\NCO_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class BNA_KC_Unit_Phase2_Officer_CamoBrown: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Officer_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\camo\brown\Officer_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\brown\Officer_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class BNA_KC_Unit_Phase2_Officer_CamoGrey: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Officer_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\infantry\camo\grey\Officer_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\grey\Officer_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class BNA_KC_Unit_Phase2_Insulated_Base: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF Snow - Base";
    // editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_Insulated_Base);

    // Uniform Model & Textures
    uniformClass = "BNA_KC_Uniform_Phase2_Insulated_Base";
    model = "\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
    hiddenSelections[] = {"_upper", "_lower", "_undersuit"};
    hiddenSelectionsTextures[] =
    {
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\upper_co.paa",
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\lower_co.paa",
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

    // Inventory
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Insulated_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Insulated_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_Insulated_CT: BNA_KC_Unit_Phase2_Insulated_Base
{
    displayName = "INF Snow 01 - Trooper";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_Insulated_CT);

    // Uniform Model & Textures
    uniformClass = "BNA_KC_Uniform_Phase2_Insulated_CT";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\insulated\CT_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\CT_lower_co.paa),
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

    // Inventory
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Insulated_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Insulated_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};