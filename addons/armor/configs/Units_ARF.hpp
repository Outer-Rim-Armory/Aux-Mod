class CLASS(Unit_ARF_CT): CLASS(Unit_Phase2_Base) {
    displayName = "SF ARF 01 - Trooper";
    editorSubcategory = QEDSUBCAT(SpecialForces);
    editorPreview = EDITOR_PREVIEW(Unit_ARF_CT);

    uniformClass = QCLASS(Uniform_ARF_CT);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\arf\CT_upper_co.paa),
        QPATHTOF(data\uniforms\arf\CT_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARF_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARF_CT), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
