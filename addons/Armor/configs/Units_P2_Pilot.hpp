class BNA_KC_Unit_Phase2_CXA: BNA_KC_Unit_Phase2_Base
{
    displayName = "AVI P2 Pilot 1 (Airman)";
    editorSubcategory = "BNA_KC_EdSubCat_Crewmen";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CXA);

    uniformClass = "BNA_KC_Uniform_CXA";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\pilot\CXA_upper_co.paa),
        QPATHTOF(data\uniforms\pilot\CXA_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Pilot_CXA", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Pilot_CXA", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CXE: BNA_KC_Unit_Phase2_CXA
{
    displayName = "AVI P2 Pilot 11 (Ensign)";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_CXE);

    uniformClass = "BNA_KC_Uniform_CXE";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\pilot\CXE_upper_co.paa),
        QPATHTOF(data\uniforms\pilot\CXE_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Pilot_CXE", "BNA_KC_Vest_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_Pilot_CXE", "BNA_KC_Vest_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};