class CfgVehicles {
    class CLASS(BLUFOR_Unit_Base);
    class CLASS(rdfArmor_unit_base): CLASS(BLUFOR_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(RDF);
        uniformClass = QCLASS(rdfArmor_uniform);

        genericNames = QCLASS(RDF_Soldier);

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {
            "\sc_equipment\data\combat_uniform\cu_black_co.paa"
        };

        items[] = {
            ITEM_15("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            ITEM_2("ACE_bloodIV_250"),
            "JLTS_ids_police",
            "JLTS_riot_shield_501_item"
        };
        respawnItems[] = {
            ITEM_15("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            ITEM_2("ACE_bloodIV_250"),
            "JLTS_ids_police",
            "JLTS_riot_shield_501_item"
        };
    };

    class CLASS(rdfArmor_unit_rifleman): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "Rifleman";
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_rifleman);

        weapons[] = {QCLASS(DC15A), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15A), QCLASS(DC17), "Throw", "Put"};

        magazines[] = {
            ITEM_16(QCLASS(Mag_60rnd_DC15A)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] = {
            ITEM_16(QCLASS(Mag_60rnd_DC15A)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_medium), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_medium), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(rdfArmor_backpack_predef_rifleman);
    };

    class CLASS(rdfArmor_unit_rifleman_DC15C): CLASS(rdfArmor_unit_rifleman) {
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_rifleman_DC15C);

        weapons[] = {QCLASS(DC15C), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15C), QCLASS(DC17), "Throw", "Put"};

        magazines[] = {
            ITEM_16(QCLASS(Mag_40rnd_DC15C)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] = {
            ITEM_16(QCLASS(Mag_40rnd_DC15C)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
    };

    class CLASS(rdfArmor_unit_grenadier): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "Grenadier";
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_grenadier);

        weapons[] = {QCLASS(DC15A_UGL), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15A_UGL), QCLASS(DC17), "Throw", "Put"};

        magazines[] = {
            ITEM_16(QCLASS(Mag_60rnd_DC15A)),
            ITEM_6(QCLASS(Mag_20rnd_DC17)),
            "3Rnd_HE_Grenade_shell"
        };
        respawnMagazines[] = {
            ITEM_16(QCLASS(Mag_60rnd_DC15A)),
            ITEM_6(QCLASS(Mag_20rnd_DC17)),
            "3Rnd_HE_Grenade_shell"
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_medium), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_medium), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(rdfArmor_backpack_predef_grenadier);
    };

    class CLASS(rdfArmor_unit_autorifleman): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "Autorifleman";
        icon = "iconManMG";
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_autorifleman);

        weapons[] = {QCLASS(DC15L), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15L), QCLASS(DC17), "Throw", "Put"};

        magazines[] = {
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] = {
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_medium), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_medium), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(rdfArmor_backpack_predef_autorifleman);
    };

    class CLASS(rdfArmor_unit_marksman): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "Marksman";
        icon = "JLTS_iconManSniper";
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_marksman);

        weapons[] = {QCLASS(DC15X), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15X), QCLASS(DC17), "Throw", "Put"};

        magazines[] = {
            ITEM_16(QCLASS(Mag_15rnd_DC15X)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] = {
            ITEM_16(QCLASS(Mag_15rnd_DC15X)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet_marksman), QCLASS(rdfArmor_vest_light), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet_marksman), QCLASS(rdfArmor_vest_light), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(rdfArmor_backpack_predef_rifleman);
    };

    class CLASS(rdfArmor_unit_riflemanAT): CLASS(rdfArmor_unit_rifleman) {
        displayName = "Rifleman (AT)";
        icon = "iconManAT";
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_rifleman_AT);

        weapons[] = {QCLASS(DC15S), QCLASS(DC17), QCLASS(RPS7), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15S), QCLASS(DC17), QCLASS(RPS7), "Throw", "Put"};

        magazines[] = {
            QCLASS(Mag_80rnd_DC15S),
            QCLASS(Mag_20rnd_DC17)
        };
        respawnMagazines[] = {
            QCLASS(Mag_80rnd_DC15S),
            QCLASS(Mag_20rnd_DC17)
        };
        backpack = QCLASS(rdfArmor_backpack_predef_riflemanAT);
    };

    class CLASS(rdfArmor_unit_riflemanAT_disposable): CLASS(rdfArmor_unit_riflemanAT) {
        displayName = "Rifleman (AT, Disposable)";
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_rifleman_AT_Disposable);

        weapons[] = {QCLASS(DC15S), QCLASS(DC17), QCLASS(RPS6_Loaded), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15S), QCLASS(DC17), QCLASS(RPS6_Loaded), "Throw", "Put"};

        magazines[] = {
            QCLASS(Mag_80rnd_DC15S),
            QCLASS(Mag_20rnd_DC17)
        };
        respawnMagazines[] = {
            QCLASS(Mag_80rnd_DC15S),
            QCLASS(Mag_20rnd_DC17)
        };
        backpack = QCLASS(rdfArmor_backpack_predef_rifleman);
    };

    class CLASS(rdfArmor_unit_medic): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "Medic";
        icon = "iconManMedic";
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_medic);

        weapons[] = {QCLASS(DC15S), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15S), QCLASS(DC17), "Throw", "Put"};

        magazines[] = {
            ITEM_16(QCLASS(Mag_80rnd_DC15S)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] = {
            ITEM_16(QCLASS(Mag_80rnd_DC15S)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_light), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_light), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(rdfArmor_backpack_medic_predef_medic);
    };

    class CLASS(rdfArmor_unit_swat): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "SWAT Rifleman";
        editorSubcategory = QEDSUBCAT(SpecialForces);
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_swat);

        genericNames = QCLASS(RDF_SWAT);

        weapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Throw", "Put"};

        magazines[] = {
            QCLASS(Mag_99Rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };
        respawnMagazines[] = {
            QCLASS(Mag_99Rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_swat), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_swat), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(RDF_Backpack_SWAT_Predef_Rifleman);
    };

    class CLASS(rdfArmor_unit_swat_chaingun): CLASS(rdfArmor_unit_swat) {
        displayName = "SWAT Chaingunner";
        // editorPreview = EDITOR_PREVIEW(rdfArmor_unit_swat_chaingun);

        weapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Aux501_Weaps_Z1000", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Aux501_Weaps_Z1000", "Throw", "Put"};

        magazines[] = {
            QCLASS(Mag_99Rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };
        respawnMagazines[] = {
            QCLASS(Mag_99Rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_swat), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_swat), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(rdfArmor_backpack_swat_predef_chaingun);
    };


    class CLASS(backpack_base);
    class CLASS(rdfArmor_backpack): CLASS(backpack_base) {
        SCOPE_PUBLIC;

        displayName = "[RDF] Backpack";

        model = "\sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_guard_co.paa"};
        picture = "\sc_equipment\data\icons\icon_ar_ca.paa";

        maximumLoad = 600;
    };

    class CLASS(rdfArmor_backpack_predef_rifleman): CLASS(rdfArmor_backpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Grenade_EMP),5);
            MAG_XX(3AS_SmokeWhite,2);
            MAG_XX(3AS_SmokeBlue,2);
            MAG_XX(3AS_SmokeRed,2);
            MAG_XX(3AS_SmokeYellow,2);
            MAG_XX(3AS_SmokePurple,1);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(ls_mag_classC_thermalDet,3);
        };
    };

    class CLASS(rdfArmor_backpack_predef_rifleman_DC15S): CLASS(rdfArmor_backpack_predef_rifleman) {
        class TransportMagazines: TransportMagazines {
            MAG_XX(CLASS(Mag_80rnd_DC15S),15);
            MAG_XX(CLASS(Mag_20rnd_DC17),5);
            MAG_XX(CLASS(Mag_StunLong),5);
            MAG_XX(CLASS(Mag_StunShort),5);
        };
    };

    class CLASS(rdfArmor_backpack_predef_grenadier): CLASS(rdfArmor_backpack_predef_rifleman) {
        class TransportMagazines: TransportMagazines {
            MAG_XX(3Rnd_HE_Grenade_shell,10);
            MAG_XX(3Rnd_UGL_FlareWhite_F,2);
            MAG_XX(3Rnd_Smoke_Grenade_shell,2);
            MAG_XX(3Rnd_SmokeYellow_Grenade_shell,2);
            MAG_XX(3Rnd_SmokeRed_Grenade_shell,2);
            MAG_XX(3Rnd_SmokePurple_Grenade_shell,2);
            MAG_XX(3Rnd_SmokeOrange_Grenade_shell,2);
            MAG_XX(3Rnd_SmokeGreen_Grenade_shell,2);
            MAG_XX(CLASS(Mag_UGL_3rnd_FlareBlue),2);
        };
    };

    class CLASS(rdfArmor_backpack_predef_autorifleman): CLASS(rdfArmor_backpack_predef_rifleman) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_240rnd_DC15L),15);
        };
    };

    class CLASS(rdfArmor_backpack_predef_riflemanAT): CLASS(rdfArmor_backpack_predef_rifleman) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_80rnd_DC15S),16);
            MAG_XX(CLASS(Mag_20rnd_DC17),6);
            MAG_XX(CLASS(Mag_StunLong),5);
            MAG_XX(CLASS(Mag_StunShort),5);
            MAG_XX(CLASS(Mag_1rnd_RPS7_HE),2);
            MAG_XX(CLASS(Mag_1rnd_RPS7_AT),2);
        };
    };

    class CLASS(rdfArmor_backpack_swat): CLASS(rdfArmor_backpack) {
        displayName = "[RDF] SWAT Backpack";

        model = "\sc_equipment\data\wasp\wp_backpack.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_black_co.paa"};
    };

    class CLASS(rdfArmor_backpack_swat_predef_rifleman): CLASS(rdfArmor_backpack_swat) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_99Rnd_WestarM5),15);
            MAG_XX(CLASS(Mag_30Rnd_DC15SA),5);
            MAG_XX(CLASS(Mag_15Rnd_DC15SA),5);
            MAG_XX(CLASS(Mag_7Rnd_DC15SA),5);
            MAG_XX(CLASS(Grenade_EMP),5);
            MAG_XX(3AS_SmokeWhite,2);
            MAG_XX(3AS_SmokeBlue,2);
            MAG_XX(3AS_SmokeRed,2);
            MAG_XX(3AS_SmokeYellow,2);
            MAG_XX(3AS_SmokePurple,1);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(ShieldGrenadePersonal_Mag,1);
            MAG_XX(ls_mag_classA_thermalDet,3);
            MAG_XX(ls_mag_classB_thermalDet,3);
            MAG_XX(ls_mag_classC_thermalDet,3);
        };
    };

    class CLASS(rdfArmor_backpack_swat_predef_chaingun): CLASS(rdfArmor_backpack_swat_predef_rifleman) {
        class TransportMagazines: TransportMagazines {
            MAG_XX(CLASS(Mag_99Rnd_WestarM5),15);
            MAG_XX(CLASS(Mag_30Rnd_DC15SA),5);
            MAG_XX(CLASS(Mag_15Rnd_DC15SA),5);
            MAG_XX(CLASS(Mag_7Rnd_DC15SA),5);
            MAG_XX(Aux501_Weapons_Mags_z1000_drum3000,1);
            MAG_XX(CLASS(Grenade_EMP),5);
            MAG_XX(3AS_SmokeWhite,2);
            MAG_XX(3AS_SmokeBlue,2);
            MAG_XX(3AS_SmokeRed,2);
            MAG_XX(3AS_SmokeYellow,2);
            MAG_XX(3AS_SmokePurple,1);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(ShieldGrenadePersonal_Mag,1);
            MAG_XX(ls_mag_classA_thermalDet,3);
            MAG_XX(ls_mag_classB_thermalDet,3);
            MAG_XX(ls_mag_classC_thermalDet,3);
        };
    };

    class CLASS(rdfArmor_backpack_medic): CLASS(rdfArmor_backpack) {
        displayName = "[RDF] Medic Backpack";

        model = "\sc_equipment\data\wasp\wp_backpack.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_guard_co.paa"};
    };

    class CLASS(rdfArmor_backpack_medic_predef_medic): CLASS(rdfArmor_backpack_medic) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_StunLong),5);
            MAG_XX(CLASS(Mag_StunShort),5);
            MAG_XX(CLASS(Grenade_EMP),5);
            MAG_XX(CLASS(Grenade_Bacta),5);
            MAG_XX(3AS_SmokeWhite,2);
            MAG_XX(3AS_SmokeBlue,2);
            MAG_XX(3AS_SmokeRed,2);
            MAG_XX(3AS_SmokeYellow,2);
            MAG_XX(3AS_SmokePurple,1);
            MAG_XX(ShieldGrenade_Mag,2);
            MAG_XX(ShieldGrenadePersonal_Mag,1);
            MAG_XX(ls_mag_classC_thermalDet,3);
        };
        class TransportItems {
            ITEM_XX(ACE_elasticBandage,80);
            ITEM_XX(ACE_bloodIV,10);
            ITEM_XX(ACE_bloodIV_500,10);
            ITEM_XX(ACE_bloodIV_250,10);
        };
    };
};