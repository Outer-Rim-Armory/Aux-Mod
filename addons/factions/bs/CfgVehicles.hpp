class CfgVehicles {
    class CLASS(INDEP_Unit_Base);
    class CLASS(BS_Unit_Base): CLASS(INDEP_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QCLASS(Faction_BS);

        genericNames = QCLASS(BS_Soldier);
        modelSides[] = {ALL_SIDES};

        items[] = {
            // Medical
            ITEM_20("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };
        respawnItems[] = {
            // Medical
            ITEM_20("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        uniformClass = QCLASS(BS_Uniform);
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTexBSres[] = {"\ls_armor_greenfor\uniform\mandalorian\undersuit\data\uniform_undersuit_co.paa"};
    };

    class CLASS(BS_Unit_Rifleman): CLASS(BS_Unit_Base) {
        SCOPE_PUBLIC;

        displayName = "01: Rifleman";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T1);
        editorPreview = EDITOR_PREVIEW(BS_Unit_Rifleman);

        weapons[] = {QCLASS(E5), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100Rnd_E5)};
        respawnMagazines[] = {QCLASS(Mag_100Rnd_E5)};

        linkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Backpack_Predef_Rifleman);
    };
    class CLASS(BS_Unit_Rifleman_T2): CLASS(BS_Unit_Rifleman) {
        displayName = "01: Veteran Rifleman";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T2);
        editorPreview = EDITOR_PREVIEW(BS_Unit_Rifleman_T2);
        linkedItems[] = {QCLASS(BS_Helmet_T2), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_T2), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Veteran_Backpack_Predef_Rifleman);
    };
    class CLASS(BS_Unit_Rifleman_T3): CLASS(BS_Unit_Rifleman_T2) {
        displayName = "01: Elite Rifleman";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T3);
        editorPreview = EDITOR_PREVIEW(BS_Unit_Rifleman_T3);
        linkedItems[] = {QCLASS(BS_Helmet_T3), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_T3), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Elite_Backpack_Predef_Rifleman);
    };

    class CLASS(BS_Unit_AT): CLASS(BS_Unit_Rifleman) {
        displayName = "02: Rifleman (AT)";
        editorPreview = EDITOR_PREVIEW(BS_Unit_AT);
        icon = "iconManAT";

        weapons[] = {QCLASS(E5), "", QCLASS(RPS7), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", QCLASS(RPS7), "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100Rnd_E5), QCLASS(Mag_1Rnd_RPS7_AT)};
        respawnMagazines[] = {QCLASS(Mag_100Rnd_E5), QCLASS(Mag_1Rnd_RPS7_AT)};

        backpack = QCLASS(BS_Backpack_Heavy_Predef_AT);
    };
    class CLASS(BS_Unit_AT_T2): CLASS(BS_Unit_AT) {
        displayName = "02: Veteran Rifleman (AT)";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T2);
        editorPreview = EDITOR_PREVIEW(BS_Unit_AT_T2);

        weapons[] = {QCLASS(E5), "", QCLASS(RPS7), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5), "", QCLASS(RPS7), "Throw", "Put"};

        magazines[] = {QCLASS(Mag_100Rnd_E5), QCLASS(Mag_1Rnd_RPS7_AT)};
        respawnMagazines[] = {QCLASS(Mag_100Rnd_E5), QCLASS(Mag_1Rnd_RPS7_AT)};

        linkedItems[] = {QCLASS(BS_Helmet_T2), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_T2), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Veteran_Backpack_Heavy_Predef_AT);
    };
    class CLASS(BS_Unit_AT_T3): CLASS(BS_Unit_AT_T2) {
        displayName = "02: Elite Rifleman (AT)";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T3);
        editorPreview = EDITOR_PREVIEW(BS_Unit_AT_T3);
        linkedItems[] = {QCLASS(BS_Helmet_T3), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_T3), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Elite_Backpack_Heavy_Predef_AT);
    };

    class CLASS(BS_Unit_Marksman): CLASS(BS_Unit_Rifleman) {
        displayName = "03: Marksman";
        editorPreview = EDITOR_PREVIEW(BS_Unit_Marksman);
        icon = "LSiconMarksman";

        weapons[] = {QCLASS(E5S), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5S), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_20rnd_E5S)};
        respawnMagazines[] = {QCLASS(Mag_20rnd_E5S)};

        linkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Backpack_Predef_Marksman);
    };
    class CLASS(BS_Unit_Marksman_T2): CLASS(BS_Unit_Marksman) {
        displayName = "03: Veteran Marksman";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T2);
        editorPreview = EDITOR_PREVIEW(BS_Unit_Marksman_T2);
        linkedItems[] = {QCLASS(BS_Helmet_T2), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_T2), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Veteran_Backpack_Predef_Marksman);
    };
    class CLASS(BS_Unit_Marksman_T3): CLASS(BS_Unit_Marksman_T2) {
        displayName = "03: Elite Marksman";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T3);
        editorPreview = EDITOR_PREVIEW(BS_Unit_Marksman_T3);
        linkedItems[] = {QCLASS(BS_Helmet_T3), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_T3), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Elite_Backpack_Predef_Marksman);
    };

    class CLASS(BS_Unit_Heavy): CLASS(BS_Unit_Rifleman) {
        displayName = "04: Heavy";
        editorPreview = EDITOR_PREVIEW(BS_Unit_Heavy);
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T1);
        icon = "iconManMG";

        weapons[] = {QCLASS(E5C_Stock), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(E5C_Stock), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_150Rnd_E5C)};
        respawnMagazines[] = {QCLASS(Mag_150Rnd_E5C)};

        linkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet), QCLASS(BS_Vest), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Backpack_Predef_Heavy);
    };
    class CLASS(BS_Unit_Heavy_T2): CLASS(BS_Unit_Heavy) {
        displayName = "04: Veteran Heavy";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T2);
        editorPreview = EDITOR_PREVIEW(BS_Unit_Heavy_T2);
        linkedItems[] = {QCLASS(BS_Helmet_T2), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_T2), QCLASS(BS_Vest_Medium), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Veteran_Backpack_Predef_Heavy);
    };
    class CLASS(BS_Unit_Heavy_T3): CLASS(BS_Unit_Heavy_T2) {
        displayName = "04: Elite Heavy";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T3);
        editorPreview = EDITOR_PREVIEW(BS_Unit_Heavy_T3);
        linkedItems[] = {QCLASS(BS_Helmet_T3), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_T3), QCLASS(BS_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Elite_Backpack_Predef_Heavy);
    };

    class CLASS(BS_Unit_SL): CLASS(BS_Unit_Rifleman) {
        displayName = "05: Squad Leader";
        editorPreview = EDITOR_PREVIEW(BS_Unit_SL);
        icon = "iconManLeader";

        weapons[] = {QCLASS(Arkanian), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(Arkanian), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_40Rnd_Arkanian)};
        respawnMagazines[] = {QCLASS(Mag_40Rnd_Arkanian)};

        linkedItems[] = {QCLASS(BS_Helmet_SL), QCLASS(BS_Vest_Captain), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_SL), QCLASS(BS_Vest_Captain), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Backpack_RTO_Predef_SL);
    };
    class CLASS(BS_Unit_SL_T2): CLASS(BS_Unit_SL) {
        displayName = "05: Veteran Squad Leader";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T2);
        editorPreview = EDITOR_PREVIEW(BS_Unit_SL_T2);
        linkedItems[] = {QCLASS(BS_Helmet_SL), QCLASS(BS_Vest_Captain), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_SL), QCLASS(BS_Vest_Captain), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Veteran_Backpack_RTO_Predef_SL);
    };
    class CLASS(BS_Unit_SL_T3): CLASS(BS_Unit_SL_T2) {
        displayName = "05: Elite Squad Leader";
        editorSubcategory = QCLASS(EdSubCat_BS_INF_T3);
        editorPreview = EDITOR_PREVIEW(BS_Unit_SL_T3);
        linkedItems[] = {QCLASS(BS_Helmet_SL), QCLASS(BS_Vest_Captain), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(BS_Helmet_SL), QCLASS(BS_Vest_Captain), LINKED_ITEMS_RADIO};
        backpack = QCLASS(BS_Elite_Backpack_RTO_Predef_SL);
    };

    class CLASS(backpack_base);
    class CLASS(BS_Backpack): CLASS(backpack_base) {
        SCOPE_PUBLIC;

        displayName = "[BS] Backpack";
        descriptionshort = "Black Suns Backpack";

        model = "sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTexBSres[] = {"sc_equipment\data\watchdog\texBSres\backpack_desert_co.paa"};
        picBSre = "\ScionPatch\picBSres\SC_Backpack_WD_Desert.paa";
    };
    class CLASS(BS_Backpack_Predef_Rifleman): CLASS(BS_Backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_100Rnd_E5),15);
            MAG_XX(ls_mag_classB_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };
    class CLASS(BS_Backpack_Predef_Marksman): CLASS(BS_Backpack_Predef_Rifleman) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_20rnd_E5S),15);
            MAG_XX(ls_mag_classB_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };
    class CLASS(BS_Backpack_Predef_Heavy): CLASS(BS_Backpack_Predef_Rifleman) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_150rnd_E5C),15);
            MAG_XX(ls_mag_classB_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };

    class CLASS(BS_Veteran_Backpack): CLASS(BS_Backpack) {
        displayName = "[BS] Veteran Backpack";
        maximumLoad = 250;
        model = "sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTexBSres[] = {"sc_equipment\data\watchdog\texBSres\backpack_desert_co.paa"};
        picBSre = "\ScionPatch\picBSres\SC_Backpack_WD_Desert.paa";
    };
    class CLASS(BS_Veteran_Backpack_Predef_Rifleman): CLASS(BS_Veteran_Backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(ls_mag_classC_thermalDet,4);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,4);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,1);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,1);
        };
    };
    class CLASS(BS_Veteran_Backpack_Predef_Marksman): CLASS(BS_Veteran_Backpack_Predef_Rifleman) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_20rnd_E5S),15);
            MAG_XX(ls_mag_classB_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
        };
    };

    class CLASS(BS_Elite_Backpack): CLASS(BS_Backpack) {
        displayName = "[BS] Elite Backpack";
        maximumLoad = 350;

        model = "MDF\MDFBackpack.p3d";
        hiddenSelectionsTexBSres[] = {"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"};
    };
    class CLASS(BS_Elite_Backpack_Predef_Rifleman): CLASS(BS_Elite_Backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(ls_mag_classB_thermalDet,3);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenadePersonal_Mag,2);
            MAG_XX(SquadShieldMagazine,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,3);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,3);
            MAG_XX(CLASS(Grenade_Bacta),1);
        };
    };
    class CLASS(BS_Elite_Backpack_Predef_Marksman): CLASS(BS_Elite_Backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_20rnd_E5S),15);
            MAG_XX(ls_mag_classB_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(OPTRE_FC_PlasmaGrenade,5);
            MAG_XX(CLASS(Grenade_Bacta),1);
        };
    };

    class CLASS(BS_Backpack_Heavy): CLASS(BS_Backpack) {
        displayName = "[BS] Heavy Backpack";
        maximumLoad = 350;

        model = "sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelectionsTexBSres[] = {"sc_equipment\data\watchdog\texBSres\backpack_desert_co.paa"};
        picBSre = "sc_equipment\data\watchdog\wd_backpack.p3d";
    };
    class CLASS(BS_Backpack_Heavy_Predef_AT): CLASS(BS_Backpack_Heavy) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_100Rnd_E5),15);
            MAG_XX(SC_MPML_M_AT,3);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };
    class CLASS(BS_Backpack_Heavy_Predef_AA): CLASS(BS_Backpack_Heavy_Predef_AT) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_100Rnd_E5),15);
            MAG_XX(SC_MPML_M_AA,3);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };

    class CLASS(BS_Veteran_Backpack_Heavy): CLASS(BS_Veteran_Backpack) {
        displayName = "[BS] Veteran Heavy Backpack";
        maximumLoad = 450;

        model = "sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelectionsTexBSres[] = {"sc_equipment\data\watchdog\texBSres\backpack_desert_co.paa"};
        picBSre = "sc_equipment\data\watchdog\wd_backpack.p3d";
    };
    class CLASS(BS_Veteran_Backpack_Heavy_Predef_AT): CLASS(BS_Veteran_Backpack_Heavy) {
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

    class CLASS(BS_Elite_Backpack_Heavy): CLASS(BS_Elite_Backpack) {
        displayName = "[BS] Elite Heavy Backpack";
        maximumLoad = 550;

        model = "MDF\MDFBackpack.p3d";
        hiddenSelectionsTexBSres[] = {"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"};
    };
    class CLASS(BS_Elite_Backpack_Heavy_Predef_AT): CLASS(BS_Elite_Backpack_Heavy) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(3AS_JLTS_MK43_AT,2);
            MAG_XX(ls_mag_classB_thermalDet,3);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenadePersonal_Mag,2);
            MAG_XX(SquadShieldMagazine,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,3);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,3);
            MAG_XX(CLASS(Grenade_Bacta),1);
        };
    };
    class CLASS(BS_Elite_Backpack_Heavy_Predef_AA): CLASS(BS_Elite_Backpack_Heavy_Predef_AT) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(3AS_JLTS_MK39_AA,2);
            MAG_XX(ls_mag_classC_thermalDet,4);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,4);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,1);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,1);
        };
    };

    class CLASS(BS_Backpack_RTO): CLASS(BS_Backpack) {
        displayName = "[BS] Radio Backpack";

        model = "MDF\MDFBackpack.p3d";
        hiddenSelectionsTexBSres[] = {"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"};

        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "mr3000_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_east_radio_code";
        tf_subtype = "digital_lr";

        maximumLoad = 250;
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
    class CLASS(BS_Veteran_Backpack_RTO_Predef_SL): CLASS(BS_Backpack_RTO_Predef_SL) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_40rnd_Arkanian),15);
            MAG_XX(ls_mag_classB_thermalDet,7);
            MAG_XX(SmokeShell,3);
            MAG_XX(ShieldGrenade_Mag,3);
            MAG_XX(OPTRE_FC_PlasmaGrenade,7);
        };
    };

    class CLASS(BS_Elite_Backpack_RTO): CLASS(BS_Backpack_RTO) {
        displayName = "[BS] Elite Radio Backpack";
        maximumLoad = 300;
    };
    class CLASS(BS_Elite_Backpack_RTO_Predef_SL): CLASS(BS_Elite_Backpack_RTO) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_40rnd_Arkanian),20);
            MAG_XX(ls_mag_classB_thermalDet,8);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,4);
            MAG_XX(OPTRE_FC_PlasmaGrenade,8);
        };
    };

    class CLASS(AAT_Base);
    class CLASS(AAT_BS): CLASS(AAT_Base) {
        SCOPE_PUBLIC;

        faction = QFACTION(BS);
        side = INDEP;

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};

        hiddenSelectionsTexBSres[] = {"\3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
        editorPreview = EEDITOR_PREVIEW(vehicles\land\aat,AAT_Tan);
    };

    class CLASS(AAT_Heavy_Base);
    class CLASS(AAT_Heavy_BS): CLASS(AAT_Heavy_Base) {
        SCOPE_PUBLIC;

        faction = QFACTION(BS);
        side = INDEP;

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
    };

    class CLASS(AAT_King_Base);
    class CLASS(AAT_King_BS): CLASS(AAT_King_Base) {
        SCOPE_PUBLIC;

        faction = QFACTION(BS);
        side = INDEP;

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
    };

    class BNA_KC_Plesioth_Base;
    class BNA_KC_Plesioth_BS: BNA_KC_Plesioth_Base {
        SCOPE_PUBLIC;

        side = INDEP;
        faction = QFACTION(BS);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\plesioth,Plesioth_Tan);

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
    };

    class CLASS(Conga_IFV_Base);
    class CLASS(Conga_IFV_BS): CLASS(Conga_IFV_Base) {
        SCOPE_PUBLIC;

        side = INDEP;
        faction = QFACTION(BS);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\conga,Conga_IFV_Tan);

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
    };

    class CLASS(Conga_MGS_Base);
    class CLASS(Conga_MGS_BS): CLASS(Conga_MGS_Base) {
        SCOPE_PUBLIC;

        side = INDEP;
        faction = QFACTION(BS);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\conga,Conga_MGS_Tan);

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
    };

    class CLASS(ScoutTank_Base);
    class CLASS(ScoutTank_BS): CLASS(ScoutTank_Base) {
        SCOPE_PUBLIC;

        side = INDEP;
        faction = QFACTION(BS);

        displayName = "Fango";

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
    };

    class CLASS(Ogre_Base);
    class CLASS(Ogre_BS): CLASS(Ogre_Base) {
        SCOPE_PUBLIC;

        side = INDEP;
        faction = QFACTION(BS);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\ogre,Ogre_Tan);

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
    };

    class CLASS(Ogre_Armed_Base);
    class CLASS(Ogre_Armed_BS): CLASS(Ogre_Armed_Base) {
        SCOPE_PUBLIC;

        side = INDEP;
        faction = QFACTION(BS);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\ogre,Ogre_Armed_Tan);

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};

    };

    class CLASS(Vespoid_Base);
    class CLASS(Vespoid_BS): CLASS(Vespoid_Base) {
        SCOPE_PUBLIC;

        side = INDEP;
        faction = QFACTION(BS);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\vespoid,Vespoid_Armed_BS);

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(vehicles,air\vespoid\data\textures\BS_Falcon_Main_co.paa),
            QPATHTOEF(vehicles,air\vespoid\data\textures\BS_Falcon_Attachments_co.paa),
            QPATHTOEF(vehicles,air\vespoid\data\textures\BS_Falcon_Interior_co.paa),
            "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
            "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
            QPATHTOEF(vehicles,air\vespoid\data\textures\Falcon_Decal_ca.paa)
        };
        textureList[] = {"TechnoUnion", 0, "EPF", 0, "BS", 1};
    };

    class CLASS(Vespoid_Armed_Base);
    class CLASS(Vespoid_Armed_BS): CLASS(Vespoid_Armed_Base) {
        SCOPE_PUBLIC;

        side = INDEP;
        faction = QFACTION(BS);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\vespoid,Vespoid_BS);

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(vehicles,air\vespoid\data\textures\BS_Falcon_Main_co.paa),
            QPATHTOEF(vehicles,air\vespoid\data\textures\BS_Falcon_Attachments_co.paa),
            QPATHTOEF(vehicles,air\vespoid\data\textures\BS_Falcon_Interior_co.paa),
            "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
            "\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
            QPATHTOEF(vehicles,air\vespoid\data\textures\Falcon_Decal_ca.paa)
        };
        textureList[] = {"TechnoUnion", 0, "EPF", 0, "BS", 1};
    };

    class CLASS(Rathian_CAP_Base);
    class CLASS(Rathian_CAP_BS): CLASS(Rathian_CAP_Base) {
        SCOPE_PUBLIC;

        side = INDEP;
        faction = QFACTION(BS);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\rathian,Rathian_Tan);

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
    };

    class CLASS(Rathian_CAS_Base);
    class CLASS(Rathian_CAS_BS): CLASS(Rathian_CAS_Base) {
        SCOPE_HIDDEN;

        side = INDEP;
        faction = QFACTION(BS);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\rathian,Rathian_Tan);

        crew = QCLASS(BS_Unit_Rifleman);
        typicalCargo[] = {QCLASS(BS_Unit_Rifleman)};
    };
};
