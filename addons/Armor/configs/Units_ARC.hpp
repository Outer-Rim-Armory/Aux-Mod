class BNA_KC_Unit_ARC_CT: BNA_KC_Unit_Phase2_Base
{
    displayName = "SF ARC 01 - Trooper";
    editorSubcategory = "BNA_KC_EdSubCat_SpecialForces";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_ARC_CT);

    uniformClass = "BNA_KC_Uniform_ARC_CT";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\arc\CT_upper_co.paa),
        QPATHTOF(data\uniforms\arc\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_ARC_CT", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_ARC_CT", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = "BNA_KC_Backpack_ARC";
};

class BNA_KC_Unit_ARC_Enlisted_CamoNight: BNA_KC_Unit_ARC_CT
{
    SCOPE_HIDDEN;

    uniformClass = "BNA_KC_Uniform_ARC_Enlisted_CamoNight";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\arc\camo\night\CT_upper_co.paa),
        QPATHTOF(data\uniforms\arc\camo\night\CT_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};