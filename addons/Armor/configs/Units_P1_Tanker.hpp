class BNA_KC_Unit_Phase1_Tanker_CT: BNA_KC_Unit_Phase1_Base
{
    displayName = "ARMR P1 Tanker";
    editorSubcategory = "BNA_KC_SubCat_Crewmen";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase1_Tanker_CT);

    uniformClass = "BNA_KC_Uniform_Tanker_CT";

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase1_Tanker_CT", "BNA_KC_Vest_Recon", "lsd_gar_p1Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase1_Tanker_CT", "BNA_KC_Vest_Recon", "lsd_gar_p1Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};