class CfgVehicles
{
    class CLASS(OPFOR_Unit_Base);
    class CLASS(TU_Unit_Base): CLASS(OPFOR_Unit_Base)
    {
        SCOPE_HIDDEN;
        faction = QCLASS(Faction_TU);
        identityTypes[] = {"LanguageENG_F", "Head_NATO"/*, QCLASS(TechnoUnion)*/};

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        uniformClass = QCLASS(TU_Uniform);
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_tan_co.paa"};
    };

    class CLASS(TU_Unit_Rifleman): CLASS(TU_Unit_Base)
    {
        SCOPE_PUBLIC;

        displayName = "Rifleman";
        editorPreview = QPATHTOF(tu\data\previews\CLASS(TU_Unit_Rifleman).jpg);

        weapons[] = {QCLASS(E5), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100rnd_E5)};
        respawnMagazines[] = {QCLASS(Mag_100rnd_E5)};
        items[] =
        {
            // Other
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };
        respawnItems[] =
        {
            // Other
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };

        linkedItems[] = {QCLASS(TU_Helmet), QCLASS(TU_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(TU_Helmet), QCLASS(TU_Vest), LINKED_ITEMS_RADIO};
        backpack = QCLASS(TU_Backpack_Predef_Rifleman);
    };

    class CLASS(TU_Unit_Rifleman_Shield): CLASS(TU_Unit_Rifleman)
    {
        displayName = "Rifleman (Shield)";
        editorPreview = QPATHTOF(tu\data\previews\CLASS(TU_Unit_Rifleman_Shield).jpg);

        weapons[] = {QCLASS(E5_Shielded), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5_Shielded), "", "Throw", "Put"};
    };

    class CLASS(TU_Unit_AT): CLASS(TU_Unit_Rifleman)
    {
        displayName = "Rifleman (AT)";
        editorPreview = QPATHTOF(tu\data\previews\CLASS(TU_Unit_AT).jpg);
        icon = "iconManAT";

        weapons[] = {QCLASS(E5), "", QCLASS(E60R_AT), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", QCLASS(E60R_AT), "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100rnd_E5), QCLASS(Mag_1rnd_E60R_AT)};
        respawnMagazines[] = {QCLASS(Mag_100rnd_E5), QCLASS(Mag_1rnd_E60R_AT)};

        linkedItems[] = {QCLASS(TU_Helmet_Visor_Goggles), QCLASS(TU_Vest_AssaultMedium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(TU_Helmet_Visor_Goggles), QCLASS(TU_Vest_AssaultMedium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(TU_Backpack_Heavy_Predef_AT);
    };

    class CLASS(TU_Unit_AA): CLASS(TU_Unit_AT)
    {
        displayName = "Rifleman (AA)";

        weapons[] = {QCLASS(E5), "", QCLASS(E60R_AA), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", QCLASS(E60R_AA), "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100rnd_E5), QCLASS(Mag_1rnd_E60R_AA)};
        respawnMagazines[] = {QCLASS(Mag_100rnd_E5), QCLASS(Mag_1rnd_E60R_AA)};
        backpack = QCLASS(TU_Backpack_Heavy_Predef_AA);
    };

    class CLASS(TU_Unit_AssaultHeavy): CLASS(TU_Unit_Rifleman)
    {
        displayName = "Heavy Assault";
        editorPreview = QPATHTOF(tu\data\previews\CLASS(TU_Unit_AssaultHeavy).jpg);
        icon = "iconManMG";

        weapons[] = {QCLASS(E5C_Stock), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5C_Stock), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_150rnd_E5C)};
        respawnMagazines[] = {QCLASS(Mag_150rnd_E5C)};

        linkedItems[] = {QCLASS(TU_Helmet_Assault), QCLASS(TU_Vest_AssaultHeavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(TU_Helmet_Assault), QCLASS(TU_Vest_AssaultHeavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(TU_Backpack_Assault_Predef_Heavy);
    };

    class CLASS(TU_Unit_AssaultMedium): CLASS(TU_Unit_AssaultHeavy)
    {
        displayName = "Medium Assault";
        editorPreview = QPATHTOF(tu\data\previews\CLASS(TU_Unit_AssaultMedium).jpg);
        linkedItems[] = {QCLASS(TU_Helmet_Assault), QCLASS(TU_Vest_AssaultMedium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(TU_Helmet_Assault), QCLASS(TU_Vest_AssaultMedium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(TU_Backpack_Assault_Predef_Medium);
    };

    class CLASS(TU_Unit_SL): CLASS(TU_Unit_Rifleman)
    {
        displayName = "Squad Leader";
        editorPreview = QPATHTOF(tu\data\previews\CLASS(TU_Unit_SL).jpg);
        icon = "iconManLeader";

        linkedItems[] = {QCLASS(TU_Helmet_Heavy), QCLASS(TU_Vest_Medium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(TU_Helmet_Heavy), QCLASS(TU_Vest_Medium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(TU_Backpack_RTO_Predef_SL);
    };

    class CLASS(TU_Unit_Melee): CLASS(TU_Unit_Base)
    {
        SCOPE_PUBLIC;

        displayName = "Swordsman (Rush)";
        editorPreview = QPATHTOF(tu\data\previews\CLASS(TU_Unit_Melee).jpg);

        weapons[] = {"", "WBK_SciFi_Sword_2", "Throw", "Put"};
        respawnWeapons[] = {"", "WBK_SciFi_Sword_2", "Throw", "Put"};
        magazines[] = {"WBK_Cybercrystal"};
        respawnMagazines[] = {"WBK_Cybercrystal"};

        linkedItems[] = {QCLASS(TU_Helmet_Visor), QCLASS(TU_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(TU_Helmet_Visor), QCLASS(TU_Vest), LINKED_ITEMS_RADIO};
        backpack = QCLASS(TU_Backpack_Heavy);
    };

    class CLASS(Other_Backpack_Base);
    class CLASS(TU_Backpack): CLASS(Other_Backpack_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[TU] Backpack";
        descriptionshort = "Techno Union Backpack";

        model = "\sc_equipment\data\marine\mr_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\marine\textures\backpack_co.paa"};
        picture = "\sc_equipment\data\icons\icon_se_ca.paa";
    };
    class CLASS(TU_Backpack_Predef_Rifleman): CLASS(TU_Backpack)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_100rnd_E5),10);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
        };
    };

    class CLASS(TU_Backpack_Heavy): CLASS(TU_Backpack)
    {
        displayName = "[TU] Heavy Backpack";
        maximumLoad = 450;
        mass = 35;

        model = "\sc_equipment\data\wasp\wp_backpack.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_co.paa"};
        picture = "\sc_equipment\data\icons\icon_se_ca.paa";
    };
    class CLASS(TU_Backpack_Heavy_Predef_AT): CLASS(TU_Backpack_Heavy)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_100rnd_E5),10);
            MAG_XX(CLASS(Mag_1rnd_E60R_HE),3);
            MAG_XX(CLASS(Mag_1rnd_E60R_AT),3);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
        };
    };
    class CLASS(TU_Backpack_Heavy_Predef_AA): CLASS(TU_Backpack_Heavy)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_100rnd_E5),10);
            MAG_XX(CLASS(Mag_1rnd_E60R_AA),6);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
        };
    };

    class CLASS(TU_Backpack_Assault): CLASS(TU_Backpack)
    {
        displayName = "[TU] Assault Backpack";
        maximumLoad = 300;
        mass = 35;

        model = "\sc_equipment\data\wasp\wp_backpack_sl.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_co.paa"};
        picture = "\sc_equipment\data\icons\icon_se_ca.paa";
    };
    class CLASS(TU_Backpack_Assault_Predef_Heavy): CLASS(TU_Backpack_Assault)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_150rnd_E5C),10);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
        };
    };
    class CLASS(TU_Backpack_Assault_Predef_Medium): CLASS(TU_Backpack_Assault_Predef_Heavy)
    {
        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_150rnd_E5C),10);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
        };
    };

    class CLASS(TU_Backpack_RTO): CLASS(TU_Backpack)
    {
        displayName = "[TU] Radio Backpack";
        mass = 35;

        model = "\sc_equipment\data\watchdog\wd_backpack_sl.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_desert_co.paa"};
        picture = "\sc_equipment\data\icons\icon_ar_ca.paa";

        // TFAR Long Range
        tf_hasLRradio = 1;
        tf_range = 25000;

        tf_dialog = "mr3000_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_east_radio_code";
        tf_subtype = "digital_lr";
    };
    class CLASS(TU_Backpack_RTO_Predef_SL): CLASS(TU_Backpack_RTO)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_100rnd_E5),10);
            MAG_XX(SC_IG3,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,5);
        };
    };
};