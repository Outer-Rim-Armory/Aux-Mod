class BNA_KC_Unit_ARF_CT: BNA_KC_Unit_Phase2_Base
{
    displayName = "SF ARF 01 - Trooper";
    editorSubcategory = "BNA_KC_EdSubCat_SpecialForces";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_ARF_CT);

    uniformClass = "BNA_KC_Uniform_ARF_CT";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\arf\CT_upper_co.paa),
        QPATHTOF(data\uniforms\arf\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_ARF_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_ARF_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};