class BNA_KC_Unit_Phase1_CXA: BNA_KC_Unit_Phase2_Base
{
    displayName = "AVI P1 Pilot 1 (Airman)";
    editorSubcategory = "BNA_KC_SubCat_Crewmen";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase1_CXA);

    uniformClass = "BNA_KC_Uniform_CXA";

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase1_CXA", "BNA_KC_Vest_Basic", "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase1_CXA", "BNA_KC_Vest_Basic", "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};