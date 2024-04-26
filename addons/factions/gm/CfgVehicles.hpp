class CfgVehicles {
    class CLASS(INDEP_Unit_Base);
    class CLASS(GM_Unit_Base): CLASS(INDEP_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QCLASS(Faction_GM);
        editorSubcategory = QCLASS(EdSubCat_GM_INF_T1);

        genericNames = QCLASS(GM_Soldier);

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
        uniformClass = QCLASS(GM_Uniform);
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\ls_armor_greenfor\uniform\mandalorian\undersuit\data\uniform_undersuit_co.paa"};
    };

    class CLASS(GM_Unit_Rifleman): CLASS(GM_Unit_Base) {
        SCOPE_PUBLIC;

        displayName = "Rifleman";
        editorPreview = EDITOR_PREVIEW(GM_Unit_Rifleman);

        weapons[] = {QCLASS(LW38_Green_Scoped), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(LW38_Green_Scoped), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green)};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green)};

        linkedItems[] = {QCLASS(GM_Helmet), QCLASS(GM_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet), QCLASS(GM_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Backpack_Predef_Rifleman);
    };
    class CLASS(GM_Unit_Rifleman_T2): CLASS(GM_Unit_Rifleman) {
        displayName = "Veteran Rifleman";
        editorSubcategory = QCLASS(EdSubCat_GM_INF_T2);
        editorPreview = EDITOR_PREVIEW(GM_Unit_Rifleman_T2);
        linkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Veteran_Backpack_Predef_Rifleman);
    };
    class CLASS(GM_Unit_Rifleman_T3): CLASS(GM_Unit_Rifleman_T2) {
        displayName = "Elite Rifleman";
        editorSubcategory = QCLASS(EdSubCat_GM_INF_T3);
        editorPreview = EDITOR_PREVIEW(GM_Unit_Rifleman_T3);
        linkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Elite_Backpack_Predef_Rifleman);
    };

    class CLASS(GM_Unit_AT): CLASS(GM_Unit_Rifleman) {
        displayName = "Rifleman (AT)";
        editorPreview = EDITOR_PREVIEW(GM_Unit_AT);
        icon = "iconManAT";

        weapons[] = {QCLASS(LW38_Green_Scoped), "", "SC_MPML", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(LW38_Green_Scoped), "", "SC_MPML", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "SC_MPML_M_AT"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "SC_MPML_M_AT"};

        backpack = QCLASS(GM_Backpack_Heavy_Predef_AT);
    };
    class CLASS(GM_Unit_AT_T2): CLASS(GM_Unit_AT) {
        displayName = "Veteran Rifleman (AT)";
        editorSubcategory = QCLASS(EdSubCat_GM_INF_T2);
        editorPreview = EDITOR_PREVIEW(GM_Unit_AT_T2);

        weapons[] = {QCLASS(LW38_Green_Scoped), "", "3AS_PLX1_F", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(LW38_Green_Scoped), "", "3AS_PLX1_F", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK43_AT"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK43_AT"};

        linkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Veteran_Backpack_Heavy_Predef_AT);
    };
    class CLASS(GM_Unit_AT_T3): CLASS(GM_Unit_AT_T2) {
        displayName = "Elite Rifleman (AT)";
        editorSubcategory = QCLASS(EdSubCat_GM_INF_T3);
        editorPreview = EDITOR_PREVIEW(GM_Unit_AT_T3);
        linkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Elite_Backpack_Heavy_Predef_AT);
    };

    class CLASS(GM_Unit_AA): CLASS(GM_Unit_AT) {
        displayName = "Rifleman (AA)";

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "SC_MPML_M_AA"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "SC_MPML_M_AA"};

        backpack = QCLASS(GM_Backpack_Heavy_Predef_AA);
    };
    class CLASS(GM_Unit_AA_T2): CLASS(GM_Unit_AT_T2) {
        displayName = "Veteran Rifleman (AA)";

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK39_AA"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK39_AA"};

        backpack = QCLASS(GM_Veteran_Backpack_Heavy_Predef_AA);
    };
    class CLASS(GM_Unit_AA_T3): CLASS(GM_Unit_AT_T3) {
        displayName = "Elite Rifleman (AA)";

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK39_AA"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK39_AA"};

        backpack = QCLASS(GM_Elite_Backpack_Heavy_Predef_AA);
    };

    class CLASS(GM_Unit_Marksman): CLASS(GM_Unit_Rifleman) {
        displayName = "Marksman";
        editorPreview = EDITOR_PREVIEW(GM_Unit_Marksman);
        icon = "LSiconMarksman";

        weapons[] = {QCLASS(HI12), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(HI12), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_30Rnd_HI12)};
        respawnMagazines[] = {QCLASS(Mag_30Rnd_HI12)};

        linkedItems[] = {QCLASS(GM_Helmet), QCLASS(GM_Vest), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet), QCLASS(GM_Vest), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Backpack_Predef_Marksman);
    };
    class CLASS(GM_Unit_Marksman_T2): CLASS(GM_Unit_Marksman) {
        displayName = "Veteran Marksman";
        editorSubcategory = QCLASS(EdSubCat_GM_INF_T2);
        editorPreview = EDITOR_PREVIEW(GM_Unit_Marksman_T2);
        linkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Veteran_Backpack_Predef_Marksman);
    };
    class CLASS(GM_Unit_Marksman_T3): CLASS(GM_Unit_Marksman_T2) {
        displayName = "Elite Marksman";
        editorSubcategory = QCLASS(EdSubCat_GM_INF_T3);
        editorPreview = EDITOR_PREVIEW(GM_Unit_Marksman_T3);
        linkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Elite_Backpack_Predef_Marksman);
    };

    class CLASS(GM_Unit_SL): CLASS(GM_Unit_Rifleman) {
        displayName = "Squad Leader";
        editorPreview = EDITOR_PREVIEW(GM_Unit_SL);
        icon = "iconManLeader";

        linkedItems[] = {QCLASS(GM_Helmet_SL), QCLASS(GM_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_SL), QCLASS(GM_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Backpack_RTO_Predef_SL);
    };
    class CLASS(GM_Unit_SL_T2): CLASS(GM_Unit_SL) {
        displayName = "Veteran Squad Leader";
        editorSubcategory = QCLASS(EdSubCat_GM_INF_T2);
        editorPreview = EDITOR_PREVIEW(GM_Unit_SL_T2);
        linkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Veteran_Backpack_RTO_Predef_SL);
    };
    class CLASS(GM_Unit_SL_T3): CLASS(GM_Unit_SL_T2) {
        displayName = "Elite Squad Leader";
        editorSubcategory = QCLASS(EdSubCat_GM_INF_T3);
        editorPreview = EDITOR_PREVIEW(GM_Unit_SL_T3);
        linkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Elite_Backpack_RTO_Predef_SL);
    };

    class CLASS(GM_RLA_Unit_Rifleman): CLASS(GM_Unit_Rifleman) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_Rifleman);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Backpack_Predef_Rifleman);
    };
    class CLASS(GM_RLA_Unit_Rifleman_T2): CLASS(GM_Unit_Rifleman_T2) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_Rifleman_T2);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Veteran_Backpack_Predef_Rifleman);
    };

    class CLASS(GM_RLA_Unit_AT): CLASS(GM_Unit_AT) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_AT);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Backpack_Heavy_Predef_AT);
    };
    class CLASS(GM_RLA_Unit_AT_T2): CLASS(GM_Unit_AT_T2) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_AT_T2);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Veteran_Backpack_Heavy_Predef_AT);
    };

    class CLASS(GM_RLA_Unit_AA): CLASS(GM_Unit_AA) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_AT);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Backpack_Heavy_Predef_AA);
    };
    class CLASS(GM_RLA_Unit_AA_T2): CLASS(GM_Unit_AA_T2) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_AT_T2);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Veteran_Backpack_Heavy_Predef_AA);
    };

    class CLASS(GM_RLA_Unit_Marksman): CLASS(GM_Unit_Marksman) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_Marksman);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Backpack_Predef_Marksman);
    };
    class CLASS(GM_RLA_Unit_Marksman_T2): CLASS(GM_Unit_Marksman_T2) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_Marksman_T2);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Veteran_Backpack_Predef_Marksman);
    };

    class CLASS(GM_RLA_Unit_SL): CLASS(GM_Unit_SL) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_SL);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet), QCLASS(GM_RLA_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Backpack_RTO_Predef_SL);
    };
    class CLASS(GM_RLA_Unit_SL_T2): CLASS(GM_Unit_SL_T2) {
        editorSubcategory = QEDSUBCAT(GM_RLA);
        editorPreview = EDITOR_PREVIEW(GM_RLA_Unit_SL_T2);
        genericNames = QCLASS(RLA_Soldier);

        linkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_RLA_Helmet_T2), QCLASS(GM_RLA_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_RLA_Veteran_Backpack_RTO_Predef_SL);
    };

    class CLASS(GM_Unit_Vex): CLASS(GM_Unit_Base) {
        SCOPE_PUBLIC;

        displayName = "General Vex";
        editorSubcategory = QCLASS(EdSubCat_Special);
        icon = "iconManOfficer";

        uniformClass = QCLASS(GM_Uniform_Vex);
        model = "\armor_unit\Merc_Armor_Tayrus.p3d";
        hiddenSelections[] = {"camo5", "camo6", "camoB", "undersuit"};
        hiddenSelectionsTextures[] = {
            "\armor_unit\Tayrus\Merc_Armor_Up_co.paa",
            "\armor_unit\Tayrus\Merc_Armor_HL_co.paa",
            "\armor_unit\Tayrus\Merc_Armur_CLoth_co.paa",
            "\armor_unit\Tayrus\Merc_uniform.paa"
        };

        linkedItems[] = {LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {LINKED_ITEMS_RADIO};
    };

    class CLASS(backpack_base);
    class CLASS(GM_Backpack): CLASS(backpack_base) {
        SCOPE_PUBLIC;

        displayName = "[GM] Backpack";
        descriptionshort = "Gal'torran Military Backpack";

        model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
        hiddenSelections[] = {"camo1", "AP_Heavy", "biofoam"};
        hiddenSelectionsTextures[] = {"\OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
        picture = "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
    };
    class CLASS(GM_Backpack_Predef_Rifleman): CLASS(GM_Backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };
    class CLASS(GM_Backpack_Predef_Marksman): CLASS(GM_Backpack_Predef_Rifleman) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_30Rnd_HI12),15);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };

    class CLASS(GM_Veteran_Backpack): CLASS(GM_Backpack) {
        displayName = "[GM] Veteran Backpack";
        maximumLoad = 250;
        model = "\3AS\3AS_Characters\Commando\3AS_Katarn_BackPack.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Backpack_Standard_CO.paa"};
        picture = "\3AS\3AS_Characters\Commando\data\UI\Katarn_Backpack_Unmarked_UI_ca.paa";
    };
    class CLASS(GM_Veteran_Backpack_Predef_Rifleman): CLASS(GM_Veteran_Backpack) {
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
    class CLASS(GM_Veteran_Backpack_Predef_Marksman): CLASS(GM_Veteran_Backpack_Predef_Rifleman) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_30Rnd_HI12),15);
            MAG_XX(ls_mag_classC_thermalDet,4);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,4);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,1);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,1);
        };
    };

    class CLASS(GM_Elite_Backpack): CLASS(GM_Backpack) {
        displayName = "[GM] Elite Backpack";
        maximumLoad = 350;

        model = "\SentinelBackpack\SentinelBackpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_newequipment2\Sentinel\Night\Back\DefaultMaterial_CO.paa"};
        picture = "\SentinelBackpack\icon_ar_ca.paa";
    };
    class CLASS(GM_Elite_Backpack_Predef_Rifleman): CLASS(GM_Elite_Backpack) {
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
    class CLASS(GM_Elite_Backpack_Predef_Marksman): CLASS(GM_Elite_Backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_30Rnd_HI12),15);
            MAG_XX(ls_mag_classB_thermalDet,3);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenadePersonal_Mag,2);
            MAG_XX(SquadShieldMagazine,2);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,3);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,3);
            MAG_XX(CLASS(Grenade_Bacta),1);
        };
    };

    class CLASS(GM_Backpack_Heavy): CLASS(GM_Backpack) {
        displayName = "[GM] Heavy Backpack";
        maximumLoad = 350;

        model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
        hiddenSelections[] = {"camo1", "biofoam"};
    };
    class CLASS(GM_Backpack_Heavy_Predef_AT): CLASS(GM_Backpack_Heavy) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(SC_MPML_M_AT,3);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };
    class CLASS(GM_Backpack_Heavy_Predef_AA): CLASS(GM_Backpack_Heavy_Predef_AT) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(SC_MPML_M_AA,3);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };

    class CLASS(GM_Veteran_Backpack_Heavy): CLASS(GM_Veteran_Backpack) {
        displayName = "[GM] Veteran Heavy Backpack";
        maximumLoad = 450;
    };
    class CLASS(GM_Veteran_Backpack_Heavy_Predef_AT): CLASS(GM_Veteran_Backpack_Heavy) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(3AS_JLTS_MK43_AT,2);
            MAG_XX(ls_mag_classC_thermalDet,4);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,4);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,1);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,1);
        };
    };
    class CLASS(GM_Veteran_Backpack_Heavy_Predef_AA): CLASS(GM_Veteran_Backpack_Heavy_Predef_AT) {
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

    class CLASS(GM_Elite_Backpack_Heavy): CLASS(GM_Elite_Backpack) {
        displayName = "[GM] Elite Heavy Backpack";
        maximumLoad = 550;
    };
    class CLASS(GM_Elite_Backpack_Heavy_Predef_AT): CLASS(GM_Elite_Backpack_Heavy) {
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
    class CLASS(GM_Elite_Backpack_Heavy_Predef_AA): CLASS(GM_Elite_Backpack_Heavy_Predef_AT) {
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

    class CLASS(GM_Backpack_RTO): CLASS(GM_Backpack) {
        displayName = "[GM] Radio Backpack";

        model = "\OPTRE_unsc_units\army\rucksack.p3d";
        hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Addons"};
        hiddenSelectionsTextures[] = {"\optre_unsc_units\army\data\soft_backpack_co.paa", "optre_unsc_units\army\data\commopack_sno_co.paa"};
        picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";

        maximumLoad = 250;
    };
    class CLASS(GM_Backpack_RTO_Predef_SL): CLASS(GM_Backpack_RTO) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(ls_mag_classC_thermalDet,4);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,3);
        };
    };
    class CLASS(GM_Veteran_Backpack_RTO_Predef_SL): CLASS(GM_Backpack_RTO_Predef_SL) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(ls_mag_classC_thermalDet,4);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,4);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,1);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,1);
        };
    };

    class CLASS(GM_Elite_Backpack_RTO): CLASS(GM_Backpack_RTO) {
        displayName = "[GM] Elite Radio Backpack";
        hiddenSelectionsTextures[] = {"\optre_unsc_units\army\data\soft_backpack_co.paa", "optre_unsc_units\army\data\commopack_blk_co.paa"};
        maximumLoad = 300;
    };
    class CLASS(GM_Elite_Backpack_RTO_Predef_SL): CLASS(GM_Elite_Backpack_RTO) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(ls_mag_classB_thermalDet,3);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenadePersonal_Mag,2);
            MAG_XX(SquadShieldMagazine,1);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,3);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,3);
            MAG_XX(CLASS(Grenade_Bacta),1);
        };
    };

    class CLASS(GM_RLA_Backpack_Predef_Rifleman): CLASS(GM_Backpack_Predef_Rifleman) {
        displayName = "[GM-RLA] Backpack";
        model = "\ls_equipment_greenfor\backpack\mandalorian\standard\ls_mandalorian_standard_backpack.p3d";
        hiddenSelections[] = {"camo1", "bag", "bomb", "pouches"};
        hiddenSelectionsTextures[] = {
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa",
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa"
        };
    };
    class CLASS(GM_RLA_Veteran_Backpack_Predef_Rifleman): CLASS(GM_Veteran_Backpack_Predef_Rifleman) {
        displayName = "[GM-RLA] Backpack";
        model = "\ls_equipment_greenfor\backpack\mandalorian\standard\ls_mandalorian_standard_backpack.p3d";
        hiddenSelections[] = {"camo1", "bag", "bomb", "pouches"};
        hiddenSelectionsTextures[] = {
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa",
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa"
        };
    };

    class CLASS(GM_RLA_Backpack_Predef_Marksman): CLASS(GM_Backpack_Predef_Marksman) {
        displayName = "[GM-RLA] Backpack";
        model = "\ls_equipment_greenfor\backpack\mandalorian\standard\ls_mandalorian_standard_backpack.p3d";
        hiddenSelections[] = {"camo1", "bag", "bomb", "pouches"};
        hiddenSelectionsTextures[] = {
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa",
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa"
        };
    };
    class CLASS(GM_RLA_Veteran_Backpack_Predef_Marksman): CLASS(GM_Veteran_Backpack_Predef_Marksman) {
        displayName = "[GM-RLA] Backpack";
        model = "\ls_equipment_greenfor\backpack\mandalorian\standard\ls_mandalorian_standard_backpack.p3d";
        hiddenSelections[] = {"camo1", "bag", "bomb", "pouches"};
        hiddenSelectionsTextures[] = {
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa",
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa"
        };
    };

    class CLASS(GM_RLA_Backpack_Heavy_Predef_AT): CLASS(GM_Backpack_Heavy_Predef_AT) {
        displayName = "[GM-RLA] Backpack";
        model = "\ls_equipment_greenfor\backpack\mandalorian\standard\ls_mandalorian_standard_backpack.p3d";
        hiddenSelections[] = {"camo1", "bag", "bomb", "pouches"};
        hiddenSelectionsTextures[] = {
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa",
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa"
        };
    };
    class CLASS(GM_RLA_Veteran_Backpack_Heavy_Predef_AT): CLASS(GM_Veteran_Backpack_Heavy_Predef_AT) {
        displayName = "[GM-RLA] Backpack";
        model = "\ls_equipment_greenfor\backpack\mandalorian\standard\ls_mandalorian_standard_backpack.p3d";
        hiddenSelections[] = {"camo1", "bag", "bomb", "pouches"};
        hiddenSelectionsTextures[] = {
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa",
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa"
        };
    };

    class CLASS(GM_RLA_Backpack_Heavy_Predef_AA): CLASS(GM_Backpack_Heavy_Predef_AA) {
        displayName = "[GM-RLA] Backpack";
        model = "\ls_equipment_greenfor\backpack\mandalorian\standard\ls_mandalorian_standard_backpack.p3d";
        hiddenSelections[] = {"camo1", "bag", "bomb", "pouches"};
        hiddenSelectionsTextures[] = {
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa",
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa"
        };
    };
    class CLASS(GM_RLA_Veteran_Backpack_Heavy_Predef_AA): CLASS(GM_Veteran_Backpack_Heavy_Predef_AA) {
        displayName = "[GM-RLA] Backpack";
        model = "\ls_equipment_greenfor\backpack\mandalorian\standard\ls_mandalorian_standard_backpack.p3d";
        hiddenSelections[] = {"camo1", "bag", "bomb", "pouches"};
        hiddenSelectionsTextures[] = {
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa",
            "\ls_equipment_greenfor\backpack\mandalorian\standard\data\backpack_co.paa"
        };
    };

    class CLASS(GM_RLA_Backpack_RTO_Predef_SL): CLASS(GM_Backpack_RTO_Predef_SL) {
        displayName = "[GM-RLA] Radio Backpack";
        model = "\OPTRE_unsc_units\army\rucksack.p3d";
        hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Addons"};
        hiddenSelectionsTextures[] = {
            "\optre_unsc_units\army\data\soft_backpack_co.paa",
            "\optre_unsc_units\army\data\commopack_blk_co.paa"
        };
    };

    class CLASS(GM_RLA_Veteran_Backpack_RTO_Predef_SL): CLASS(GM_Veteran_Backpack_RTO_Predef_SL) {
        displayName = "[GM-RLA] Radio Backpack";
        model = "\OPTRE_unsc_units\army\rucksack.p3d";
        hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Addons"};
        hiddenSelectionsTextures[] = {
            "\optre_unsc_units\army\data\soft_backpack_co.paa",
            "\optre_unsc_units\army\data\commopack_blk_co.paa"
        };
    };
};