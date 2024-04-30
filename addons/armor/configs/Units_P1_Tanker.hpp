class CLASS(Unit_Phase1_Tanker_CT): CLASS(Unit_Phase1_Base) {
    displayName = "ARMR P1 Tanker";
    editorSubcategory = QEDSUBCAT(Crewmen);
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_Tanker_CT);

    uniformClass = QCLASS(Uniform_Tanker_CT);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_Tanker_CT), QCLASS(Vest_Recon), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_Tanker_CT), QCLASS(Vest_Recon), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};