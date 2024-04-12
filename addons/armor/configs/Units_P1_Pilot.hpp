class CLASS(Unit_Phase1_CXA): CLASS(Unit_Phase1_Base) {
    displayName = "AVI P1 Pilot 1 (Airman)";
    editorSubcategory = QCLASS(EdSubCat_Crewmen);
    editorPreview = EDITOR_PREVIEW(Unit_Phase1_CXA);

    uniformClass = QCLASS(Uniform_CXA);

    linkedItems[] = {
        QCLASS(Helmet_Phase1_Pilot_CXA), QCLASS(Vest_Basic), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_Pilot_CXA), QCLASS(Vest_Basic), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};