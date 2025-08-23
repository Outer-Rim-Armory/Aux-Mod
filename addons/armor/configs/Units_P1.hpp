class CLASS(Unit_Phase1_Base): CLASS(Unit_Base) {
    SCOPE_PUBLIC;

    // Editor Properties
    editorSubcategory = QEDSUBCAT(INF_P1);
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_Base);

    displayName = "INF P1 Trooper (Base)";

    uniformClass = QCLASS(Uniform_Base);
};

class CLASS(Unit_Phase1_CR): CLASS(Unit_Phase1_Base) {
    displayName = "INF 00 - Clone Recruit";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CR);

    uniformClass = QCLASS(Uniform_CR);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_CR), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_CR), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase1_CT): CLASS(Unit_Phase1_Base) {
    displayName = "INF 01 - Clone Trooper";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CT);

    uniformClass = QCLASS(Uniform_CT);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase1_SCT): CLASS(Unit_Phase1_Base) {
    displayName = "INF 02 - Senior Clone Trooper";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_SCT);

    uniformClass = QCLASS(Uniform_SCT);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_SCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_SCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase1_VCT): CLASS(Unit_Phase1_Base) {
    displayName = "INF 03 - Veteran Clone Trooper";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_VCT);

    uniformClass = QCLASS(Uniform_VCT);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_VCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_VCT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// Start of JNCO Ranks

class CLASS(Unit_Phase1_CLC): CLASS(Unit_Phase1_Base) {
    displayName = "INF 04 - Clone Lance Corporal";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CLC);

    uniformClass = QCLASS(Uniform_CLC);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_CLC), QCLASS(Vest_CLC), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_CLC), QCLASS(Vest_CLC), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase1_CPL): CLASS(Unit_Phase1_Base) {
    displayName = "INF 05 - Clone Corporal";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CPL);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CPL);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_CPL), QCLASS(Vest_CPL), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_CPL), QCLASS(Vest_CPL), QCLASS(cloneNvg_chip), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// Start of NCO Ranks

class CLASS(Unit_Phase1_CS): CLASS(Unit_Phase1_Base) {
    displayName = "INF 06 - Clone Sergeant";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CS);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CS);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_CS), QCLASS(Vest_CS), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_CS), QCLASS(Vest_CS), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase1_CSS): CLASS(Unit_Phase1_Base) {
    displayName = "INF 07 - Clone Staff Sergeant";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CSS);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CSS);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_CSS), QCLASS(Vest_CSS), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_CSS), QCLASS(Vest_CSS), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase1_CSFC): CLASS(Unit_Phase1_Base) {
    displayName = "INF 08 - Clone Sergeant First Class";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CSFC);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CSFC);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_CSFC), QCLASS(Vest_CSFC), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_CSFC), QCLASS(Vest_CSFC), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase1_CMS): CLASS(Unit_Phase1_Base) {
    displayName = "INF 09 - Clone Master Sergeant";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CMS);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CSFC);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_CMS), QCLASS(Vest_CMS), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_CMS), QCLASS(Vest_CMS), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase1_CSM): CLASS(Unit_Phase1_Base) {
    displayName = "INF 10 - Clone Sergeant Major";
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CSM);
    icon = "iconManLeader";

    uniformClass = QCLASS(Uniform_CSM);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_CSM), QCLASS(Vest_CSM), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_CSM), QCLASS(Vest_CSM), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

// class CLASS(Unit_Phase1_CL): CLASS(Unit_Phase1_Base)
// {
//     displayName = "INF 11 - Clone Lieutenant";
//     icon = "iconManOfficer";

//     uniformClass = QCLASS(Uniform_CL);

//     linkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_CL), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_CL), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase1_rangefinder), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// // Start of Officer Ranks

// class CLASS(Unit_Phase1_WO): CLASS(Unit_Phase1_Base)
// {
//     displayName = "INF 12 - Clone Warrant Officer";
//     icon = "iconManOfficer";

//     uniformClass = QCLASS(Uniform_WO);

//     linkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_WO), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_WO), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// class CLASS(Unit_Phase1_CL1): CLASS(Unit_Phase1_Base)
// {
//     displayName = "INF 13 - Clone 1st Lieutenant";
//     icon = "iconManOfficer";

//     uniformClass = QCLASS(Uniform_CL);

//     linkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_CL1), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_CL1), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// class CLASS(Unit_Phase1_CAP): CLASS(Unit_Phase1_Base)
// {
//     displayName = "INF 14 - Clone Captain";
//     icon = "iconManOfficer";

//     uniformClass = QCLASS(Uniform_CAP);

//     linkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_CAP), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_CAP), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// class CLASS(Unit_Phase1_MAJ): CLASS(Unit_Phase1_Base)
// {
//     displayName = "INF 15 - Clone Major";
//     icon = "iconManOfficer";

//     uniformClass = QCLASS(Uniform_MAJ);

//     linkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_MAJ), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_MAJ), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

// class CLASS(Unit_Phase1_CMD): CLASS(Unit_Phase1_Base)
// {
//     displayName = "INF 16 - Clone Commander";
//     icon = "iconManOfficer";

//     uniformClass = QCLASS(Uniform_CMD);

//     linkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_CMD), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
//     respawnLinkedItems[] =
//     {
//         QCLASS(Helmet_Phase1_CMD), QCLASS(Vest_Officer), QCLASS(clonecloneNvg_phase1_officerVisorVisor), "ls_clone_phase1_hud", CLONE_LINKED_ITEMS_RADIO
//     };
// };

class CLASS(Unit_phase1Geo_Enlisted): CLASS(Unit_Phase1_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_phase1Geo_Enlisted);
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\camo1_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\camo2_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_phase1Geo_NCO): CLASS(Unit_phase1Geo_Enlisted) {
    uniformClass = QCLASS(Uniform_phase1Geo_NCO);
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legions\units\misc\data\uniforms\sergeant_upper_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\camo2_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_phase1Geo_Officer): CLASS(Unit_phase1Geo_NCO) {
    uniformClass = QCLASS(Uniform_phase1Geo_Officer);
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legions\units\misc\data\uniforms\lieutenant_upper_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\camo2_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_phase1Geo_Captain): CLASS(Unit_phase1Geo_NCO) {
    uniformClass = QCLASS(Uniform_phase1Geo_Captain);
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legions\units\misc\data\uniforms\captain_upper_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\camo2_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_phase1Geo_Major): CLASS(Unit_phase1Geo_NCO) {
    uniformClass = QCLASS(Uniform_phase1Geo_Makor);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\infantry\geonosis\GeoMajor_upper_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\camo2_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_phase1Geo_Commander): CLASS(Unit_phase1Geo_NCO) {
    uniformClass = QCLASS(Uniform_phase1Geo_Commander);
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legions\units\misc\data\uniforms\commander_upper_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\camo2_co.paa",
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };
};
