class BNA_KC_Unit_Commando_Base: BNA_KC_Unit_ARC_CT
{
    displayName = "SF Commando - Base";
    editorPreview = "\SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_base.jpg";

    uniformClass = "BNA_KC_Uniform_Commando_Base";
    model = "\ls_armor_bluefor\uniform\sob\commando\ls_sob_commando_uniform.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] =
    {
        "\ls_armor_bluefor\uniform\sob\commando\data\camo1_co.paa",
        "\ls_armor_bluefor\uniform\sob\commando\data\camo2_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Commando_Base", "BNA_KC_Vest_Commando_Basic", "BNA_KC_NVG_Chip", "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Commando_Base", "BNA_KC_Vest_Commando_Basic", "BNA_KC_NVG_Chip", "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = "BNA_KC_Backack_Commando_Base";
};