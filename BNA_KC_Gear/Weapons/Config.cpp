#include "CfgPatches.hpp"


class CfgWeapons
{
	// ┌────────────────┐
    // │    Optics      │
    // └────────────────┘
	class ItemCore;
	class 3AS_Optic_Scope_WestarM5: ItemCore
	{
		class ItemInfo;
	};
	class BNA_KC_WestarM5_Scope: 3AS_Optic_Scope_WestarM5
	{
        displayName = "[KC] Westar-M5 Scope";
		class ItemInfo: ItemInfo
		{
			class OpticsModes
			{
				class BNA_KC_M5_Scope_Optics
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = 
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin = 0.0138;
					opticsZoomMax = 0.0416;
					opticsZoomInit = 0.0416;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					nFovLimit = 0.07;
					discreteFov[] = {0.0416,0.0138};
					discreteInitIndex = 0;
					modelOptics[] = 
					{
						"\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"
					};
					memoryPointCamera = "opticView";
					visionMode[] = 
					{
						//"Normal",
						//"NVG",
						//"TI"
					};
					//thermalMode[] = {0};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class BNA_KC_M5_OverSights_Optic
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
			};
		};
	};
	
    // ┌─────────────────────────────┐
    // │       Custom Weapons        │
    // └─────────────────────────────┘
    class CowsSlot;
    class PointerSlot;
    class WeaponSlotsInfo;
    class Rifle_Base_F;
    class 3AS_WestarM5_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class 3AS_WestarM5_F: 3AS_WestarM5_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };
    };
    class BNA_KC_Westar_M5_Base: 3AS_WestarM5_F
    {
        displayName = "[KC] Westar-M5";
		recoil = "recoil_smg_03";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    "BNA_KC_WestarM5_Scope"/*
                    "optic_arco_ak_blk_f",
                    "optic_Hamr",
                    "optic_MRCO",
                    "optic_Nightstalker",
                    "optic_tws",
                    "optic_DMS",
                    "optic_LRPS",
                    "optic_ico_01_black_f"*/
                };
            };
        };
    };

    class 41_Flammenwerfer_02_F;
    class BNA_KC_Flamer: 41_Flammenwerfer_02_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "Dexus and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Burn 'Em Redux Properties
		WBK_BurnEm_RequiredBackpack = ""; // Classname of required backpack to use, blank = None
		WBK_BurnEm_FlamethrowerParticlePos = [ [-0.32,0.3,-0.3], 'leftHand' ]; // Particle Position
		WBK_BurnEm_FlamethrowerDistance = 20; // Distance of flame in meters

        displayName = "[KC] BlasTech X-42 Flamethrower";
        // Change look to match the 3AS Flamer
        model = "3AS\3AS_Weapons\X42\BX42.p3d";
        picture = "3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
        handAnim[] = 
        {
            "OFP2_ManSkeleton",
            "3AS\3AS_Weapons\Data\Anim\BX42.rtm"
        };
        // reloadAction = ""; // Custom reload animation would be set here

        // Custom Mags
        magazines[] = { "300Rnd_Flamer_Mag" };
    };

    class BNA_KC_Flamer_Heavy: BNA_KC_Flamer
    {
        // Burn 'Em Redux Properties
        WBK_BurnEm_FlamethrowerDistance = 40; // Distance of flame in meters
    
        displayName = "[KC] BlasTech X-42 Heavy Flamethrower";
        // Custom Mags
        magazines[] = { "150Rnd_Flamer_Mag" };
        class WeaponSlotsInfo: WeaponSlotsInfo { mass = 80; };
    };

    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };

    class JLTS_DC15S: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };
        class Single: Single
        {
            class StandardSound;
        };
        class FullAuto: FullAuto 
        {
            class StandardSound;
        };
    };

    class BNA_KC_DC15S: JLTS_DC15S
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15S";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    "3AS_optic_reflex_dc15c",
                    "3AS_optic_holo_dc15s"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[]  = 
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "jlts_dc17sa_flashlight"
                };
            };
        };
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15S_Fire1", 1, 1, 1800};
                begin2[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15S_Fire2", 1, 1, 1800};
                begin3[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15S_Fire3", 1, 1, 1800};
                begin4[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15S_Fire4", 1, 1, 1800};
                soundBegin[] = {begin1, 0.25, begin2, 0.25, begin3, 0.25, begin4, 0.25};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15S_Fire1", 1, 1, 1800};
                begin2[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15S_Fire2", 1, 1, 1800};
                begin3[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15S_Fire3", 1, 1, 1800};
                begin4[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15S_Fire4", 1, 1, 1800};
                soundBegin[] = {begin1, 0.25, begin2, 0.25, begin3, 0.25, begin4, 0.25};
            };
        };
    };

    class JLTS_DC15A: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };
        class Single: Single
        {
            class StandardSound;
        };
    };

    class JLTS_DC15A_plastic: JLTS_DC15A {};

    class BNA_KC_DC15A: JLTS_DC15A_plastic
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15A";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    "3as_optic_reflex_dc15c",
                    "3as_optic_acog_dc15c"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[]  = 
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "jlts_dc17sa_flashlight"
                };
            };
        };
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire1", 1, 1, 1800};
                begin2[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire2", 1, 1, 1800};
                begin3[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire3", 1, 1, 1800};
                begin4[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire4", 1, 1, 1800};
                soundBegin[] = {begin1, 0.25, begin2, 0.25, begin3, 0.25, begin4, 0.25};
            };
        };
    };

    class JLTS_DC15A_ugl: JLTS_DC15A
    {
        class Single: Single
        {
            class StandardSound;
        };
        class EGLM;
        class GL_3GL_F;
    };
    class JLTS_DC15A_ugl_plastic: JLTS_DC15A_ugl {};

    class BNA_KC_DC15A_UGL: JLTS_DC15A_ugl_plastic
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15A UGL";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    "3as_optic_reflex_dc15c",
                    "3as_optic_acog_dc15c"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[]  = 
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "jlts_dc17sa_flashlight"
                };
            };
        };
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire1", 1, 1, 1800};
                begin2[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire2", 1, 1, 1800};
                begin3[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire3", 1, 1, 1800};
                begin4[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire4", 1, 1, 1800};
                soundBegin[] = {begin1, 0.25, begin2, 0.25, begin3, 0.25, begin4, 0.25};
            };
        };
        class EGLM: EGLM
        {
            magazines[] =
            {
                "3Rnd_UGL_FlareWhite_F",
                "3Rnd_UGL_FlareRed_F",
                "3Rnd_UGL_FlareGreen_F",
                "3Rnd_Smoke_Grenade_shell",
                "3Rnd_SmokeRed_Grenade_shell",
                "3Rnd_SmokeGreen_Grenade_shell",
                "3Rnd_SmokeYellow_Grenade_shell",
                "3Rnd_SmokePurple_Grenade_shell",
                "3Rnd_SmokeBlue_Grenade_shell",
                "3Rnd_SmokeOrange_Grenade_shell",
                "3Rnd_HE_Grenade_shell"
            };
            magazineWell[] = {}; // Removes extra magazines
        };
        class GL_3GL_F: GL_3GL_F
        {
            magazines[] = {};
            magazineWell[] = {};
        };
    };

    // ┌─────────────────────────────────┐
    // │       Pre-Defined Weapons       │
    // └─────────────────────────────────┘
    class 3AS_DC15S_F;
    class 3AS_DC15C_F;

    class BNA_KC_DC15S_Predef: 3AS_DC15S_F
    {
        // Scopes
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;


        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item = "3AS_optic_reflex_DC15C";
                slot = "CowsSlot";
            };

            class LinkedItemsUnder
            {
                item = "";
                slot = "UnderBarrelSlot";
            };

            class LinkedItemsAcc
            {
                item = "";
                slot = "PointerSlot";
            };

            class LinkedItemsMuzzle
            {
                item = "";
                slot = "MuzzleSlot";
            };
        };
    };
    class BNA_KC_DC15C_Predef: 3AS_DC15C_F
    {
        // Scopes
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item = "3AS_optic_reflex_DC15C";
                slot = "CowsSlot";
            };

            class LinkedItemsUnder
            {
                item = "";
                slot = "UnderBarrelSlot";
            };

            class LinkedItemsAcc
            {
                item = "";
                slot = "PointerSlot";
            };

            class LinkedItemsMuzzle
            {
                item = "";
                slot = "MuzzleSlot";
            };
        };
    };
};


class CfgMagazines
{
    class M2_Fuel_Tank;

    class 300Rnd_Flamer_Mag: M2_Fuel_Tank
    {
        displayName = "BT X-42 Fuel Tank";
        // 3AS Ammo Picture
        picture = "3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        UiPicture = "3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        mass = 50;
    };

    class 150Rnd_Flamer_Mag: 300Rnd_Flamer_Mag
    {
        displayName = "BT X-42 Fuel Tank";
        count = 150;
        mass = 150;
    };
};