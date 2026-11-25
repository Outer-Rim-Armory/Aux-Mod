class CLASS(Unit_Scout_CT): CLASS(Unit_Scout_Base) {
    SCOPE_HIDDEN;
    displayName = "SF Scout 02 - (CT)";

    // Editor Properties
    editorSubcategory = QEDSUBCAT(SpecialForces);
    editorPreview = EDITOR_PREVIEW(Unit_Scout_CT);

    uniformClass = QCLASS(Uniform_Scout_CT);
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\scout\Lower_co.paa),
        QPATHTOF(data\uniforms\scout\CT_Upper_co.paa),
    };

    linkedItems[] = {
        QCLASS(Helmet_Scout_CT_V1), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Scout_CT_V1), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Scout_Brown): CLASS(Unit_Scout_Base) {
    SCOPE_HIDDEN;
    displayName = "SF Scout 03 - (Brown Camo)";

    // Editor Properties
    editorSubcategory = QEDSUBCAT(SpecialForces);
    editorPreview = EDITOR_PREVIEW(Unit_Scout_Brown);

    uniformClass = QCLASS(Uniform_Scout_Brown);
    hiddenSelections[] = {"camo1","camo2","undersuit"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\scout\Lower_co.paa),
        QPATHTOF(data\uniforms\scout\camo\brown\Brown_Upper_co.paa),
    };

    linkedItems[] = {
        QCLASS(Helmet_Scout_Brown), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Scout_Brown), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Scout_Grey): CLASS(Unit_Scout_Base) {
    SCOPE_HIDDEN;
    displayName = "SF Scout 04 - (Grey Camo)";

    // Editor Properties
    editorSubcategory = QEDSUBCAT(SpecialForces);
    editorPreview = EDITOR_PREVIEW(Unit_Scout_Grey);

    uniformClass = QCLASS(Uniform_Scout_Grey);
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\scout\Lower_co.paa),
        QPATHTOF(data\uniforms\scout\camo\grey\Grey_Upper_co.paa),
    };

    linkedItems[] = {
        QCLASS(Helmet_Scout_Grey), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Scout_Grey), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Scout_Imperial): CLASS(Unit_Scout_Base) {
    SCOPE_HIDDEN;
    displayName = "SF Scout 05 - (Imperial)";

    // Editor Properties
    editorSubcategory = QEDSUBCAT(SpecialForces);
    editorPreview = EDITOR_PREVIEW(Unit_Scout_Imperial);

    uniformClass = QCLASS(Uniform_Scout_Imperial);
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\scout\camo\imperial\Imperial_Lower_co.paa),
        QPATHTOF(data\uniforms\scout\camo\imperial\Imperial_Upper_co.paa),
    };

    linkedItems[] = {
        QCLASS(Helmet_Scout_Imperial), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Scout_Imperial), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
