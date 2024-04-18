class CLASS(cloneCommando_unit_base): CLASS(Unit_ARC_CT) {
    SCOPE_HIDDEN;

    uniformClass = QCLASS(cloneCommando_uniform);
    model = "\ls_armor_bluefor\uniform\sob\commando\ls_sob_commando_uniform.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\uniform\sob\commando\data\camo1_co.paa",
        "\ls_armor_bluefor\uniform\sob\commando\data\camo2_co.paa"
    };

    weapons[] = {
        QCLASS(DC17M),
        QCLASS(DC15SA),
        "SWLB_clone_binocular",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(DC17M),
        QCLASS(DC15SA),
        "SWLB_clone_binocular",
        "Throw",
        "Put"
    };
    magazines[] = {
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
    respawnMagazines[] = {
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
    items[] = {
        // Medical
        ITEM_10("ACE_elasticBandage"),
        ITEM_4("ACE_tourniquet"),
    };
    respawnItems[] = {
        // Medical
        ITEM_10("ACE_elasticBandage"),
        ITEM_4("ACE_tourniquet")
    };
};

class CLASS(cloneCommando_unit): CLASS(cloneCommando_unit_base) {
    SCOPE_PUBLIC;
    displayName = "SF Clone Commando";
    editorPreview = EDITOR_PREVIEW(cloneCommando_unit);

    linkedItems[] = {
        QCLASS(cloneCommando_helmet), QCLASS(cloneCommando_basic_vest), QCLASS(NVG_Chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(cloneCommando_helmet), QCLASS(cloneCommando_basic_vest), QCLASS(NVG_Chip), "lsd_gar_republicCommando_hud", CLONE_LINKED_ITEMS_RADIO
    };
    backpack = QCLASS(cloneBackpack_commando);
};