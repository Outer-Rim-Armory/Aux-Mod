class BNA_KC_Unit_Phase2_CR: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 00 - Clone Recruit";

    uniformClass = "BNA_KC_Uniform_CR";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CR_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CR_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CR", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CR", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_CT: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 01 - Clone Trooper";

    uniformClass = "BNA_KC_Uniform_CT";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CT_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CT_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_CT_Legacy: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 01 - Clone Trooper";

    scope = 1;        // Hides the unit in the Editor
    scopeCurator = 0; // Hides the unit in Zeus

    uniformClass = "BNA_KC_Uniform_CT_Legacy";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CT_Legacy_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CT_Legacy_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // No need to specify linked items,
    // this unit only exist to texture the legacy uniform
};

class BNA_KC_Unit_Phase2_SCT: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 02 - Senior Clone Trooper";

    uniformClass = "BNA_KC_Uniform_SCT";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_SCT_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_SCT_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_SCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_SCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_VCT: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 03 - Veteran Clone Trooper";

    uniformClass = "BNA_KC_Uniform_VCT";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_VCT_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_VCT_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_VCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_VCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

// Start of JNCO Ranks

class BNA_KC_Unit_Phase2_LCPL: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 04 - Clone Lance Corporal";

    uniformClass = "BNA_KC_Uniform_LCPL";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_LCPL_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_LCPL_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_LCPL", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_LCPL", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_CPL: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 05 - Clone Corporal";

    uniformClass = "BNA_KC_Uniform_CPL";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CPL_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CPL_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CPL", "k_ls_vest_recon_2", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CPL", "k_ls_vest_recon_2", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

// Start of NCO Ranks

class BNA_KC_Unit_Phase2_CS: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 06 - Clone Sergeant";

    uniformClass = "BNA_KC_Uniform_CS";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CS_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CS_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CS", "k_ls_vest_recon_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CS", "k_ls_vest_recon_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_CSS: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 07 - Clone Staff Sergeant";

    uniformClass = "BNA_KC_Uniform_CSS";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CSS_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CSS_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSS", "k_ls_vest_recon_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSS", "k_ls_vest_recon_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_CSFC: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 08 - Clone Sergeant First Class";

    uniformClass = "BNA_KC_Uniform_CSFC";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CSFC_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CSFC_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSFC", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSFC", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_CMS: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 09 - Clone Master Sergeant";

    uniformClass = "BNA_KC_Uniform_CSFC";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CMS_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CMS_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CMS", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CMS", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_CSM: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 10 - Clone Sergeant Major";

    uniformClass = "BNA_KC_Uniform_CSM";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CSM_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CSM_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSM", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSM", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

// Start of Officer Ranks
class BNA_KC_Unit_Phase2_WO: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 11 - Clone Warrant Officer";
    // editorPreview = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Preview_Officer_P2.paa";

    uniformClass = "BNA_KC_Uniform_WO";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_WO2: BNA_KC_Unit_Phase2_WO
{
    displayName = "[KC] INF 12 - Clone Warrant Officer 2";

    uniformClass = "BNA_KC_Uniform_WO2";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO2_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO2_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO2", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO2", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_WO3: BNA_KC_Unit_Phase2_WO
{
    displayName = "[KC] INF 13 - Clone Warrant Officer 3";

    uniformClass = "BNA_KC_Uniform_WO";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO3_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO3_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO3", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO3", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_LT: BNA_KC_Unit_Phase2_WO
{
    displayName = "[KC] INF 14 - Clone Lieutenant";

    uniformClass = "BNA_KC_Uniform_LT";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_LT_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_LT_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_LT", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_LT", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_1LT: BNA_KC_Unit_Phase2_WO
{
    displayName = "[KC] INF 15 - Clone 1st Lieutenant";

    uniformClass = "BNA_KC_Uniform_LT";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_1LT_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_1LT_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_1LT", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_1LT", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

// class BNA_KC_Unit_Phase2_CAP: BNA_KC_Unit_Phase2_WO
// {
//     displayName = "[KC] INF 16 - Clone Captain";

//     uniformClass = "BNA_KC_Uniform_CAP";
//     hiddenSelectionsTextures[] =
//     {
//         "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CAP_Upper.paa",
//         "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CAP_Lower.paa",
//         "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CAP", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
//     };
//     respawnLinkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CAP", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
//     };
// };

// class BNA_KC_Unit_Phase2_MAJ: BNA_KC_Unit_Phase2_WO
// {
//     displayName = "[KC] INF 17 - Clone Major";

//     uniformClass = "BNA_KC_Uniform_MAJ";
//     hiddenSelectionsTextures[] =
//     {
//         "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_MAJ_Upper.paa",
//         "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_MAJ_Lower.paa",
//         "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_MAJ", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
//     };
//     respawnLinkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_MAJ", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
//     };
// };

// class BNA_KC_Unit_Phase2_CMD: BNA_KC_Unit_Phase2_WO
// {
//     displayName = "[KC] INF 18 - Clone Commander";

//     uniformClass = "BNA_KC_Uniform_CMD";
//     hiddenSelectionsTextures[] =
//     {
//         "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CMD_Upper.paa",
//         "BNA_KC_Gear\Infantry\Data\Uniforms\BNA_KC_Uniform_CMD_Lower.paa",
//         "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CMD", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
//     };
//     respawnLinkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CMD", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
//     };
// };

// Camo Units
class BNA_KC_Unit_Phase2_Recruit_CamoBrown: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 00 - Clone Recruit (Brown Camo)";
    editorSubcategory = "BNA_KC_INF_Camo";

    uniformClass = "BNA_KC_Uniform_Recruit_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_Recruit_CamoBrown_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_Recruit_CamoBrown_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Recruit_CamoBrown", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Recruit_CamoBrown", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};
class BNA_KC_Unit_Phase2_Recruit_CamoGrey: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 00 - Clone Recruit (Grey Camo)";
    editorSubcategory = "BNA_KC_INF_Camo";

    uniformClass = "BNA_KC_Uniform_Recruit_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_Recruit_CamoGrey_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_Recruit_CamoGrey_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Recruit_CamoGrey", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Recruit_CamoGrey", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_Enlisted_CamoBrown: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 01+ - Clone Trooper (Brown Camo)";
    editorSubcategory = "BNA_KC_INF_Camo";

    uniformClass = "BNA_KC_Uniform_Enlisted_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_Enlisted_CamoBrown_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_Enlisted_CamoBrown_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Enlisted_CamoBrown", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Enlisted_CamoBrown", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};
class BNA_KC_Unit_Phase2_Enlisted_CamoGrey: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 01+ - Clone Trooper (Grey Camo)";
    editorSubcategory = "BNA_KC_INF_Camo";

    uniformClass = "BNA_KC_Uniform_Enlisted_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_Enlisted_CamoGrey_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_Enlisted_CamoGrey_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Enlisted_CamoGrey", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Enlisted_CamoGrey", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_NCO_CamoBrown: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 06+ - Clone NCO (Brown Camo)";
    editorSubcategory = "BNA_KC_INF_Camo";

    uniformClass = "BNA_KC_Uniform_NCO_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_NCO_CamoBrown_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_NCO_CamoBrown_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_NCO_CamoBrown", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_NCO_CamoBrown", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};
class BNA_KC_Unit_Phase2_NCO_CamoGrey: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 06+ - Clone NCO (Grey Camo)";
    editorSubcategory = "BNA_KC_INF_Camo";

    uniformClass = "BNA_KC_Uniform_NCO_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_NCO_CamoGrey_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_NCO_CamoGrey_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_NCO_CamoGrey", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_NCO_CamoGrey", "k_ls_vest_recon_officer_1", "BNA_KC_NVG_Rangefinder", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};

class BNA_KC_Unit_Phase2_Officer_CamoBrown: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 12+ - Clone Officer (Brown Camo)";
    editorSubcategory = "BNA_KC_INF_Camo";

    uniformClass = "BNA_KC_Uniform_Officer_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_Officer_CamoBrown_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\BNA_KC_Uniform_Officer_CamoBrown_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Officer_CamoBrown", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Chip", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Officer_CamoBrown", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Chip", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};
class BNA_KC_Unit_Phase2_Officer_CamoGrey: BNA_KC_Unit_Phase2_Base
{
    displayName = "[KC] INF 12+ - Clone Officer (Grey Camo)";
    editorSubcategory = "BNA_KC_INF_Camo";

    uniformClass = "BNA_KC_Uniform_Officer_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_Officer_CamoGrey_Upper.paa",
        "BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\BNA_KC_Uniform_Officer_CamoGrey_Lower.paa",
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Officer_CamoGrey", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Chip", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Officer_CamoGrey", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Chip", "BNA_KC_NVG_Officer", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
    };
};