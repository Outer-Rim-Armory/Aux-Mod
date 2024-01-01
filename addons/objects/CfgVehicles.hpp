class CfgVehicles
{
    class ls_flag_base;
    class CLASS(Flag_KC_Pole): ls_flag_base
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubCat_Flags);

        displayName = "KC Flag (Pole)";

        class EventHandlers
        {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\flags\KC_co.paa));
        };
    };

    class ls_staticFlag_base;
    class CLASS(Flag_KC_Vertical): ls_staticFlag_base
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubCat_Flags);

        displayName = "KC Flag (Vertical)";

        model = "\LS_statics_props\flags\ls_vertical_flag";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Vertical_co.paa)};
    };
    class CLASS(Flag_KC_Horizontal): CLASS(Flag_KC_Vertical)
    {
        displayName = "KC Flag (Horizontal)";

        model = "\LS_statics_props\flags\ls_horizontal_flag";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_co.paa)};
    };

    class CLASS(Flag_KC_Damaged_Pole): CLASS(Flag_KC_Pole)
    {
        displayName = "KC Damaged Flag (Pole)";
        class EventHandlers
        {
            init = QUOTE((_this select 0) setFlagTexture QQPATHTOF(data\flags\KC_Damaged_co.paa));
        };
    };
    class CLASS(Flag_KC_Damaged_Vertical): CLASS(Flag_KC_Vertical)
    {
        displayName = "KC Damaged Flag (Vertical)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_Vertical_co.paa)};
    };
    class CLASS(Flag_KC_Damaged_Horizontal): CLASS(Flag_KC_Horizontal)
    {
        displayName = "KC Damaged Flag (Horizontal, Mirrored)";

        model = "\LS_statics_props\flags\ls_horizontal_flag";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_co.paa)};
    };
    class CLASS(Flag_KC_Damaged_Horizontal_Mirrored): CLASS(Flag_KC_Horizontal)
    {
        displayName = "KC Damaged Flag (Horizontal)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\flags\KC_Damaged_Mirrored_co.paa)};
    };

    class ReammoBox_F;
    class 3AS_Supply_Large_Prop: ReammoBox_F
    {
        class EventHandlers;
    };
    class CLASS(Resupply_Base): 3AS_Supply_Large_Prop
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        displayName = "Empty Crate";

        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubcat_Resupply);
        editorPreview = EDITOR_PREVIEW(CLASS(Resupply_Base));

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
        editorPreview = EDITOR_PREVIEW(CLASS(Resupply_SquadAmmo));

        class TransportMagazines
        {
            // Primary Ammo
            MAG_XX(CLASS(Mag_60rnd_DC15A),10);
            MAG_XX(CLASS(Mag_80rnd_DC15S),10);
            MAG_XX(CLASS(Mag_40rnd_DC15C),10);
            MAG_XX(CLASS(Mag_15rnd_DC15X),10);
            MAG_XX(CLASS(Mag_240rnd_DC15L),10);
            MAG_XX(CLASS(Mag_30rnd_DP23),10);
            MAG_XX(CLASS(Mag_60rnd_WestarM5),10);
            MAG_XX(CLASS(Mag_25rnd_Valken38x),10);

            // UGL Ammo
            MAG_XX(3Rnd_UGL_FlareWhite_F,5);
            MAG_XX(3Rnd_UGL_FlareRed_F,5);
            MAG_XX(CLASS(Mag_UGL_3rnd_FlareBlue),5);
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
            MAG_XX(CLASS(Mag_20rnd_DC17),10);

            // Launcher Ammo
            MAG_XX(3AS_JLTS_MK39_AA,2);
            MAG_XX(3AS_JLTS_MK44_HE,2);
            MAG_XX(CLASS(Mag_1rnd_RPS7_AT),2);

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
            MAG_XX(CLASS(Mag_60rnd_DC15A),160);
            MAG_XX(CLASS(Mag_80rnd_DC15S),160);
            MAG_XX(CLASS(Mag_40rnd_DC15C),160);
            MAG_XX(CLASS(Mag_15rnd_DC15X),160);
            MAG_XX(CLASS(Mag_240rnd_DC15L),160);
            MAG_XX(CLASS(Mag_30rnd_DP23),160);
            MAG_XX(CLASS(Mag_60rnd_WestarM5),160);
            MAG_XX(CLASS(Mag_25rnd_Valken38x),160);

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
            MAG_XX(CLASS(Mag_20rnd_DC17),50);

            // Launcher Ammo
            MAG_XX(3AS_JLTS_MK39_AA,5);
            MAG_XX(3AS_JLTS_MK44_HE,5);
            MAG_XX(CLASS(Mag_1rnd_RPS7_AT),10);

            // Grenades
            MAG_XX(ls_mag_classC_thermalDet,25);
        };
    };

    class CLASS(Resupply_SquadAmmo_Heavy): CLASS(Resupply_SquadAmmo)
    {
        displayName = "Heavy Ammo Crate (Squad)";
        class TransportMagazines
        {
            MAG_XX(CLASS(Mag_10rnd_Valken38x_AP),20);
            MAG_XX(CLASS(Mag_30rnd_HI12),20);
            MAG_XX(CLASS(Mag_15rnd_DP23_HP),20);
            MAG_XX(Aux501_Weapons_Mags_10mw400,5);
            MAG_XX(3AS_JLTS_MK39_AA,1);
            MAG_XX(3AS_JLTS_MK43_AT,1);
            MAG_XX(3AS_JLTS_MK44_HE,1);
        };
    };
    class CLASS(Resupply_PlatoonAmmo_Heavy): CLASS(Resupply_SquadAmmo_Heavy)
    {
        displayName = "Heavy Ammo Crate (Platoon)";
        class TransportMagazines: TransportMagazines
        {
            MAG_XX(CLASS(Mag_10rnd_Valken38x_AP),120);
            MAG_XX(CLASS(Mag_30rnd_HI12),120);
            MAG_XX(CLASS(Mag_15rnd_DP23_HP),120);
            MAG_XX(Aux501_Weapons_Mags_10mw400,10);
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
        editorPreview = EDITOR_PREVIEW(CLASS(Resupply_SquadMedical));

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
            ITEM_XX(RD501_Painkiller,10);

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
            MAG_XX(CLASS(Mag_1rnd_GR20),2);
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
            ITEM_XX(RD501_Painkiller,20);

            // Misc
            ITEM_XX(ACE_tourniquet,12);
            ITEM_XX(ACE_Splint,8);
        };

        class TransportMagazines
        {
            MAG_XX(3AS_SmokePurple,5);
            MAG_XX(SquadShieldMagazine,6);
            MAG_XX(CLASS(Grenade_Bacta),10);
            MAG_XX(CLASS(Mag_1rnd_GR20),4);
        };
    };

    #include "configs\Resurgence_Parts.hpp"

    class venator_base_5;
    class CLASS(Venator_Resurgence_ClosedFullyHollowed): venator_base_5
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubcat_StaticShips);

        displayName = "Resurgence (Closed Fully Hollowed)";
        multiStructureParts[] =
        {
            {QCLASS(Venator_Resurgence_Body1_1), "body1_1"},
            {QCLASS(Venator_Resurgence_Body1_2), "body1_2"},
            {QCLASS(Venator_Resurgence_Body2_1), "body2_1"},
            {QCLASS(Venator_Resurgence_Body2_2), "body2_2"},
            {QCLASS(Venator_Resurgence_Body2_3), "body2_3"},
            {QCLASS(Venator_Resurgence_Body3), "body3"},
            {QCLASS(Venator_Resurgence_Body4), "body4"},
            {QCLASS(Venator_Resurgence_Body5), "body5"},
            {QCLASS(Venator_Resurgence_Body6), "body6"},
            {QCLASS(Venator_Resurgence_Body7), "body7"},
            {QCLASS(Venator_Resurgence_Body8), "body8"},
            {QCLASS(Venator_Resurgence_Body9), "body9"},
            {QCLASS(Venator_Resurgence_Body10), "body10"},
            {QCLASS(Venator_Resurgence_Door), "door"},
            {QCLASS(Venator_Resurgence_Engine), "engine"},
            {QCLASS(Venator_Resurgence_Bridge), "bridge"}
        };
    };

    class CLASS(Venator_Resurgence_OpenFullyHollowed): CLASS(Venator_Resurgence_ClosedFullyHollowed)
    {
        displayName = "Resurgence (Open Fully Hollowed)";
        multiStructureParts[] =
        {
            {QCLASS(Venator_Resurgence_Body1_1), "body1_1"},
            {QCLASS(Venator_Resurgence_Body1_2), "body1_2"},
            {QCLASS(Venator_Resurgence_Body2_1), "body2_1"},
            {QCLASS(Venator_Resurgence_Body2_2), "body2_2"},
            {QCLASS(Venator_Resurgence_Body2_3), "body2_3"},
            {QCLASS(Venator_Resurgence_Body3), "body3"},
            {QCLASS(Venator_Resurgence_Body4), "body4"},
            {QCLASS(Venator_Resurgence_Body5), "body5"},
            {QCLASS(Venator_Resurgence_Body6), "body6"},
            {QCLASS(Venator_Resurgence_Body7), "body7"},
            {QCLASS(Venator_Resurgence_Body8), "body8"},
            {QCLASS(Venator_Resurgence_Body9), "body9"},
            {QCLASS(Venator_Resurgence_Body10), "body10"},
            {QCLASS(Venator_Resurgence_Door2), "door"},
            {QCLASS(Venator_Resurgence_Engine), "engine"},
            {QCLASS(Venator_Resurgence_Bridge), "bridge"}
        };
    };

    class venator_zeus;
    class CLASS(Venator_Resurgence_Zeus): venator_zeus
	{
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(EdSubcat_StaticShips);

		displayName = "Resurgance (Zeus)";

		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\ships\Resurgence\Body1_co.paa),
			QPATHTOF(data\ships\Resurgence\Body2_co.paa),
			QPATHTOF(data\ships\Resurgence\Body3_co.paa),
			QPATHTOF(data\ships\Resurgence\Body4_co.paa),
			QPATHTOF(data\ships\Resurgence\Body5_co.paa),
			QPATHTOF(data\ships\Resurgence\Body6_co.paa),
			QPATHTOF(data\ships\Resurgence\Body7_co.paa),
			QPATHTOF(data\ships\Resurgence\Body8_co.paa),
			QPATHTOF(data\ships\Resurgence\Body9_co.paa),
			QPATHTOF(data\ships\Resurgence\Body10_co.paa),
			QPATHTOF(data\ships\Resurgence\Door_co.paa),
			QPATHTOF(data\ships\Resurgence\Engine_co.paa),
			QPATHTOF(data\ships\Resurgence\Interior1_co.paa),
			QPATHTOF(data\ships\Resurgence\Interior2_co.paa),
			QPATHTOF(data\ships\Resurgence\Interior3_co.paa),
			QPATHTOF(data\ships\Resurgence\Interior4_co.paa),
			QPATHTOF(data\ships\Resurgence\Interior5_co.paa),
			QPATHTOF(data\ships\Resurgence\Interior6_co.paa),
			QPATHTOF(data\ships\Resurgence\Interior7_co.paa),
			QPATHTOF(data\ships\Resurgence\Interior8_co.paa),
			QPATHTOF(data\ships\Resurgence\Bridge_co.paa)
		};
	};
};