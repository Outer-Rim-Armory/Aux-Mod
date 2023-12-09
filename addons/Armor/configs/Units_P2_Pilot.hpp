class BNA_KC_Unit_Phase2_CXA: BNA_KC_Unit_Phase2_Base
{
    displayName = "AVI P2 Pilot";
    editorSubcategory = "BNA_KC_SubCat_Crewmen";
    editorPreview = "\BNA_KC_Gear\Aviation\Data\Previews\Phase2_Pilot.jpg";

    uniformClass = "BNA_KC_Uniform_CXA";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\uniforms\CXA_upper_co.paa),
        QPATHTOF(data\uniforms\CXA_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CXA", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CXA", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class BNA_KC_Unit_Phase2_CXE: BNA_KC_Unit_Phase2_Pilot
{
    displayName = "AVI P2 Pilot (Ensign)";
    editorPreview = "\BNA_KC_Gear\Aviation\Data\Previews\Phase2_Pilot_Officer.jpg";

    uniformClass = "BNA_KC_Uniform_CXE";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Aviation\Data\Textures\Uniforms\Uniform_Pilot_Officer_Upper.paa",
        "\BNA_KC_Gear\Aviation\Data\Textures\Uniforms\Uniform_Pilot_Officer_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CXE", "BNA_KC_Vest_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CXE", "BNA_KC_Vest_Officer", "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};