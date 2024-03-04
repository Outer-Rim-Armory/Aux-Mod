class CfgVehicles
{
    class CLASS(BLUFOR_Unit_Base);
    class CLASS(RDF_Unit_Base): CLASS(BLUFOR_Unit_Base)
    {
        SCOPE_HIDDEN;
        faction = FACTION(RDF);
        uniformClass = QCLASS(RDF_Uniform);

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

        linkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
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

        linkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
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

        linkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(RDF_Helmet), QCLASS(RDF_Vest), RDF_LINKED_ITEMS_RADIO};
        backpack = QCLASS(RDF_Backpack_Predef_Autorifleman);
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
};