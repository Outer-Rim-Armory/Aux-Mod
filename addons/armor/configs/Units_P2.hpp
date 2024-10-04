class CLASS(Unit_Phase2_Base): CLASS(Unit_Base) {
    SCOPE_PUBLIC;

    // Editor Properties
    editorSubcategory = QEDSUBCAT(INF_P2);
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_Base);

    uniformClass = QCLASS(Uniform_Base);
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\uniform\gar\phase2\data\camo1_co.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\camo2_co.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Base), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Base), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CR): CLASS(Unit_Phase2_Base) {
    displayName = "INF 00 - Clone Recruit";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CR);

    uniformClass = QCLASS(Uniform_CR);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CR_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CR_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CR), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CR), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CT): CLASS(Unit_Phase2_Base) {
    displayName = "INF 01 - Clone Trooper";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CT);

    uniformClass = QCLASS(Uniform_CT);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CT_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CT_Legacy): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    displayName = "INF 01 - Clone Trooper";

    uniformClass = QCLASS(Uniform_CT_Legacy);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CT_legacy_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CT_legacy_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // No need to specify linked items,
    // this unit only exist to texture the legacy uniform
};

class CLASS(Unit_Phase2_SCT): CLASS(Unit_Phase2_Base) {
    displayName = "INF 02 - Senior Clone Trooper";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_SCT);

    uniformClass = QCLASS(Uniform_SCT);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\SCT_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\SCT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_SCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_SCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_VCT): CLASS(Unit_Phase2_Base) {
    displayName = "INF 03 - Veteran Clone Trooper";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_VCT);

    uniformClass = QCLASS(Uniform_VCT);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\VCT_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\VCT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_VCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_VCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// Start of JNCO Ranks

class CLASS(Unit_Phase2_CLC): CLASS(Unit_Phase2_Base) {
    displayName = "INF 04 - Clone Lance Corporal";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CLC);

    uniformClass = QCLASS(Uniform_CLC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CLC_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CLC_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CLC), QCLASS(Vest_CLC), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CLC), QCLASS(Vest_CLC), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CPL): CLASS(Unit_Phase2_Base) {
    displayName = "INF 05 - Clone Corporal";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CPL);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CPL);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CPL_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CPL_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CPL), QCLASS(Vest_CPL), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CPL), QCLASS(Vest_CPL), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// Start of NCO Ranks

class CLASS(Unit_Phase2_CS): CLASS(Unit_Phase2_Base) {
    displayName = "INF 06 - Clone Sergeant";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CS);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CS);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CS_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CS_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CS), QCLASS(Vest_CS), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CS), QCLASS(Vest_CS), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CSS): CLASS(Unit_Phase2_Base) {
    displayName = "INF 07 - Clone Staff Sergeant";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CSS);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CSS);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CSS_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CSS_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CSS), QCLASS(Vest_CSS), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CSS), QCLASS(Vest_CSS), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CSFC): CLASS(Unit_Phase2_Base) {
    displayName = "INF 08 - Clone Sergeant First Class";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CSFC);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CSFC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CSFC_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CSFC_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CSFC), QCLASS(Vest_CSFC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CSFC), QCLASS(Vest_CSFC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CMS): CLASS(Unit_Phase2_Base) {
    displayName = "INF 09 - Clone Master Sergeant";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CMS);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CSFC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CMS_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CMS_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CMS), QCLASS(cloneVest_CMS), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CMS), QCLASS(cloneVest_CMS), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CSM): CLASS(Unit_Phase2_Base) {
    displayName = "INF 10 - Clone Sergeant Major";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CSM);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CSM);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CSM_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CSM_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CSM), QCLASS(Vest_CSM), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CSM), QCLASS(Vest_CSM), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// Start of Officer Ranks
class CLASS(Unit_Phase2_WO): CLASS(Unit_Phase2_Base) {
    displayName = "INF 11 - Clone Warrant Officer";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_WO);
    icon = "iconManOfficer";

    uniformClass = QCLASS(Uniform_WO);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\WO_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\WO_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_WO), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_WO), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };

    backpack = QCLASS(Backpack_Radio_Mini);
};

class CLASS(Unit_Phase2_WO2): CLASS(Unit_Phase2_Base) {
    displayName = "INF 12 - Clone Warrant Officer 2";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_WO2);
    icon = "iconManOfficer";

    uniformClass = QCLASS(Uniform_WO2);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\WO2_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\WO2_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_WO2), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_WO2), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_WO3): CLASS(Unit_Phase2_Base) {
    displayName = "INF 13 - Clone Warrant Officer 3";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_WO3);
    icon = "iconManOfficer";

    uniformClass = QCLASS(Uniform_WO3);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\WO3_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\WO3_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_WO3), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_WO3), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CL): CLASS(Unit_Phase2_Base) {
    displayName = "INF 14 - Clone Lieutenant";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CL);
    icon = "iconManOfficer";

    uniformClass = QCLASS(Uniform_CL);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CL_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CL_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CL), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CL), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CL1): CLASS(Unit_Phase2_Base) {
    displayName = "INF 15 - Clone 1st Lieutenant";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CL1);
    icon = "iconManOfficer";

    uniformClass = QCLASS(Uniform_CL);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CL1_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CL1_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CL1), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CL1), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CT_Medic): CLASS(Unit_Phase2_Base) {
    displayName = "INF 16 - Clone Medic";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CT_Medic);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CT_Medic);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CT_Medic_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CT_Medic_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CT_Medic), QCLASS(Vest_Medic), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CT_Medic), QCLASS(Vest_Medic), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_CS_Medic): CLASS(Unit_Phase2_Base) {
    displayName = "INF 17 - Clone Sergeant Medic";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_CS_Medic);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CS_Medic);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\CS_Medic_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\CS_Medic_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CS_Medic), QCLASS(Vest_CS), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CS_Medic), QCLASS(Vest_CS), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_WO_Medic): CLASS(Unit_Phase2_Base) {
    displayName = "INF 18 - Clone Warrant Officer Medic";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_WO_Medic);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CS_Medic);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\WO_Medic_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\WO_Medic_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_WO_Medic), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_WO_Medic), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};


// class CLASS(Unit_Phase2_CAP): CLASS(Unit_Phase2_Base)
// {
//     displayName = "INF 16 - Clone Captain";
//     icon = "iconManOfficer";

//     uniformClass = QCLASS(Uniform_CAP);
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\uniforms\infantry\CAP_upper_co.paa),
//         QPATHTOF(data\uniforms\infantry\CAP_lower_co.paa),
//         "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         QCLASS(Helmet_Phase2_CAP), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         QCLASS(Helmet_Phase2_CAP), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// class CLASS(Unit_Phase2_MAJ): CLASS(Unit_Phase2_Base)
// {
//     displayName = "INF 17 - Clone Major";
//     icon = "iconManOfficer";

//     uniformClass = QCLASS(Uniform_MAJ);
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\uniforms\infantry\MAJ_upper_co.paa),
//         QPATHTOF(data\uniforms\infantry\MAJ_lower_co.paa),
//         "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         QCLASS(Helmet_Phase2_MAJ), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         QCLASS(Helmet_Phase2_MAJ), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// class CLASS(Unit_Phase2_CMD): CLASS(Unit_Phase2_Base)
// {
//     displayName = "INF 18 - Clone Commander";
//     icon = "iconManOfficer";

//     uniformClass = QCLASS(Uniform_CMD);
//     hiddenSelectionsTextures[] =
//     {
//         QPATHTOF(data\uniforms\infantry\CMD_upper_co.paa),
//         QPATHTOF(data\uniforms\infantry\CMD_lower_co.paa),
//         "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         QCLASS(Helmet_Phase2_CMD), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         QCLASS(Helmet_Phase2_CMD), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// Camo Units
class CLASS(Unit_Phase2_Recruit_CamoBrown): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Recruit_CamoBrown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\camo\brown\Recruit_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\brown\Recruit_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Phase2_Recruit_CamoGrey): CLASS(Unit_Phase2_Recruit_CamoBrown) {
    uniformClass = QCLASS(Uniform_Recruit_CamoGrey);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\camo\grey\Recruit_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\grey\Recruit_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Enlisted_CamoBrown): CLASS(Unit_Phase2_Recruit_CamoBrown) {
    uniformClass = QCLASS(Uniform_Enlisted_CamoBrown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\camo\brown\Enlisted_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\brown\Enlisted_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Phase2_Enlisted_CamoGrey): CLASS(Unit_Phase2_Recruit_CamoBrown) {
    uniformClass = QCLASS(Uniform_Enlisted_CamoGrey);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\camo\grey\Enlisted_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\grey\Enlisted_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_NCO_CamoBrown): CLASS(Unit_Phase2_CS) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_NCO_CamoBrown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\camo\brown\NCO_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\brown\NCO_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Phase2_NCO_CamoGrey): CLASS(Unit_Phase2_NCO_CamoBrown) {
    uniformClass = QCLASS(Uniform_NCO_CamoGrey);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\camo\grey\NCO_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\grey\NCO_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Officer_CamoBrown): CLASS(Unit_Phase2_WO) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Officer_CamoBrown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\camo\brown\Officer_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\brown\Officer_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Phase2_Officer_CamoGrey): CLASS(Unit_Phase2_Officer_CamoBrown) {
    uniformClass = QCLASS(Uniform_Officer_CamoGrey);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\camo\grey\Officer_upper_co.paa),
        QPATHTOF(data\uniforms\infantry\camo\grey\Officer_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Insulated_Base): CLASS(Unit_Phase2_Base) {
    displayName = "INF Snow - Base";
    // editorPreview = EDITOR_PREVIEW(Unit_Phase2_Insulated_Base);

    // Uniform Model & Textures
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Base);
    model = "\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
    hiddenSelections[] = {"_upper", "_lower", "_undersuit"};
    hiddenSelectionsTextures[] = {
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\upper_co.paa",
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\lower_co.paa",
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

    // Inventory
    linkedItems[] = {
        QCLASS(Helmet_Phase2_Insulated_Base), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Insulated_Base), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_Insulated_CT): CLASS(Unit_Phase2_Insulated_Base) {
    displayName = "INF Snow 01 - Trooper";
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_Insulated_CT);

    // Uniform Model & Textures
    uniformClass = QCLASS(Uniform_Phase2_Insulated_CT);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\insulated\CT_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\CT_lower_co.paa),
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

    // Inventory
    linkedItems[] = {
        QCLASS(Helmet_Phase2_Insulated_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Insulated_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(cloneArmor_unit_textureTest): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(cloneArmor_uniform_textureTest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\upper_co.paa),
        QPATHTOF(data\uniforms\standard\lower_co.paa),
        QPATHTOF(data\uniforms\standard\undersuit_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(data\uniforms\standard\upper.rvmat),
        QPATHTOF(data\uniforms\standard\lower.rvmat),
        QPATHTOF(data\uniforms\standard\undersuit.rvmat)
    };
};