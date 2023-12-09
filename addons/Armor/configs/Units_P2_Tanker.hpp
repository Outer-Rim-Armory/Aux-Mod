class BNA_KC_Unit_Phase2_Tanker_CT: BNA_KC_Unit_Phase2_Base
{
    displayName = "ARMR P2 Tanker";
    editorSubcategory = "BNA_KC_SubCat_Crewmen";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_Tanker_CT);

    uniformClass = "BNA_KC_Uniform_Tanker";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\tanker\CT_upper_co.paa),
        QPATHTOF(data\uniforms\tanker\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Tanker_CT", "BNA_KC_Vest_Recon", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Tanker_CT", "BNA_KC_Vest_Recon", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};