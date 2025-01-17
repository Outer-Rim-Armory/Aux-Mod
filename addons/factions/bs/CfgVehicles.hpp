class CfgVehicles {
    class CLASS(INDEP_Unit_Base);
    class CLASS(BS_Unit_Base): CLASS(INDEP_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(BS);
        uniformClass = QCLASS(BS_Uniform);

        genericNames = QCLASS(Black_Sun_Soldier);

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_undersuit\cu_black_co.paa"};
    };

    class CLASS(BS_Unit_Rifleman): CLASS(BS_Unit_Base) {
        SCOPE_PUBLIC;
        displayName = "Black Suns Rifleman";
        editorPreview = EDITOR_PREVIEW(BS_Unit_Rifleman);

        weapons[] = {QCLASS(E5), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100Rnd_E5)};
        respawnMagazines[] = {QCLASS(Mag_100Rnd_E5)};

        items[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };
        respawnItems[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };

        linkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Backpack_Predef_Rifleman);

        class EventHandlers;
    };
    class CLASS(BS_Unit_AT): CLASS(BS_Unit_Rifleman) {
        displayName = "Black Suns Rifleman (AT)";
        editorPreview = EDITOR_PREVIEW(BS_Unit_AT);
        icon = "iconManAT";

        weapons[] = {QCLASS(E5), "", QCLASS(RPS7), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", QCLASS(RPS7), "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100Rnd_E5), QCLASS(Mag_1Rnd_RPS7_AT)};
        respawnMagazines[] = {QCLASS(Mag_100Rnd_E5), QCLASS(Mag_1Rnd_RPS7_AT)};

        linkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Backpack_Heavy_Predef_AT);
    };
    class CLASS(BS_Unit_Sniper): CLASS(BS_Unit_Rifleman) {
        displayName = "Black Suns Sniper";
        editorPreview = EDITOR_PREVIEW(BS_Unit_Sniper);
        icon = "JLTS_iconManSniper";

        weapons[] = {QCLASS(E5S), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5S), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_20rnd_E5S)};
        respawnMagazines[] = {QCLASS(Mag_20rnd_E5S)};

        linkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet), QCLASS(EPF_Vest), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Backpack_Predef_Sniper);
    };
    class CLASS(BS_Unit_Heavy): CLASS(BS_Unit_Rifleman) {
        displayName = "Black Suns Heavy";
        editorPreview = EDITOR_PREVIEW(BS_Unit_AssaultHeavy);
        icon = "iconManMG";

        weapons[] = {QCLASS(E5C_Stock), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5C_Stock), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_150Rnd_E5C)};
        respawnMagazines[] = {QCLASS(Mag_150Rnd_E5C)};

        linkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Backpack_Assault_Predef_Heavy);
    };
    class CLASS(BS_Unit_Captain): CLASS(BS_Unit_Rifleman) {
        displayName = "Black Suns Captain";
        editorPreview = EDITOR_PREVIEW(BS_Unit_Captain);
        icon = "iconManLeader";

        weapons[] = {QCLASS(Arkanian), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(Arkanian), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_40Rnd_Arkanian)};
        respawnMagazines[] = {QCLASS(Mag_40Rnd_Arkanian)};

        linkedItems[] = {QCLASS(BS_Captain_Helmet), QCLASS(EPF_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Captain_Helmet), QCLASS(EPF_Vest_Medium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(EPF_Backpack_RTO_Predef_SL);
    };

    class CLASS(backpack_base);
    class CLASS(BS_Backpack): CLASS(backpack_base) {
        SCOPE_PUBLIC;

        displayName = "[BS] Backpack";

        model = "sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sc_equipment\data\watchdog\textures\backpack_desert_co.paa"};
        picture = "sc_equipment\data\watchdog\wd_backpack.p3d";
    };
    class CLASS(BS_Backpack_Predef_Rifleman): CLASS(BS_Backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_100Rnd_E5),10);
            MAG_XX(ls_mag_classB_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };

    class CLASS(BS_Backpack_Predef_Sniper): CLASS(BS_Backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_20rnd_E5S),5);
            MAG_XX(ls_mag_classB_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };

    class CLASS(BS_Backpack_Heavy): CLASS(BS_Backpack) {
        displayName = "[BS] Heavy Backpack";
        maximumLoad = 450;
        mass = 35;

        model = "sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelectionsTextures[] = {"sc_equipment\data\watchdog\textures\backpack_desert_co.paa"};
        picture = "sc_equipment\data\watchdog\wd_backpack.p3d";
    };
    class CLASS(BS_Backpack_Heavy_Predef_AT): CLASS(BS_Backpack_Heavy) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_100Rnd_E5),10);
            MAG_XX(CLASS(Mag_1Rnd_RPS7_AT),4);
            MAG_XX(ls_mag_classB_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };
    class CLASS(BS_Backpack_RTO): CLASS(BS_Backpack) {
        displayName = "[BS] Radio Backpack";
        mass = 35;

        model = "MDF\MDFBackpack.p3d";
        hiddenSelectionsTextures[] = {"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"};

        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "mr3000_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_east_radio_code";
        tf_subtype = "digital_lr";
    };
    class CLASS(BS_Backpack_RTO_Predef_SL): CLASS(BS_Backpack_RTO) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_40rnd_Arkanian),10);
            MAG_XX(ls_mag_classB_thermalDet,6);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };
};