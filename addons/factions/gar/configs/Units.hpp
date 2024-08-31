class CLASS(Unit_Phase2_Base);
class CLASS(Unit_CG_Trooper): CLASS(Unit_Phase2_Base) {
    displayName = "Clone Trooper";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(CoruscantGuard);
    editorPreview = EDITOR_PREVIEW(Unit_CG_Trooper);

    uniformClass = QCLASS(Uniform_CG);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\CG_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\CG_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CG), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CG), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_CG_Stone): CLASS(Unit_CG_Trooper) {
    displayName = "Commander Stone";
    editorPreview = EDITOR_PREVIEW(Unit_CG_Stone);

    uniformClass = QCLASS(Uniform_CG_Stone);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Stone_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Stone_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_CG_Stone), QCLASS(Vest_Holster), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_CG_Stone), QCLASS(Vest_Holster), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_DC_Trooper): CLASS(Unit_Phase2_Base) {
    displayName = "Clone Trooper";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(DoomCompany);
    editorPreview = EDITOR_PREVIEW(Unit_DC_Trooper);

    uniformClass = QCLASS(Uniform_DC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\DC_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\DC_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_DC), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_DC), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Fil): CLASS(Unit_Phase2_Base) {
    displayName = "Commander Fil";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(FilSquad);
    editorPreview = EDITOR_PREVIEW(Unit_Fil);

    uniformClass = QCLASS(Uniform_Fil);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Fil_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Fil_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Fil), QCLASS(Vest_Officer), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Fil), QCLASS(Vest_Officer), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_FilSquad): CLASS(Unit_Phase2_Base) {
    displayName = "Clone Trooper";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(FilSquad);
    editorPreview = EDITOR_PREVIEW(Unit_FilSquad);

    uniformClass = QCLASS(Uniform_FilSquad);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\FilSquad_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\FilSquad_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_FilSquad), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_FilSquad), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_GC_Trooper): CLASS(Unit_Phase2_Base) {
    displayName = "Clone Trooper";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(GreenCompany);
    editorPreview = EDITOR_PREVIEW(Unit_GC_Trooper);

    uniformClass = QCLASS(Uniform_GC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\GC_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\GC_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_GC), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_GC), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_HowzerBlue): CLASS(Unit_Phase2_Base) {
    displayName = "Captain Howzer";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(HowzerSquad);
    editorPreview = EDITOR_PREVIEW(Unit_HowzerBlue);

    uniformClass = QCLASS(Uniform_HowzerBlue);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBlue_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBlue_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_HowzerBlue), QCLASS(Vest_WO_Howzer), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_HowzerBlue), QCLASS(Vest_WO_Howzer), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
class CLASS(Unit_HowzerBrown): CLASS(Unit_HowzerBlue) {
    displayName = "Captain Howzer (Brown)";
    editorPreview = EDITOR_PREVIEW(Unit_HowzerBrown);

    uniformClass = QCLASS(Uniform_HowzerBrown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBrown_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\HowzerBrown_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_HowzerBrown), QCLASS(Vest_WO), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_HowzerBrown), QCLASS(Vest_WO), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_104th_Trooper): CLASS(Unit_Phase2_Base) {
    displayName = "Clone Trooper";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(104th);
    editorPreview = EDITOR_PREVIEW(Unit_104th_Trooper);

    uniformClass = QCLASS(Uniform_104th);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\104th_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\104th_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_104th), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_104th), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_187th_Trooper): CLASS(Unit_Phase2_Base) {
    displayName = "Clone Trooper";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(187th);
    editorPreview = EDITOR_PREVIEW(Unit_187th_Trooper);

    uniformClass = QCLASS(Uniform_187th);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\187th_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\187th_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_187th), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_187th), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_501st_Trooper): CLASS(Unit_Phase2_Base) {
    displayName = "Clone Trooper";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(501st);
    editorPreview = EDITOR_PREVIEW(Unit_501st_Trooper);

    uniformClass = QCLASS(Uniform_501st);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\501st_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\501st_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_501st), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_501st), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_212th_Trooper): CLASS(Unit_Phase2_Base) {
    displayName = "Clone Trooper";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(212th);
    editorPreview = EDITOR_PREVIEW(Unit_212th_Trooper);

    uniformClass = QCLASS(Uniform_212th);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\212th_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\212th_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_212th), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_212th), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_91st_Ponds): CLASS(Unit_Phase2_Base) {
    displayName = "Commander Ponds";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(91st);
    editorPreview = EDITOR_PREVIEW(Unit_91st_Ponds);

    uniformClass = QCLASS(Uniform_91st_Ponds);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Ponds_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\Ponds_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_91st_Ponds), QCLASS(Vest_Kama), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_91st_Ponds), QCLASS(Vest_Kama), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_91st): CLASS(Unit_Phase2_Base) {
    displayName = "(Clone Trooper)";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(91st);
    editorPreview = EDITOR_PREVIEW(Unit_91st_Ponds);

    uniformClass = QCLASS(Uniform_91st);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\91st_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\91st_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_91st), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_91st), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_91st): CLASS(Unit_Phase2_Base) {
    displayName = "(Clone Trooper)";
    faction = QFACTION(GAR);
    editorSubcategory = QEDSUBCAT(327th);
    editorPreview = EDITOR_PREVIEW(Unit_91st_Ponds);

    uniformClass = QCLASS(Uniform_91st);
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\327th_upper_co.paa),
        QPATHTOF(SUBCOMPONENT\data\uniforms\standard\327th_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_327th), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_327th), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};