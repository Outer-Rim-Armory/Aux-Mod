class CLASS(Unit_Commando_Base): CLASS(Unit_ARC_CT)
{
    displayName = "SF Commando - Base";
    editorPreview = "\SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_base.jpg";

    uniformClass = QCLASS(Uniform_Commando_Base);
    model = "\ls_armor_bluefor\uniform\sob\commando\ls_sob_commando_uniform.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] =
    {
        "\ls_armor_bluefor\uniform\sob\commando\data\camo1_co.paa",
        "\ls_armor_bluefor\uniform\sob\commando\data\camo2_co.paa"
    };

    linkedItems[] =
    {
        QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_Basic), QCLASS(NVG_Chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_Basic), QCLASS(NVG_Chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = QCLASS(Backack_Commando_Base);
};