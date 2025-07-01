class CfgVehicles {
    class ReammoBox_F;
    class 3AS_Supply_Large_Prop: ReammoBox_F {
    };
    class CLASS(Resupply_Base): 3AS_Supply_Large_Prop {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "00: Crate";

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Resupply);
        editorPreview = EDITOR_PREVIEW(Resupply_Base);

        ace_cargo_canLoad = TRUE;
        ace_cargo_noRename = TRUE;
        ace_cargo_size = 1;

        ace_dragging_canDrag = TRUE;
        ace_dragging_dragDirection = 90;
        ace_dragging_dragPosition[] = {0, 1.35, 0};

        ace_dragging_canCarry = TRUE;

        ace_dragging_ignoreWeight = TRUE;
        ace_dragging_ignoreWeightCarry = TRUE;
    };

    class CLASS(Resupply_SquadAmmo): CLASS(Resupply_Base) {
        displayName = "01: Ammo Crate (Squad)";

        model = "3as\3as_props\crates\models\supply_small.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\supply_small_ammo\supply_small_ammo_co.paa"};
        editorPreview = EDITOR_PREVIEW(Resupply_SquadAmmo);

        class TransportMagazines {
            // Primary Ammo
            MAG_XX(CLASS(Mag_60Rnd_DC15A),10);
            MAG_XX(CLASS(Mag_80Rnd_DC15S),10);
            MAG_XX(CLASS(Mag_70Rnd_DC15C),10);
            MAG_XX(CLASS(Mag_15Rnd_DC15X),10);
            MAG_XX(CLASS(Mag_240Rnd_DC15L),10);
            MAG_XX(CLASS(Mag_30Rnd_DP23),10);
            MAG_XX(CLASS(Mag_100Rnd_WestarM5),10);
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



    class CLASS(Resupply_PlatoonAmmo): CLASS(Resupply_SquadAmmo) {
        displayName = "02: Ammo Crate (Platoon)";
        ace_cargo_size = 2;

        class TransportWeapons {
            WEAP_XX(CLASS(RPS6_Loaded),2);
        };

        class TransportMagazines {
            // Primary Ammo
            MAG_XX(CLASS(Mag_60Rnd_DC15A),160);
            MAG_XX(CLASS(Mag_80Rnd_DC15S),160);
            MAG_XX(CLASS(Mag_70Rnd_DC15C),160);
            MAG_XX(CLASS(Mag_15Rnd_DC15X),160);
            MAG_XX(CLASS(Mag_240Rnd_DC15L),160);
            MAG_XX(CLASS(Mag_30Rnd_DP23),160);
            MAG_XX(CLASS(Mag_100Rnd_WestarM5),160);
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

    class CLASS(Resupply_PlatoonAmmo_Commando): CLASS(Resupply_SquadAmmo) {
        displayName = "03: Carnage Ammo Crate";

        class TransportMagazines {
            // Primary Ammo
            MAG_XX(LFP_DC17M_Mag,100);
            MAG_XX(LFP_DC17M_Mag_Sniper,100);
            MAG_XX(LFP_DC17M_GL,50);
            MAG_XX(CLASS(Mag_400Rnd_Z6),100);
            MAG_XX(CLASS(Mag_20Rnd_DP25_HP),100);
            MAG_XX(CLASS(Mag_12Rnd_DP25_SLUG),100);
            MAG_XX(CLASS(Mag_8Rnd_DP25_HE),10);
            MAG_XX(JA_104th_Weapons_Mags_10mw40,100);
            MAG_XX(CLASS(Mag_10Rnd_DC20Y),100);
            MAG_XX(CLASS(Mag_3Rnd_DC20Y_AP),100);

            // Secondary Ammo
            MAG_XX(CLASS(Mag_20Rnd_DC17),50);

            // Grenades
            MAG_XX(ls_mag_classC_thermalDet,64);
            MAG_XX(ls_mag_classB_thermalDet,20);
            MAG_XX(Aux501_Weapons_Mags_flashnade,20);
            MAG_XX(CLASS(Grenade_EMP),20);
            MAG_XX(C12_Remote_Mag,8);

            // Weapons
            WEAP_XX(CLASS(RPS6_Loaded),8);
        };
    };



    class CLASS(Resupply_SquadAmmo_Heavy): CLASS(Resupply_SquadAmmo) {
        displayName = "04: Heavy Ammo Crate (Squad)";
        model = "3as\3as_props\crates\models\supply_small.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\supply_small_ammo\supply_small_ammo_co.paa"};
        class TransportMagazines {
            MAG_XX(CLASS(Mag_10Rnd_Valken38x_AP),20);
            MAG_XX(CLASS(Mag_30Rnd_HI12),20);
            MAG_XX(CLASS(Mag_30Rnd_DP23),20);
            MAG_XX(CLASS(Mag_400Rnd_Z6),5);
            MAG_XX(3AS_JLTS_MK39_AA,1);
            MAG_XX(3AS_JLTS_MK43_AT,1);
            MAG_XX(3AS_JLTS_MK44_HE,1);
            MAG_XX(ls_mag_classC_thermalDet,5);
            MAG_XX(CLASS(Mag_UGL_10Rnd_HE),5);
            MAG_XX(CLASS(MAG_15Rnd_DX50C),20);
        };
    };
    class CLASS(Resupply_PlatoonAmmo_Heavy): CLASS(Resupply_SquadAmmo_Heavy) {
        displayName = "05: Heavy Ammo Crate (Platoon)";
        class TransportMagazines {
            MAG_XX(CLASS(Mag_10Rnd_Valken38x_AP),120);
            MAG_XX(CLASS(Mag_30Rnd_HI12),120);
            MAG_XX(CLASS(Mag_30Rnd_DP23),120);
            MAG_XX(CLASS(Mag_400Rnd_Z6),100);
            MAG_XX(3AS_JLTS_MK39_AA,3);
            MAG_XX(3AS_JLTS_MK43_AT,3);
            MAG_XX(3AS_JLTS_MK44_HE,3);
            MAG_XX(ls_mag_classC_thermalDet,5);
            MAG_XX(CLASS(Mag_UGL_10Rnd_HE),50);
            MAG_XX(CLASS(MAG_15Rnd_DX50C),100);
        };
    };

    class CLASS(Resupply_SquadMedical): CLASS(Resupply_Base) {
        displayName = "06: Medical Crate (Squad)";
        model = "3as\3as_props\crates\models\supply_small.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\supply_small_medical\supply_small_medical_co.paa"};
        editorPreview = EDITOR_PREVIEW(Resupply_SquadMedical);

        class TransportItems {
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

        class TransportMagazines {
            MAG_XX(3AS_SmokePurple,2);
            MAG_XX(SquadShieldMagazine,2);
            MAG_XX(CLASS(Grenade_Bacta),5);
            MAG_XX(CLASS(Mag_1Rnd_GR20),2);
        };
    };
    class CLASS(Resupply_PlatoonMedical): CLASS(Resupply_SquadMedical) {
        displayName = "07: Medical Crate (Platoon)";
        ace_cargo_size = 2;

        class TransportItems {
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

        class TransportMagazines {
            MAG_XX(3AS_SmokePurple,5);
            MAG_XX(SquadShieldMagazine,6);
            MAG_XX(CLASS(Grenade_Bacta),10);
            MAG_XX(CLASS(Mag_1Rnd_GR20),4);
        };
    };

    class CLASS(Resupply_DisposableLaunchers): CLASS(Resupply_Base) {
        displayName = "08: RPS-6 Launcher Crate";

        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};

        class TransportWeapons {
            WEAP_XX(CLASS(RPS6_Loaded),10);
        };
    };

    class CLASS(Resupply_Rockets): CLASS(Resupply_Base) {
        displayName = "09: Rocket Ammo";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red_co.paa"};
        class TransportMagazines {
            MAG_XX(CLASS(Mag_1Rnd_RPS7_AT),20);
            MAG_XX(CLASS(Mag_1Rnd_RPS8_AT),40);
            MAG_XX(CLASS(Mag_1Rnd_RPS9_AT),5);
            MAG_XX(3AS_JLTS_MK43_AT,5);
            MAG_XX(3AS_JLTS_MK44_HE,5);
            MAG_XX(3AS_JLTS_MK39_AA,5);
        };
    };

    class CLASS(Resupply_Raptor_PlatoonAmmo): CLASS(Resupply_SquadAmmo) {
        displayName = "10: Raptor Ammo Crate (Platoon)";
        ace_cargo_size = 2;
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};

        class TransportWeapons {
            WEAP_XX(CLASS(RPS6_Loaded),5);
        };

        class TransportMagazines {
            // Primary Ammo
            MAG_XX(CLASS(Mag_15Rnd_DC15X),100);
            MAG_XX(CLASS(Mag_240Rnd_Valken38l),100);
            MAG_XX(CLASS(Mag_25Rnd_Valken38x),100);
            MAG_XX(CLASS(Mag_50Rnd_DC15XS),100);
            MAG_XX(CLASS(Mag_240Rnd_DC15L),160);
            MAG_XX(CLASS(Mag_10Rnd_DC15XM),100);
            MAG_XX(CLASS(Mag_15Rnd_773),100);
            MAG_XX(CLASS(Mag_10Rnd_Valken38x_AP),50);

            // UGL Ammo
            MAG_XX(ACE_HuntIR_M203,20);
        };
    };

    class CLASS(Resupply_Raptor_Drone): CLASS(Resupply_Base) {
        displayName = "11: Raptor Drone Crate";
        class TransportItems {
            ITEM_XX(SCH_B_UAV_Packed,20);
            ITEM_XX(B_UavTerminal,10);
            ITEM_XX(ACE_UAVBattery,20);
        };
    };

    class CLASS(Resupply_Misc): CLASS(Resupply_Base) {
        displayName = "12: Misc Crate";
        class TransportItems {
            ITEM_XX(SWLB_comlink,50);
            ITEM_XX(ACE_CableTie,50);
            ITEM_XX(ACE_bodyBag,50);
            ITEM_XX(CLASS(BNA_KC_cloneNvg_chip),25);
            ITEM_XX(CLASS(BNA_KC_cloneNvg_phase2_visor),25);
            ITEM_XX(CLASS(BNA_KC_cloneNvg_phase2_rangefinder),25);
            ITEM_XX(ACE_EntrenchingTool,50);
            ITEM_XX(ACE_MapTools,50);
            ITEM_XX(ToolKit,5);
            ITEM_XX(ACE_Flashlight_XL50,50);
            ITEM_XX(JLTS_ids_gar_army,50);
        };
        class TransportMagazines {
            MAG_XX(Laserbatteries,50);
        };
    };

    class CLASS(Resupply_Sapper): CLASS(Resupply_Base) {
        displayName = "13: Sapper Crate";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};
        class TransportItems {
            ITEM_XX(ACE_DefusalKit,5);
            ITEM_XX(MineDetector,5);
            ITEM_XX(ACE_M26_Clacker,5);
            ITEM_XX(ACE_wirecutter,5);
        };
        class TransportMagazines {
            MAG_XX(M168_Remote_Mag,20);
            MAG_XX(ls_mag_detPack_remoteCharge,20);
            MAG_XX(APERSMineDispenser_Mag,5);
            MAG_XX(C7_Remote_Mag,15);
            MAG_XX(UNSCMine_Range_Mag,10);
        };
    };

    class CLASS(Resupply_Spartan): CLASS(Resupply_Base) {
        displayName = "14: Spartan Crate";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};
        class TransportMagazines {
            MAG_XX(LFP_AK_Mag,100);
            MAG_XX(CLASS(Mag_100Rnd_WestarM5),100);
            MAG_XX(LFP_DC19_Mag,100);
            MAG_XX(CLASS(Mag_60Rnd_DC17_dualHP),100);
            MAG_XX(CLASS(Mag_400Rnd_Z6),100);
            MAG_XX(CLASS(Mag_20Rnd_DP25_HP),100);
            MAG_XX(CLASS(Mag_12Rnd_DP25_SLUG),100);
            MAG_XX(CLASS(Mag_8Rnd_DP25_HE),10);
            MAG_XX(CLASS(Mag_800rnd_Z7),5);
            MAG_XX(CLASS(Mag_1200rnd_Z8),1);
            MAG_XX(ls_mag_classB_thermalDet,20);
            MAG_XX(Aux501_Weapons_Mags_flashnade,20);
            MAG_XX(CLASS(Mag_10Rnd_DC20Y),100);
            MAG_XX(CLASS(Mag_3Rnd_DC20Y_AP),50);
        };
        class TransportWeapons {
            WEAP_XX(CLASS(RPS6_Loaded),5);
        };
    };

    class CLASS(Mortar_Crate): CLASS(Resupply_Base) {
        displayName = "15: Mortar Crate";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red_co.paa"};
        class TransportWeapons {
            WEAP_XX(CLASS(Mortar_M190_Carry),20);
        };
        class TransportMagazines {
            MAG_XX(CLASS(Mag_6Rnd_Mortar_82mm_HE_CSW),100);
            MAG_XX(CLASS(Mag_6Rnd_Mortar_SmokeWhite_CSW),100);
            MAG_XX(CLASS(Mag_6Rnd_Mortar_SmokeBlue_CSW),100);
            MAG_XX(CLASS(Mag_6Rnd_Mortar_SmokeRed_CSW),100);
        };
    };
};
