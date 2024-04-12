class CLASS(Unit_ARF_CT): CLASS(Unit_Phase2_Base) {
    displayName = "SF ARF 01 - Trooper";
    editorSubcategory = QCLASS(EdSubCat_SpecialForces);
    editorPreview = EDITOR_PREVIEW(Unit_ARF_CT);

    uniformClass = QCLASS(Uniform_ARF_CT);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\arf\CT_upper_co.paa),
        QPATHTOF(data\uniforms\arf\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARF_CT), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARF_CT), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};