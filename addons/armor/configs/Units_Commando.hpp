class CLASS(Unit_Commando_Base): CLASS(Unit_ARC_CT)
{
    displayName = "SF Commando - Base";
    editorPreview = EDITOR_PREVIEW(Unit_Commando_Base);

    uniformClass = QCLASS(Uniform_Commando_Base);
    model = "\ls_armor_bluefor\uniform\sob\commando\ls_sob_commando_uniform.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] =
    {
        "\ls_armor_bluefor\uniform\sob\commando\data\camo1_co.paa",
        "\ls_armor_bluefor\uniform\sob\commando\data\camo2_co.paa"
    };

    weapons[] =
        {
            QCLASS(DC17M),
            QCLASS(DC15SA),
            "SWLB_clone_binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            QCLASS(DC17M),
            QCLASS(DC15SA),
            "SWLB_clone_binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            ITEM_11(QCLASS(Mag_60Rnd_DC17M)),
            ITEM_2(QCLASS(Mag_7Rnd_DC15SA)),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11(QCLASS(Mag_60Rnd_DC17M)),
            ITEM_2(QCLASS(Mag_7Rnd_DC15SA)),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        items[] =
        {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
        };
        respawnItems[] =
        {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet")
        };

    linkedItems[] =
    {
        QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_Basic), QCLASS(NVG_Chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] =
    {
        QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_Basic), QCLASS(NVG_Chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = QCLASS(Backack_Commando);
};