class CLASS(Unit_Phase2_Tanker_CT): CLASS(Unit_Phase2_Base) {
    displayName = "ARMR P2 Tanker";
    editorSubcategory = QEDSUBCAT(Crewmen);
    editorPreview = EDITOR_PREVIEW(Unit_Phase2_Tanker_CT);

    uniformClass = QCLASS(Uniform_Tanker);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\tanker\CT_upper_co.paa),
        QPATHTOF(data\uniforms\tanker\CT_lower_co.paa),
        "\ls\core\addons\characters_clone_legacy\uniforms\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Tanker_CT), QCLASS(Vest_Tanker_CT), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Tanker_CT), QCLASS(Vest_Tanker_CT), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
