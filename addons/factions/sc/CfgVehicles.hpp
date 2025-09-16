class CfgVehicles {
    class CLASS(INDEP_Unit_Base);
    class CLASS(SC_Unit_Base): CLASS(INDEP_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(SC);

        genericNames = QCLASS(SC_Soldier);
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
        uniformClass = QCLASS(SC_Uniform);
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\ls\core\addons\characters_mandalorian\uniforms\undersuit\data\undersuit_co.paa"};
    };

    class CLASS(SC_Unit_Rifleman): CLASS(SC_Unit_Base) {
        SCOPE_PUBLIC;

        displayName = "Rifleman";
        editorSubcategory = QEDSUBCAT(SC_INF_T1);
        editorPreview = EDITOR_PREVIEW(SC_Unit_Rifleman);

        weapons[] = {QCLASS(LW38_Green_Scoped), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(LW38_Green_Scoped), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green)};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green)};

        linkedItems[] = {QCLASS(SC_Helmet), QCLASS(SC_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet), QCLASS(SC_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Backpack_Predef_Rifleman);
    };
    class CLASS(SC_Unit_Rifleman_T2): CLASS(SC_Unit_Rifleman) {
        displayName = "Veteran Rifleman";
        editorSubcategory = QEDSUBCAT(SC_INF_T2);
        editorPreview = EDITOR_PREVIEW(SC_Unit_Rifleman_T2);
        linkedItems[] = {QCLASS(SC_Helmet_T2), QCLASS(SC_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet_T2), QCLASS(SC_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Veteran_Backpack_Predef_Rifleman);
    };
    class CLASS(SC_Unit_Rifleman_T3): CLASS(SC_Unit_Rifleman_T2) {
        displayName = "Elite Rifleman";
        editorSubcategory = QEDSUBCAT(SC_INF_T3);
        editorPreview = EDITOR_PREVIEW(SC_Unit_Rifleman_T3);
        linkedItems[] = {QCLASS(SC_Helmet_T3), QCLASS(SC_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet_T3), QCLASS(SC_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Elite_Backpack_Predef_Rifleman);
    };

    class CLASS(SC_Unit_AT): CLASS(SC_Unit_Rifleman) {
        displayName = "Rifleman (AT)";
        editorPreview = EDITOR_PREVIEW(SC_Unit_AT);
        icon = "iconManAT";

        weapons[] = {QCLASS(LW38_Green_Scoped), "", "SC_MPML", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(LW38_Green_Scoped), "", "SC_MPML", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "SC_MPML_M_AT"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "SC_MPML_M_AT"};

        backpack = QCLASS(SC_Backpack_Heavy_Predef_AT);
    };
    class CLASS(SC_Unit_AT_T2): CLASS(SC_Unit_AT) {
        displayName = "Veteran Rifleman (AT)";
        editorSubcategory = QEDSUBCAT(SC_INF_T2);
        editorPreview = EDITOR_PREVIEW(SC_Unit_AT_T2);

        weapons[] = {QCLASS(LW38_Green_Scoped), "", "3AS_PLX1_F", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(LW38_Green_Scoped), "", "3AS_PLX1_F", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK43_AT"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK43_AT"};

        linkedItems[] = {QCLASS(SC_Helmet_T2), QCLASS(SC_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet_T2), QCLASS(SC_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Veteran_Backpack_Heavy_Predef_AT);
    };
    class CLASS(SC_Unit_AT_T3): CLASS(SC_Unit_AT_T2) {
        displayName = "Elite Rifleman (AT)";
        editorSubcategory = QEDSUBCAT(SC_INF_T3);
        editorPreview = EDITOR_PREVIEW(SC_Unit_AT_T3);
        linkedItems[] = {QCLASS(SC_Helmet_T3), QCLASS(SC_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet_T3), QCLASS(SC_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Elite_Backpack_Heavy_Predef_AT);
    };

    class CLASS(SC_Unit_AA): CLASS(SC_Unit_AT) {
        displayName = "Rifleman (AA)";

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "SC_MPML_M_AA"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "SC_MPML_M_AA"};

        backpack = QCLASS(SC_Backpack_Heavy_Predef_AA);
    };
    class CLASS(SC_Unit_AA_T2): CLASS(SC_Unit_AT_T2) {
        displayName = "Veteran Rifleman (AA)";

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK39_AA"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK39_AA"};

        backpack = QCLASS(SC_Veteran_Backpack_Heavy_Predef_AA);
    };
    class CLASS(SC_Unit_AA_T3): CLASS(SC_Unit_AT_T3) {
        displayName = "Elite Rifleman (AA)";

        magazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK39_AA"};
        respawnMagazines[] = {QCLASS(Mag_60Rnd_LW38_Green), "3AS_JLTS_MK39_AA"};

        backpack = QCLASS(SC_Elite_Backpack_Heavy_Predef_AA);
    };

    class CLASS(SC_Unit_Marksman): CLASS(SC_Unit_Rifleman) {
        displayName = "Marksman";
        editorPreview = EDITOR_PREVIEW(SC_Unit_Marksman);
        icon = "LSiconMarksman";

        weapons[] = {QCLASS(HI12), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(HI12), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_30Rnd_HI12)};
        respawnMagazines[] = {QCLASS(Mag_30Rnd_HI12)};

        linkedItems[] = {QCLASS(SC_Helmet), QCLASS(SC_Vest), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet), QCLASS(SC_Vest), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Backpack_Predef_Marksman);
    };
    class CLASS(SC_Unit_Marksman_T2): CLASS(SC_Unit_Marksman) {
        displayName = "Veteran Marksman";
        editorSubcategory = QEDSUBCAT(SC_INF_T2);
        editorPreview = EDITOR_PREVIEW(SC_Unit_Marksman_T2);
        linkedItems[] = {QCLASS(SC_Helmet_T2), QCLASS(SC_Vest_Medium), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet_T2), QCLASS(SC_Vest_Medium), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Veteran_Backpack_Predef_Marksman);
    };
    class CLASS(SC_Unit_Marksman_T3): CLASS(SC_Unit_Marksman_T2) {
        displayName = "Elite Marksman";
        editorSubcategory = QEDSUBCAT(SC_INF_T3);
        editorPreview = EDITOR_PREVIEW(SC_Unit_Marksman_T3);
        linkedItems[] = {QCLASS(SC_Helmet_T3), QCLASS(SC_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet_T3), QCLASS(SC_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Elite_Backpack_Predef_Marksman);
    };

    class CLASS(SC_Unit_SL): CLASS(SC_Unit_Rifleman) {
        displayName = "Squad Leader";
        editorPreview = EDITOR_PREVIEW(SC_Unit_SL);
        icon = "iconManLeader";

        linkedItems[] = {QCLASS(SC_Helmet_SL), QCLASS(SC_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet_SL), QCLASS(SC_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Backpack_RTO_Predef_SL);
    };
    class CLASS(SC_Unit_SL_T2): CLASS(SC_Unit_SL) {
        displayName = "Veteran Squad Leader";
        editorSubcategory = QEDSUBCAT(SC_INF_T2);
        editorPreview = EDITOR_PREVIEW(SC_Unit_SL_T2);
        linkedItems[] = {QCLASS(SC_Helmet_T2), QCLASS(SC_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet_T2), QCLASS(SC_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Veteran_Backpack_RTO_Predef_SL);
    };
    class CLASS(SC_Unit_SL_T3): CLASS(SC_Unit_SL_T2) {
        displayName = "Elite Squad Leader";
        editorSubcategory = QEDSUBCAT(SC_INF_T3);
        editorPreview = EDITOR_PREVIEW(SC_Unit_SL_T3);
        linkedItems[] = {QCLASS(SC_Helmet_T3), QCLASS(SC_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(SC_Helmet_T3), QCLASS(SC_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(SC_Elite_Backpack_RTO_Predef_SL);
    };

    class CLASS(backpack_base);
    class CLASS(SC_Backpack): CLASS(backpack_base) {
        SCOPE_PUBLIC;

        displayName = "[SC] Backpack";
        descriptionshort = "Gal'torran Military Backpack";

        model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
        hiddenSelections[] = {"camo1", "AP_Heavy", "biofoam"};
        hiddenSelectionsTextures[] = {"\OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
        picture = "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
    };
    class CLASS(SC_Backpack_Predef_Rifleman): CLASS(SC_Backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };
    class CLASS(SC_Backpack_Predef_Marksman): CLASS(SC_Backpack_Predef_Rifleman) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_30Rnd_HI12),15);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };

    class CLASS(SC_Veteran_Backpack): CLASS(SC_Backpack) {
        displayName = "[SC] Veteran Backpack";
        maximumLoad = 250;
        model = "\3AS\3AS_Characters\Commando\3AS_Katarn_BackPack.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Backpack_Standard_CO.paa"};
        picture = "\3AS\3AS_Characters\Commando\data\UI\Katarn_Backpack_Unmarked_UI_ca.paa";
    };
    class CLASS(SC_Veteran_Backpack_Predef_Rifleman): CLASS(SC_Veteran_Backpack) {
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
    class CLASS(SC_Veteran_Backpack_Predef_Marksman): CLASS(SC_Veteran_Backpack_Predef_Rifleman) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_30Rnd_HI12),15);
            MAG_XX(ls_mag_classC_thermalDet,4);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,4);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,1);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,1);
        };
    };

    class CLASS(SC_Elite_Backpack): CLASS(SC_Backpack) {
        displayName = "[SC] Elite Backpack";
        maximumLoad = 350;

        model = "\SentinelBackpack\SentinelBackpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_newequipment2\Sentinel\Night\Back\DefaultMaterial_CO.paa"};
        picture = "\SentinelBackpack\icon_ar_ca.paa";
    };
    class CLASS(SC_Elite_Backpack_Predef_Rifleman): CLASS(SC_Elite_Backpack) {
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
    class CLASS(SC_Elite_Backpack_Predef_Marksman): CLASS(SC_Elite_Backpack) {
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

    class CLASS(SC_Backpack_Heavy): CLASS(SC_Backpack) {
        displayName = "[SC] Heavy Backpack";
        maximumLoad = 350;

        model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
        hiddenSelections[] = {"camo1", "biofoam"};
    };
    class CLASS(SC_Backpack_Heavy_Predef_AT): CLASS(SC_Backpack_Heavy) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(SC_MPML_M_AT,3);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };
    class CLASS(SC_Backpack_Heavy_Predef_AA): CLASS(SC_Backpack_Heavy_Predef_AT) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(SC_MPML_M_AA,3);
            MAG_XX(ls_mag_classC_thermalDet,2);
            MAG_XX(SmokeShell,2);
            MAG_XX(ShieldGrenade_Mag,2);
        };
    };

    class CLASS(SC_Veteran_Backpack_Heavy): CLASS(SC_Veteran_Backpack) {
        displayName = "[SC] Veteran Heavy Backpack";
        maximumLoad = 450;
    };
    class CLASS(SC_Veteran_Backpack_Heavy_Predef_AT): CLASS(SC_Veteran_Backpack_Heavy) {
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
    class CLASS(SC_Veteran_Backpack_Heavy_Predef_AA): CLASS(SC_Veteran_Backpack_Heavy_Predef_AT) {
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

    class CLASS(SC_Elite_Backpack_Heavy): CLASS(SC_Elite_Backpack) {
        displayName = "[SC] Elite Heavy Backpack";
        maximumLoad = 550;
    };
    class CLASS(SC_Elite_Backpack_Heavy_Predef_AT): CLASS(SC_Elite_Backpack_Heavy) {
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
    class CLASS(SC_Elite_Backpack_Heavy_Predef_AA): CLASS(SC_Elite_Backpack_Heavy_Predef_AT) {
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

    class CLASS(SC_Backpack_RTO): CLASS(SC_Backpack) {
        displayName = "[SC] Radio Backpack";

        model = "\OPTRE_unsc_units\army\rucksack.p3d";
        hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Addons"};
        hiddenSelectionsTextures[] = {"\optre_unsc_units\army\data\soft_backpack_co.paa", "optre_unsc_units\army\data\commopack_sno_co.paa"};
        picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";

        maximumLoad = 250;
    };
    class CLASS(SC_Backpack_RTO_Predef_SL): CLASS(SC_Backpack_RTO) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(ls_mag_classC_thermalDet,4);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,3);
        };
    };
    class CLASS(SC_Veteran_Backpack_RTO_Predef_SL): CLASS(SC_Backpack_RTO_Predef_SL) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_LW38_Green),15);
            MAG_XX(ls_mag_classC_thermalDet,4);
            MAG_XX(SmokeShell,4);
            MAG_XX(ShieldGrenade_Mag,4);
            MAG_XX(JMSLLTE_thermalimploder_HandGrenade,1);
            MAG_XX(JMSLLTE_dioxis_HandGrenade,1);
        };
    };

    class CLASS(SC_Elite_Backpack_RTO): CLASS(SC_Backpack_RTO) {
        displayName = "[SC] Elite Radio Backpack";
        hiddenSelectionsTextures[] = {"\optre_unsc_units\army\data\soft_backpack_co.paa", "optre_unsc_units\army\data\commopack_blk_co.paa"};
        maximumLoad = 300;
    };
    class CLASS(SC_Elite_Backpack_RTO_Predef_SL): CLASS(SC_Elite_Backpack_RTO) {
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
};
