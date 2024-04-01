class CfgVehicles
{
    class CLASS(BLUFOR_Unit_Base);
    class CLASS(RDF_Unit_Base): CLASS(BLUFOR_Unit_Base)
    {
        SCOPE_HIDDEN;
        faction = QFACTION(RDF);
        uniformClass = QCLASS(RDF_Uniform);

        genericNames = QCLASS(RDF_Soldier);

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_black_co.paa"};

        items[] =
        {
            ITEM_15("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            ITEM_2("ACE_bloodIV_250"),
            "JLTS_ids_police",
            "JLTS_riot_shield_501_item"
        };
        respawnItems[] =
        {
            ITEM_15("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            ITEM_2("ACE_bloodIV_250"),
            "JLTS_ids_police",
            "JLTS_riot_shield_501_item"
        };
    };

    class CLASS(RDF_Unit_Rifleman): CLASS(RDF_Unit_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Rifleman";
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_Rifleman);

        weapons[] = {QCLASS(DC15A), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15A), QCLASS(DC17), "Throw", "Put"};

        magazines[] =
        {
            ITEM_16(QCLASS(Mag_60rnd_DC15A)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] =
        {
            ITEM_16(QCLASS(Mag_60rnd_DC15A)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };

        linkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Medium), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Medium), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(RDF_Backpack_Predef_Rifleman);
    };

    class CLASS(RDF_Unit_Rifleman_DC15C): CLASS(RDF_Unit_Rifleman)
    {
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_Rifleman_DC15C);

        weapons[] = {QCLASS(DC15C), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15C), QCLASS(DC17), "Throw", "Put"};

        magazines[] =
        {
            ITEM_16(QCLASS(Mag_40rnd_DC15C)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] =
        {
            ITEM_16(QCLASS(Mag_40rnd_DC15C)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
    };

    class CLASS(RDF_Unit_Grenadier): CLASS(RDF_Unit_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Grenadier";
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_Grenadier);

        weapons[] = {QCLASS(DC15A_UGL), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15A_UGL), QCLASS(DC17), "Throw", "Put"};

        magazines[] =
        {
            ITEM_16(QCLASS(Mag_60rnd_DC15A)),
            ITEM_6(QCLASS(Mag_20rnd_DC17)),
            "3Rnd_HE_Grenade_shell"
        };
        respawnMagazines[] =
        {
            ITEM_16(QCLASS(Mag_60rnd_DC15A)),
            ITEM_6(QCLASS(Mag_20rnd_DC17)),
            "3Rnd_HE_Grenade_shell"
        };

        linkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Medium), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Medium), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(RDF_Backpack_Predef_Grenadier);
    };

    class CLASS(RDF_Unit_Autorifleman): CLASS(RDF_Unit_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Autorifleman";
        icon = "iconManMG";
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_Autorifleman);

        weapons[] = {QCLASS(DC15L), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15L), QCLASS(DC17), "Throw", "Put"};

        magazines[] =
        {
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] =
        {
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };

        linkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Medium), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Medium), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(RDF_Backpack_Predef_Autorifleman);
    };

    class CLASS(RDF_Unit_Marksman): CLASS(RDF_Unit_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Marksman";
        icon = "JLTS_iconManSniper";
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_Autorifleman);

        weapons[] = {QCLASS(DC15X), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15X), QCLASS(DC17), "Throw", "Put"};

        magazines[] =
        {
            ITEM_16(QCLASS(Mag_15rnd_DC15X)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] =
        {
            ITEM_16(QCLASS(Mag_15rnd_DC15X)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };

        linkedItems[] = {QCLASS(RDF_Helmet_Marksman), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet_Marksman), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(RDF_Backpack_Predef_Rifleman);
    };

    class CLASS(RDF_Unit_Rifleman_AT): CLASS(RDF_Unit_Rifleman)
    {
        displayName = "Rifleman (AT)";
        icon = "iconManAT";
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_Rifleman_AT);

        weapons[] = {QCLASS(DC15S), QCLASS(DC17), QCLASS(RPS7), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15S), QCLASS(DC17), QCLASS(RPS7), "Throw", "Put"};

        magazines[] =
        {
            QCLASS(Mag_80rnd_DC15S),
            QCLASS(Mag_20rnd_DC17)
        };
        respawnMagazines[] =
        {
            QCLASS(Mag_80rnd_DC15S),
            QCLASS(Mag_20rnd_DC17)
        };
        backpack = QCLASS(RDF_Backpack_Predef_Rifleman_AT);
    };

    class CLASS(RDF_Unit_Rifleman_AT_Disposable): CLASS(RDF_Unit_Rifleman_AT)
    {
        displayName = "Rifleman (AT, Disposable)";
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_Rifleman_AT_Disposable);

        weapons[] = {QCLASS(DC15S), QCLASS(DC17), QCLASS(RPS6_Loaded), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15S), QCLASS(DC17), QCLASS(RPS6_Loaded), "Throw", "Put"};

        magazines[] =
        {
            QCLASS(Mag_80rnd_DC15S),
            QCLASS(Mag_20rnd_DC17)
        };
        respawnMagazines[] =
        {
            QCLASS(Mag_80rnd_DC15S),
            QCLASS(Mag_20rnd_DC17)
        };
        backpack = QCLASS(RDF_Backpack_Predef_Rifleman);
    };

    class CLASS(RDF_Unit_Medic): CLASS(RDF_Unit_Base)
    {
        SCOPE_PUBLIC;
        displayName = "Medic";
        icon = "iconManMedic";
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_Medic);

        weapons[] = {QCLASS(DC15S), QCLASS(DC17), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(DC15S), QCLASS(DC17), "Throw", "Put"};

        magazines[] =
        {
            ITEM_16(QCLASS(Mag_80rnd_DC15S)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };
        respawnMagazines[] =
        {
            ITEM_16(QCLASS(Mag_80rnd_DC15S)),
            ITEM_6(QCLASS(Mag_20rnd_DC17))
        };

        linkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(RDF_Backpack_Medic_Predef_Medic);
    };

    class CLASS(RDF_Unit_SWAT): CLASS(RDF_Unit_Base)
    {
        SCOPE_PUBLIC;
        displayName = "SWAT Rifleman";
        editorSubcategory = QEDSUBCAT(SpecialForces);
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_SWAT);

        genericNames = QCLASS(RDF_SWAT);

        weapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Throw", "Put"};
        respawnWeapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Throw", "Put"};

        magazines[] =
        {
            QCLASS(Mag_60rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };
        respawnMagazines[] =
        {
            QCLASS(Mag_60rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };

        linkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Swat), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Swat), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(RDF_Backpack_SWAT_Predef_Rifleman);
    };

    class CLASS(RDF_Unit_SWAT_Chaingun): CLASS(RDF_Unit_SWAT)
    {
        displayName = "SWAT Chaingunner";
        // editorPreview = EDITOR_PREVIEW(RDF_Unit_SWAT_Chaingun);

        weapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Aux501_Weaps_Z1000", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(WestarM5), QCLASS(DC15SA), "Aux501_Weaps_Z1000", "Throw", "Put"};

        magazines[] =
        {
            QCLASS(Mag_60rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };
        respawnMagazines[] =
        {
            QCLASS(Mag_60rnd_WestarM5),
            QCLASS(Mag_30Rnd_DC15SA)
        };

        linkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Swat), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest_Swat), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(RDF_Backpack_SWAT_Predef_Rifleman);
    };


    class CLASS(Other_Backpack_Base);
    class CLASS(RDF_Backpack): CLASS(Other_Backpack_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[RDF] Backpack";

        model = "\sc_equipment\data\watchdog\wd_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_guard_co.paa"};
        picture = "\sc_equipment\data\icons\icon_ar_ca.paa";

        maximumLoad = 600;
    };

    class CLASS(RDF_Backpack_Predef_Rifleman): CLASS(RDF_Backpack)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
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

    class CLASS(RDF_Backpack_Predef_Rifleman_DC15S): CLASS(RDF_Backpack_Predef_Rifleman)
    {
        class TransportMagazines: TransportMagazines
        {
            MAG_XX(CLASS(Mag_80rnd_DC15S),15);
            MAG_XX(CLASS(Mag_20rnd_DC17),5);
            MAG_XX(CLASS(Mag_StunLong),5);
            MAG_XX(CLASS(Mag_StunShort),5);
        };
    };

    class CLASS(RDF_Backpack_Predef_Grenadier): CLASS(RDF_Backpack_Predef_Rifleman)
    {
        class TransportMagazines: TransportMagazines
        {
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

    class CLASS(RDF_Backpack_Predef_Autorifleman): CLASS(RDF_Backpack_Predef_Rifleman)
    {
        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_240rnd_DC15L),15);
        };
    };

    class CLASS(RDF_Backpack_Predef_Rifleman_AT): CLASS(RDF_Backpack_Predef_Rifleman)
    {
        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_80rnd_DC15S),16);
            MAG_XX(CLASS(Mag_20rnd_DC17),6);
            MAG_XX(CLASS(Mag_StunLong),5);
            MAG_XX(CLASS(Mag_StunShort),5);
            MAG_XX(CLASS(Mag_1rnd_RPS7_HE),2);
            MAG_XX(CLASS(Mag_1rnd_RPS7_AT),2);
        };
    };

    class CLASS(RDF_Backpack_SWAT): CLASS(RDF_Backpack)
    {
        displayName = "[RDF] SWAT Backpack";

        model = "\sc_equipment\data\wasp\wp_backpack.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_black_co.paa"};
    };

    class CLASS(RDF_Backpack_SWAT_Predef_Rifleman): CLASS(RDF_Backpack_SWAT)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_60rnd_WestarM5),15);
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

    class CLASS(RDF_Backpack_SWAT_Predef_Chaingun): CLASS(RDF_Backpack_SWAT_Predef_Rifleman)
    {
        class TransportMagazines: TransportMagazines
        {
            MAG_XX(CLASS(Mag_60rnd_WestarM5),15);
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

    class CLASS(RDF_Backpack_Medic): CLASS(RDF_Backpack)
    {
        displayName = "[RDF] Medic Backpack";

        model = "\sc_equipment\data\wasp\wp_backpack.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_guard_co.paa"};
    };

    class CLASS(RDF_Backpack_Medic_Predef_Medic): CLASS(RDF_Backpack_Medic)
    {
        SCOPE_HIDDEN;

        class TransportMagazines
        {
            // MAG_XX(CLASS(Mag_80rnd_DC15S),15);
            // MAG_XX(CLASS(Mag_20rnd_DC17),5);
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
        class TransportItems
        {
            ITEM_XX(ACE_elasticBandage,80);
            ITEM_XX(ACE_bloodIV,10);
            ITEM_XX(ACE_bloodIV_500,10);
            ITEM_XX(ACE_bloodIV_250,10);
        };
    };
};