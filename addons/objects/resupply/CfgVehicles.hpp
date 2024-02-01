class CfgVehicles
{
    class ReammoBox_F;
    class 3AS_Supply_Large_Prop: ReammoBox_F
    {
        class EventHandlers;
    };
    class CLASS(Resupply_Base): 3AS_Supply_Large_Prop
    {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "Crate";

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QCLASS(EdSubcat_Resupply);
        editorPreview = EDITOR_PREVIEW(Resupply_Base);

        ace_cargo_size = 1;
        ace_cargo_noRename = TRUE;

        ace_dragging_canDrag = TRUE;
        ace_dragging_dragDirection = 90;
        ace_dragging_dragPosition[] = {0, 1.35, 0};

        ace_dragging_canCarry = TRUE;

        ace_dragging_ignoreWeight = TRUE;
        ace_dragging_ignoreWeightCarry = TRUE;
    };

    class CLASS(Resupply_SquadAmmo): CLASS(Resupply_Base)
    {
        displayName = "Ammo Crate (Squad)";

        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};
        editorPreview = EDITOR_PREVIEW(Resupply_SquadAmmo);

        class TransportMagazines
        {
            // Primary Ammo
            MAG_XX(CLASS(Mag_60Rnd_DC15A),10);
            MAG_XX(CLASS(Mag_80Rnd_DC15S),10);
            MAG_XX(CLASS(Mag_40Rnd_DC15C),10);
            MAG_XX(CLASS(Mag_15Rnd_DC15X),10);
            MAG_XX(CLASS(Mag_240Rnd_DC15L),10);
            MAG_XX(CLASS(Mag_30Rnd_DP23),10);
            MAG_XX(CLASS(Mag_60Rnd_WestarM5),10);
            MAG_XX(CLASS(Mag_25Rnd_Valken38x),10);

            // UGL Ammo
            MAG_XX(3Rnd_UGL_FlareWhite_F,5);
            MAG_XX(3Rnd_UGL_FlareRed_F,5);
            MAG_XX(CLASS(Mag_UGL_3Rnd_FlareBlue),5);
            MAG_XX(3Rnd_UGL_FlareCIR_F,5);
            MAG_XX(3Rnd_Smoke_Grenade_shell,5);
            MAG_XX(3Rnd_SmokeRed_Grenade_shell,5);
            MAG_XX(3Rnd_SmokeGreen_Grenade_shell,5);
            MAG_XX(3Rnd_SmokeYellow_Grenade_shell,5);
            MAG_XX(3Rnd_SmokePurple_Grenade_shell,5);
            MAG_XX(3Rnd_SmokeBlue_Grenade_shell,5);
            MAG_XX(3Rnd_SmokeOrange_Grenade_shell,5);
            MAG_XX(3Rnd_HE_Grenade_shell,5);

            // Secondary Ammo
            MAG_XX(CLASS(Mag_20Rnd_DC17),10);

            // Launcher Ammo
            MAG_XX(3AS_JLTS_MK39_AA,2);
            MAG_XX(3AS_JLTS_MK44_HE,2);
            MAG_XX(CLASS(Mag_1Rnd_RPS7_AT),2);

            // Grenades
            MAG_XX(ls_mag_classC_thermalDet,8);
        };
    };
    class CLASS(Resupply_PlatoonAmmo): CLASS(Resupply_SquadAmmo)
    {
        displayName = "Ammo Crate (Platoon)";
        ace_cargo_size = 2;

        class TransportWeapons
        {
            WEAP_XX(CLASS(RPS6_Loaded),2);
        };

        class TransportMagazines
        {
            // Primary Ammo
            MAG_XX(CLASS(Mag_60Rnd_DC15A),160);
            MAG_XX(CLASS(Mag_80Rnd_DC15S),160);
            MAG_XX(CLASS(Mag_40Rnd_DC15C),160);
            MAG_XX(CLASS(Mag_15Rnd_DC15X),160);
            MAG_XX(CLASS(Mag_240Rnd_DC15L),160);
            MAG_XX(CLASS(Mag_30Rnd_DP23),160);
            MAG_XX(CLASS(Mag_60Rnd_WestarM5),160);
            MAG_XX(CLASS(Mag_25Rnd_Valken38x),160);

            // UGL Ammo
            MAG_XX(3Rnd_UGL_FlareWhite_F,15);
            MAG_XX(3Rnd_UGL_FlareRed_F,15);
            MAG_XX(BNA_KC_3Rnd_UGL_FlareBlue,15);
            MAG_XX(3Rnd_UGL_FlareCIR_F,15);
            MAG_XX(3Rnd_Smoke_Grenade_shell,15);
            MAG_XX(3Rnd_SmokeRed_Grenade_shell,15);
            MAG_XX(3Rnd_SmokeGreen_Grenade_shell,15);
            MAG_XX(3Rnd_SmokeYellow_Grenade_shell,15);
            MAG_XX(3Rnd_SmokePurple_Grenade_shell,15);
            MAG_XX(3Rnd_SmokeBlue_Grenade_shell,15);
            MAG_XX(3Rnd_SmokeOrange_Grenade_shell,15);
            MAG_XX(3Rnd_HE_Grenade_shell,15);

            // Secondary Ammo
            MAG_XX(CLASS(Mag_20Rnd_DC17),50);

            // Launcher Ammo
            MAG_XX(3AS_JLTS_MK39_AA,5);
            MAG_XX(3AS_JLTS_MK44_HE,5);
            MAG_XX(CLASS(Mag_1Rnd_RPS7_AT),10);

            // Grenades
            MAG_XX(ls_mag_classC_thermalDet,25);
        };
    };

    class CLASS(Resupply_SquadAmmo_Heavy): CLASS(Resupply_SquadAmmo)
    {
        displayName = "Heavy Ammo Crate (Squad)";
        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_10Rnd_Valken38x_AP),20);
            MAG_XX(CLASS(Mag_30Rnd_HI12),20);
            MAG_XX(CLASS(Mag_15Rnd_DP23_HP),20);
            MAG_XX(CLASS(Mag_300Rnd_Z6),5);
            MAG_XX(3AS_JLTS_MK39_AA,1);
            MAG_XX(3AS_JLTS_MK43_AT,1);
            MAG_XX(3AS_JLTS_MK44_HE,1);
        };
    };
    class CLASS(Resupply_PlatoonAmmo_Heavy): CLASS(Resupply_SquadAmmo_Heavy)
    {
        displayName = "Heavy Ammo Crate (Platoon)";
        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_10Rnd_Valken38x_AP),120);
            MAG_XX(CLASS(Mag_30Rnd_HI12),120);
            MAG_XX(CLASS(Mag_15Rnd_DP23_HP),120);
            MAG_XX(CLASS(Mag_300Rnd_Z6),10);
            MAG_XX(3AS_JLTS_MK39_AA,3);
            MAG_XX(3AS_JLTS_MK43_AT,3);
            MAG_XX(3AS_JLTS_MK44_HE,3);
        };
    };

    class CLASS(Resupply_SquadMedical): CLASS(Resupply_Base)
    {
        displayName = "Medical Crate (Squad)";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa"};
        editorPreview = EDITOR_PREVIEW(Resupply_SquadMedical);

        class TransportItems
        {
            // Bandages
            ITEM_XX(ACE_elasticBandage,60);
            ITEM_XX(ACE_packingBandage,40);
            ITEM_XX(ACE_quickclot,30);

            // Fluid
            ITEM_XX(ACE_salineIV,5);
            ITEM_XX(ACE_salineIV_500,5);
            ITEM_XX(ACE_salineIV_250,10);

            // Drugs
            ITEM_XX(ACE_morphine,5);
            ITEM_XX(ACE_epinephrine,5);
            ITEM_XX(EGVAR(medical,Painkiller),10);

            // Misc
            ITEM_XX(ACE_tourniquet,12);
            ITEM_XX(ACE_Splint,4);
            ITEM_XX(ACE_Banana,1);
        };

        class TransportMagazines
        {
            MAG_XX(3AS_SmokePurple,2);
            MAG_XX(SquadShieldMagazine,2);
            MAG_XX(CLASS(Grenade_Bacta),5);
            MAG_XX(CLASS(Mag_1Rnd_GR20),2);
        };
    };
    class CLASS(Resupply_PlatoonMedical): CLASS(Resupply_SquadMedical)
    {
        displayName = "Medical Crate (Platoon)";
        ace_cargo_size = 2;

        class TransportItems
        {
            // Bandages
            ITEM_XX(ACE_elasticBandage,150);
            ITEM_XX(ACE_packingBandage,60);
            ITEM_XX(ACE_quickclot,40);

            // Fluid
            ITEM_XX(ACE_salineIV,20);
            ITEM_XX(ACE_salineIV_500,20);
            ITEM_XX(ACE_salineIV_250,30);

            // Drugs
            ITEM_XX(ACE_morphine,13);
            ITEM_XX(ACE_epinephrine,13);
            ITEM_XX(EGVAR(medical,Painkiller),20);

            // Misc
            ITEM_XX(ACE_tourniquet,12);
            ITEM_XX(ACE_Splint,8);
        };

        class TransportMagazines
        {
            MAG_XX(3AS_SmokePurple,5);
            MAG_XX(SquadShieldMagazine,6);
            MAG_XX(CLASS(Grenade_Bacta),10);
            MAG_XX(CLASS(Mag_1Rnd_GR20),4);
        };
    };

    class CLASS(Resupply_DisposableLaunchers): CLASS(Resupply_Base)
    {
        displayName = "RPS-6 Launcher Crate";

        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};
        // editorPreview = EDITOR_PREVIEW(Resupply_DisposableLaunchers);

        class TransportWeapons
        {
            WEAP_XX(CLASS(RPS6_Loaded),10);
        };
    };
};