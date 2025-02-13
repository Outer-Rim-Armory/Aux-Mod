class CfgVehicles {
    class CLASS(BLUFOR_Unit_Base);
    class CLASS(rdfArmor_unit_base): CLASS(BLUFOR_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(RDF);
        uniformClass = QCLASS(rdfArmor_uniform);

        genericNames = QCLASS(rdfSoldier);

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
        displayName = "Rifleman (15A)";
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_rifleman);

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
        backpack = QCLASS(rdfBackpack_predef_rifleman);
    };

    class CLASS(rdfArmor_unit_rifleman_DC15C): CLASS(rdfArmor_unit_rifleman) {
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_rifleman_DC15C);
        displayName = "Rifleman (15C)";

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
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_grenadier);

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
        backpack = QCLASS(rdfBackpack_predef_grenadier);
    };

    class CLASS(rdfArmor_unit_autorifleman): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "Autorifleman";
        icon = "iconManMG";
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_autorifleman);

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
        backpack = QCLASS(rdfBackpack_predef_autorifleman);
    };

    class CLASS(rdfArmor_unit_heavygunner): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "Heavy Gunner";
        icon = "iconManMG";
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_autorifleman);

        weapons[] = {QCLASS(Z6), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(Z6), QCLASS(DC17), "Throw", "Put"};

        magazines[] = {
            ITEM_6(QCLASS(Mag_400rnd_Z6))
        };
        respawnMagazines[] = {
            ITEM_6(QCLASS(Mag_400rnd_Z6))
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_medium), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_medium), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(rdfBackpack_predef_heavygunner);
    };

    class CLASS(rdfArmor_unit_marksman): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "Marksman";
        icon = "JLTS_iconManSniper";
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_marksman);

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
        backpack = QCLASS(rdfBackpack_predef_rifleman);
    };

    class CLASS(rdfArmor_unit_riflemanAT): CLASS(rdfArmor_unit_rifleman) {
        displayName = "Rifleman (AT)";
        icon = "iconManAT";
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_riflemanAT);

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
        backpack = QCLASS(rdfBackpack_predef_riflemanAT);
    };

    class CLASS(rdfArmor_unit_riflemanAT_disposable): CLASS(rdfArmor_unit_riflemanAT) {
        displayName = "Rifleman (AT, Disposable)";
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_riflemanAT_disposable);

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
        backpack = QCLASS(rdfBackpack_predef_rifleman);
    };

    class CLASS(rdfArmor_unit_medic): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "Medic";
        icon = "iconManMedic";
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_medic);

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
        backpack = QCLASS(rdfBackpack_medic_predef_medic);
    };

    class CLASS(rdfArmor_unit_swat): CLASS(rdfArmor_unit_base) {
        SCOPE_PUBLIC;
        displayName = "SWAT Rifleman";
        editorSubcategory = QEDSUBCAT(SpecialForces);
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_swat);

        genericNames = QCLASS(rdfSwat);

        weapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Throw", "Put"};

        magazines[] = {
            QCLASS(Mag_100Rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };
        respawnMagazines[] = {
            QCLASS(Mag_100Rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_swat), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_swat), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(rdfBackpack_swat_predef_rifleman);
    };

    class CLASS(rdfArmor_unit_swat_chaingun): CLASS(rdfArmor_unit_swat) {
        displayName = "SWAT Chaingunner";
        editorPreview = EDITOR_PREVIEW(rdfArmor_unit_swat_chaingun);

        weapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Aux501_Weaps_Z1000", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Aux501_Weaps_Z1000", "Throw", "Put"};

        magazines[] = {
            QCLASS(Mag_100Rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };
        respawnMagazines[] = {
            QCLASS(Mag_100Rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };

        linkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_swat), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(rdfArmor_helmet), QCLASS(rdfArmor_vest_swat), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(rdfBackpack_swat_predef_chaingun);
    };

    #include "legacy_units.hpp"


    class CLASS(backpack_base);
    class CLASS(rdfBackpack): CLASS(backpack_base) {
        SCOPE_PUBLIC;

        displayName = "[RDF] Backpack";

        model = "\sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_guard_co.paa"};
        picture = "\sc_equipment\data\icons\icon_ar_ca.paa";

        maximumLoad = 600;
    };

    class CLASS(rdfBackpack_predef_rifleman_15A): CLASS(rdfBackpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_DC15A),5);
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

    class CLASS(rdfBackpack_predef_rifleman_15C): CLASS(rdfBackpack) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_70Rnd_DC15C),5);
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

    class CLASS(rdfBackpack_predef_grenadier): CLASS(rdfBackpack_predef_rifleman_15A) {
        class TransportMagazines: TransportMagazines {
            MAG_XX(CLASS(Mag_60Rnd_DC15A),5);
            MAG_XX(CLASS(Grenade_EMP),5);
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

    class CLASS(rdfBackpack_predef_autorifleman): CLASS(rdfBackpack_predef_rifleman_15A) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_240rnd_DC15L),15);
        };
    };

    class CLASS(rdfBackpack_predef_heavygunner): CLASS(rdfBackpack_predef_rifleman_15A) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_400rnd_Z6),15);
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
    };

    class CLASS(rdfBackpack_predef_riflemanAT): CLASS(rdfBackpack_predef_rifleman_15A) {
        class TransportMagazines {
            MAG_XX(CLASS(Mag_80rnd_DC15S),16);
            MAG_XX(CLASS(Mag_20rnd_DC17),6);
            MAG_XX(CLASS(Mag_StunLong),5);
            MAG_XX(CLASS(Mag_StunShort),5);
            MAG_XX(CLASS(Mag_1rnd_RPS7_HE),2);
            MAG_XX(CLASS(Mag_1rnd_RPS7_AT),2);
        };
    };

    class CLASS(rdfBackpack_medic): CLASS(rdfBackpack) {
        displayName = "[RDF] Medic Backpack";

        model = "\sc_equipment\data\wasp\wp_backpack.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_guard_co.paa"};
    };

    class CLASS(rdfBackpack_medic_predef_medic): CLASS(rdfBackpack_medic) {
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

    class CLASS(rdfBackpack_swat): CLASS(rdfBackpack) {
        displayName = "[RDF] SWAT Backpack";

        model = "\sc_equipment\data\wasp\wp_backpack.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_black_co.paa"};
    };

    class CLASS(rdfBackpack_swat_predef_rifleman): CLASS(rdfBackpack_swat) {
        SCOPE_HIDDEN;

        class TransportMagazines {
            MAG_XX(CLASS(Mag_100Rnd_WestarM5),15);
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

    class CLASS(rdfBackpack_swat_predef_chaingun): CLASS(rdfBackpack_swat_predef_rifleman) {
        class TransportMagazines: TransportMagazines {
            MAG_XX(CLASS(Mag_100Rnd_WestarM5),15);
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

    class CLASS(Hornet_Unarmed);
    class CLASS(Hornet_RDF): CLASS(Hornet_Unarmed) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        // Remove DC-15S and magazines
        class TransportWeapons {};
        class TransportMagazines {};
    };

    class CLASS(Hornet_MG);
    class CLASS(Hornet_MG_RDF): CLASS(Hornet_MG) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        class TransportWeapons {};
        class TransportMagazines {};
    };

    class CLASS(Hornet_AT);
    class CLASS(Hornet_AT_RDF): CLASS(Hornet_AT) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        class TransportWeapons {};
        class TransportMagazines {};
    };

    class CLASS(Hermitaur_Class_I);
    class CLASS(Hermitaur_Class_I_RDF): CLASS(Hermitaur_Class_I) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        class TransportWeapons {};
        class TransportMagazines {};
    };

    class CLASS(Hermitaur_Class_M);
    class CLASS(Hermitaur_Class_M_RDF): CLASS(Hermitaur_Class_M) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        class TransportWeapons {};
        class TransportMagazines {};
    };

    class CLASS(Hermitaur_Class_E);
    class CLASS(Hermitaur_Class_E_RDF): CLASS(Hermitaur_Class_E) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        class TransportWeapons {};
        class TransportMagazines {};
    };


    class CLASS(TX130_M1);
    class CLASS(TX130_RDF): CLASS(TX130_M1) {
        SCOPE_PUBLIC;
        author = AUTHOR;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        class TransportWeapons {};
        class TransportMagazines {};
    };

    class CLASS(TX130_M1_Recon);
    class CLASS(TX130_RDF_Recon): CLASS(TX130_M1_Recon) {
        SCOPE_PUBLIC;
        author = AUTHOR;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        class TransportWeapons {};
        class TransportMagazines {};
    };

    class CLASS(TX130_M1_GL);
    class CLASS(TX130_RDF_GL): CLASS(TX130_M1_GL) {
        SCOPE_PUBLIC;
        author = AUTHOR;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        class TransportWeapons {};
        class TransportMagazines {};
    };

    class CLASS(TX130_Super);
    class CLASS(TX130_RDF_Super): CLASS(TX130_Super) {
        SCOPE_PUBLIC;
        author = AUTHOR;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};

        class TransportWeapons {};
        class TransportMagazines {};
    };

    class CLASS(LAATi_MK1);
    class CLASS(LAATi_MK1_RDF): CLASS(LAATi_MK1) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATi_MK1);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};
    };

    class CLASS(LAATi_MK1_Lamps);
    class CLASS(LAATi_MK1_Lamps_RDF): CLASS(LAATi_MK1_Lamps) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATi_MK1_Lamps);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};
    };

    class CLASS(LAATi_MK2);
    class CLASS(LAATi_MK2_RDF): CLASS(LAATi_MK2) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATi_MK2);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};
    };

    class CLASS(LAATi_MK2_Lamps);
    class CLASS(LAATi_MK2_Lamps_RDF): CLASS(LAATi_MK2_Lamps) {
        SCOPE_PUBLIC;

        side = BLUFOR;
        faction = QFACTION(RDF);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATi_MK2_Lamps);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};
    };

    class CLASS(V19);
    class CLASS(V19_RDF): CLASS(V19) {
        SCOPE_PUBLIC;
        author = AUTHOR;

        side = BLUFOR;
        faction = QFACTION(RDF);

        crew = QCLASS(rdfArmor_unit_rifleman);
        typicalCargo[] = {QCLASS(rdfArmor_unit_rifleman)};
    };
};