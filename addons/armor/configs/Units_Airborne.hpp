class CLASS(Unit_AB_CT): CLASS(Unit_Phase2_Base) {
    displayName = "SF AB 01 - Trooper";
    editorSubcategory = QEDSUBCAT(SpecialForces);
    editorPreview = EDITOR_PREVIEW(Unit_Airborne_CT);

    uniformClass = QCLASS(Uniform_CT);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\CT_upper_co.paa),
        QPATHTOF(data\uniforms\standard\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Airborne_CT), QCLASS(Vest_Airborne_CT), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Airborne_CT), QCLASS(Vest_Airborne_CT), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = QCLASS(Jetpack_JT12);
};