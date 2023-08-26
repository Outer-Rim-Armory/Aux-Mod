#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"


class Mode_SemiAuto;
class Mode_FullAuto: Mode_SemiAuto {};

class SlotInfo {};
class CowsSlot: SlotInfo {};
class CowsSlot_Rail: CowsSlot {};
class PointerSlot: SlotInfo {};
class PointerSlot_Rail: PointerSlot {};
class UnderBarrelSlot: SlotInfo {};
class UnderBarrelSlot_Rail: UnderBarrelSlot {};


class CfgWeapons
{
	// ┌──────────────────┐
    // │      Optics      │
    // └──────────────────┘
    #include "Optics.hpp"
	
    // ┌───────────────────┐
    // │      Weapons      │
    // └───────────────────┘
    class WeaponSlotsInfo;
    class Default {};
    class RifleCore: Default {};
    class Rifle: RifleCore
    {
        class WeaponSlotsInfo {};
    };
    class Rifle_Base_F: Rifle {};
    class 3AS_WestarM5_Base_F: Rifle_Base_F
    {
        // Attachments
        class WeaponSlotsInfo;
        // Fire Modes
        class Single;
        class Burst;
        class FullAuto;
        class 3AS_WestarM5_GL_F;
    };
    class 3AS_WestarM5_F: 3AS_WestarM5_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            // Attachments
            class CowsSlot;
            class PointerSlot;
        };
    };
    class BNA_KC_WestarM5: 3AS_WestarM5_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Westar-M5";
        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_ui.paa";
		recoil = "recoil_smg_03";
        canShootInWater = 1;

        magazines[] = { "12thFleet_Mag_WestarM5" };
        magazineWell[] = {};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    // Short
                    "Aux501_cows_RCO",
                    "Aux501_cows_RCO_2",
                    "Aux501_cows_RCO_3",
                    // Medium
                    "Aux501_cows_MRCO",
                    "Aux501_cows_MRCO_2",
                    "Aux501_cows_MRCO_3",
                    // Long
                    "Aux501_cows_DMS",
                    "Aux501_cows_DMS_2",
                    "Aux501_cows_DMS_3",
                    "Aux501_cows_DMS_4",
                    "Aux501_cows_HoloScope",
                    "Aux501_cows_HoloScope_2",
                    "Aux501_cows_HoloScope_3",
                    // Sights
                    "BNA_KC_WestarM5_Scope",
                    "Aux501_cows_reflex_optic",
                    "Aux501_cows_Holosight",
                    "Aux501_cows_Holosight_2",
                    "Aux501_cows_Holosight_3"
                };
            };
        };
    };

    class 3AS_WestarM5_GL: 3AS_WestarM5_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            // Attachments
            class CowsSlot;
            class PointerSlot;
        };
        class Single: Single { class StandardSound; };
        class Burst: Burst { class StandardSound; };
        class FullAuto: FullAuto { class StandardSound; };
        class 3AS_WestarM5_GL_F;
    };
    class BNA_KC_WestarM5_UGL: 3AS_WestarM5_GL
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Westar-M5 UGL";
        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_ui.paa";
		recoil = "recoil_smg_03";
        canShootInWater = 1;

        magazines[] = { "12thFleet_Mag_WestarM5" };
        magazineWell[] = {};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    // Short
                    "Aux501_cows_RCO",
                    "Aux501_cows_RCO_2",
                    "Aux501_cows_RCO_3",
                    // Medium
                    "Aux501_cows_MRCO",
                    "Aux501_cows_MRCO_2",
                    "Aux501_cows_MRCO_3",
                    // Long
                    "Aux501_cows_DMS",
                    "Aux501_cows_DMS_2",
                    "Aux501_cows_DMS_3",
                    "Aux501_cows_DMS_4",
                    "Aux501_cows_HoloScope",
                    "Aux501_cows_HoloScope_2",
                    "Aux501_cows_HoloScope_3",
                    // Sights
                    "BNA_KC_WestarM5_Scope",
                    "Aux501_cows_reflex_optic",
                    "Aux501_cows_Holosight",
                    "Aux501_cows_Holosight_2",
                    "Aux501_cows_Holosight_3"
                };
            };
        };

        // class Single: Single
        // {
        //     class StandardSound: StandardSound
        //     {
        //         begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_Westar_Fire1", 1, 1, 1800};
        //         begin2[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_Westar_Fire2", 1, 1, 1800};
        //         begin3[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_Westar_Fire3", 1, 1, 1800};
        //         begin4[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_Westar_Fire4", 1, 1, 1800};
        //         soundBegin[] = {begin1, 0.25, begin2, 0.25, begin3, 0.25, begin4, 0.25};
        //     };
        // };

        class 3AS_WestarM5_GL_F: 3AS_WestarM5_GL_F
        {
            displayName = "Grenade Launcher";
            canShootInWater = 0;
            magazines[] =
            {
                "3Rnd_UGL_FlareWhite_F",
                "3Rnd_UGL_FlareRed_F",
                "BNA_KC_3Rnd_UGL_FlareBlue",
                "3Rnd_UGL_FlareCIR_F",
                "3Rnd_Smoke_Grenade_shell",
                "3Rnd_SmokeRed_Grenade_shell",
                "3Rnd_SmokeGreen_Grenade_shell",
                "3Rnd_SmokeYellow_Grenade_shell",
                "3Rnd_SmokePurple_Grenade_shell",
                "3Rnd_SmokeBlue_Grenade_shell",
                "3Rnd_SmokeOrange_Grenade_shell",
                "3Rnd_HE_Grenade_shell",
                "ACE_HuntIR_M203"
            };
            magazineWell[] = {}; // Removes extra magazines
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
        scopeArsenal = 2;

        // Burn 'Em Redux Properties
		WBK_BurnEm_RequiredBackpack = ""; // Classname of required backpack to use, blank = None
		WBK_BurnEm_FlamethrowerParticlePos = [ [-0.32,0.3,-0.3], 'leftHand' ]; // Particle Position
		WBK_BurnEm_FlamethrowerDistance = 20; // Distance of flame in meters

        displayName = "[KC] BlasTech X-42 Flamethrower";
        // Change look to match the 3AS Flamer
        model = "3AS\3AS_Weapons\X42\BX42.p3d";
        picture = "\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
        handAnim[] = 
        {
            "OFP2_ManSkeleton",
            "3AS\3AS_Weapons\Data\Anim\BX42.rtm"
        };
        // reloadAction = ""; // Custom reload animation would be set here

        // Custom Mags
        magazines[] = { "BNA_KC_Mag_300Rnd_Flamer" };
    };

    class BNA_KC_Flamer_Heavy: BNA_KC_Flamer
    {
        // Burn 'Em Redux Properties
        WBK_BurnEm_FlamethrowerDistance = 40; // Distance of flame in meters
    
        displayName = "[KC] BlasTech X-42 Heavy Flamethrower";
        // Custom Mags
        magazines[] = { "BNA_KC_Mag_150Rnd_Flamer" };
        class WeaponSlotsInfo: WeaponSlotsInfo { mass = 80; };
    };

    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot_Rail {};
            class PointerSlot: PointerSlot_Rail {};
        };
    };
    class JLTS_DC15S: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot {};
            class PointerSlot: PointerSlot {};
        };

        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {};
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {};
        };

        class Stun;
    };

    #define STUN class Stun: Stun \
{ \
    displayName = "Stun"; \
    magazines[] = { "12thFleet_Mag_StunLong", "12thFleet_Mag_StunShort" }; \
    magazineWell[] = {}; \
};

    class BNA_KC_DC15S: JLTS_DC15S
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15S";
        canShootInWater = 1;

        JLTS_shieldedWeapon = "BNA_KC_DC15S_RiotShield";

        magazines[] = { "12thFleet_Mag_DC15S" };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    // Short
                    "Aux501_cows_RCO",
                    "Aux501_cows_RCO_2",
                    "Aux501_cows_RCO_3",
                    // Medium
                    "Aux501_cows_MRCO",
                    "Aux501_cows_MRCO_2",
                    "Aux501_cows_MRCO_3",
                    // Sights
                    "Aux501_cows_Holosight",
                    "Aux501_cows_Holosight_2",
                    "Aux501_cows_Holosight_3",
                    "Aux501_cows_reflex_optic"
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
                soundBegin[] = {begin1, 1};
                soundBeginWater[] = {begin1, 1};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15S_Fire1", 1, 1, 1800};
                soundBegin[] = {begin1, 1};
                soundBeginWater[] = {begin1, 1};
            };
        };

        STUN;
    };

    class BNA_KC_DC15S_RiotShield: BNA_KC_DC15S
    {
        // Scopes
        scope = 1;
        scopeArsenal = 0;

        JLTS_isShielded = 1;
        JLTS_baseWeapon = "BNA_KC_DC15S";
        model = "\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";

        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa",
            "\MRC\JLTS\weapons\Shield\data\shield_co.paa"
        };
        handAnim[]=
        {
            "OFP2_ManSkeleton",
            "\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"
        };

        // reloadAction = "GestureReload";
		// inertia = 0.80000001;
		recoil = "recoil_pdw"; // More recoil since the gun is held in one hand

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {"JLTS_riot_shield_attachment"};
            };
        };
    };
	
	
	class LFP_rifle_base;
	class LFP_hi12: LFP_rifle_base
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class BNA_KC_HI12: LFP_hi12
	{
		displayName = "[KC] HI-12";
		magazines[]=
		{
			"BNA_KC_HI12_30rnd"
		};
		modes[]=
		{
			"Single",
            "Burst",
			"close",
			"short",
			"medium"
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"BNA_KC_Gear\Weapons\Data\Audio\Hi11SFX.wss",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
			};
			dispersion=0.00037815439999;
		};
		class Burst: Single
        {
            displayName = "Burst"
            textureType = "burst";
            burst = 3;
            reloadTime = 0.09; // Shoot faster in burst mode
        };
        
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
            {
                compatibleItems[]  = 
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "jlts_dc17sa_flashlight"
                };
            };
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]  = 
                {
                    "bipod_01_F_blk"
                };
			};
		};
	};

    // Basically a fake UGL to get around the camera and cursor being odd on pistols
    // Values come from UGL_F base class
    class BNA_KC_Launcher_Muzzle: Rifle_Base_F
    {
        displayName = "Launcher";
        magazines[] = {};
        magazineWell[] = {};

        modes[] = { "Single" };
        muzzles[] = { "this" };

        nameSound = "";

        changeFiremodeSound[] = { "A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl", 0.316228, 1, 5 };
        reloadMagazineSound[] = { "A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL", 0.562341, 1, 10 };
        drySound[] = { "A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl", 0.562341, 1, 10 };

        recoil = "recoil_pistol_p07";
        recoilProne = "recoil_pistol_p07";

        cursor = "EmptyCursor";
        cursorAim = "gl";
        textureType = "semi";

        autoFire = 0;

        class Single: Mode_SemiAuto
        {
            textureType = "semi";

            // recoil = "recoil_pistol_p07";
            // recoilProne = "recoil_pistol_p07";

            // For AI units
            maxRange = 400;
            maxRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            minRange = 30;
            minRangeProbab = 0.1;

            nameSound = "";
            sounds[] = { "StandardSound" };
            class BaseSoundModeType
            {
                closure1[] = { "A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1, 1, 10 };
                soundClosure[] = { "closure1", 1 };
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = { "A3\Sounds_F\arsenal\weapons\UGL\UGL_01", 0.707946, 1, 200 };
                begin2[] = { "A3\Sounds_F\arsenal\weapons\UGL\UGL_02", 0.707946, 1, 200 };
                soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };

                soundSetShot[] = { "UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet" };
            };
        };
    };

    class hgun_P07_F;
    class JLTS_DC17SA: hgun_P07_F
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {};
        };

        class Stun;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };
    class BNA_KC_DC17: JLTS_DC17SA
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-17";
        baseWeapon = "BNA_KC_DC17"; // Used to specify it as a different weapon
        canShootInWater = 1;

        JLTS_shieldedWeapon = "BNA_KC_DC17_RiotShield";

        magazines[] = { "12thFleet_Mag_DC17" };
        modes[] = { "Single" };
        muzzles[] = { "this", "Stun", "Launcher" };

        class Single: Single
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC17_Fire1", 1, 1, 1800};
                soundBegin[] = {begin1, 1};
            };
        };

        class Launcher: BNA_KC_Launcher_Muzzle
        {
            displayName = "Flare Launcher";
            magazines[] =
            {
                "3Rnd_UGL_FlareWhite_F",
                "3Rnd_UGL_FlareRed_F",
                "BNA_KC_3Rnd_UGL_FlareBlue"
            };
        };

        STUN;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot
            {
                compatibleItems[] = 
                {
                    // Sights
                    "aux501_cows_pistol",
                    "aux501_cows_pistol_2"
                };
                
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
    };

    class BNA_KC_DC17_RiotShield: BNA_KC_DC17
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-17 (Shield)";

        model = "\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"};

        JLTS_baseWeapon = "BNA_KC_DC17";
        JLTS_isShielded = 1;

        recoil = "recoil_pdw"; // More recoil since the gun is held in one hand

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {"JLTS_riot_shield_attachment"};
            };
        };
    };

    class BNA_KC_GR20: BNA_KC_DC17
    {
        displayName = "[KC] GR-20";
        descriptionShort = "An old GR-10 plasma blaster, modified to shoot <br />pressurized bacta canisters instead of plasma.";
        baseWeapon = "BNA_KC_GR20"; // Used to specify it as a different weapon

        magazines[] = {};
        magazineWell[] = {};

        modes[] = {};
        muzzles[] = { "Launcher" };

        class Launcher: Launcher
        {
            displayName = "Bacta Launcher";
            magazines[] = { "BNA_KC_Mag_GR20" };
        };
    };

    // ┌────────────────────┐
    // │      Grenades      │
    // └────────────────────┘
    class ThrowMuzzle;
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] += { "BNA_KC_DroidPopper_Muzzle", "BNA_KC_BactaBomb_Muzzle" };
        class BNA_KC_DroidPopper_Muzzle: ThrowMuzzle
        {
            displayName = "[KC] Droid Popper";
            magazines[] += { "BNA_KC_Grenade_DroidPopper" };
        };
        class BNA_KC_BactaBomb_Muzzle: ThrowMuzzle
        {
            displayName = "[KC] Bacta Grenade";
            magazines[] += { "BNA_KC_Grenade_BactaBomb" };
        };
    };
};


class CfgMagazines
{
    #include "12thMags.hpp"

    class LFP_HI12_Mag;
    class BNA_KC_HI12_30rnd: LFP_HI12_Mag
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;
        
        displayName = "[KC] HI-12 Magazine";
        count = 30;
    };

    class UGL_FlareWhite_F;
    class BNA_KC_UGL_FlareBlue: UGL_FlareWhite_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Flare Round (Blue)";
        displayNameShort = "Blue Flare";
        descriptionShort = "Type: Flare - Blue <br />Rounds: 1 <br />Used in: EGLM, 3GL";
        picture = "\BNA_KC_Gear\Weapons\Data\Textures\UI\BNA_KC_Magazine_FlareBlue_UI.paa";

        ammo = "BNA_KC_Flare_Blue";
        count = 1;
    };

    class BNA_KC_3Rnd_UGL_FlareBlue: BNA_KC_UGL_FlareBlue
    {
        displayName = "[KC] 3Rnd 3GL Flares (Blue)";
        descriptionShort = "Type: Flare Rounds - Blue <br />Rounds: 3 <br />Used in: EGLM, 3GL";
        mass = 12;
        count = 3;
    };

    class HandGrenade;
    class BNA_KC_Grenade_DroidPopper: HandGrenade
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Droid Popper";
        displayNameShort = "Droid Popper";
        descriptionShort = "An EMP grenade meant to disable electronic systems.";

        picture = "\BNA_KC_Gear\Weapons\Data\Textures\UI\BNA_KC_DroidPopper.paa";

        ammo = "BNA_KC_Grenade_DroidPopper_Ammo";
        count = 1;
        
        BNA_KC_GrenadeType = "EMP";
        BNA_KC_GrenadeEMP_Radius_Droid = 3;
        BNA_KC_GrenadeEMP_Radius_Deka = 5;
        BNA_KC_GrenadeEMP_Radius_Vehicle = 5;
    };

    class SmokeShellBlue;
    class BNA_KC_Grenade_BactaBomb: SmokeShellBlue
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Pressurized Bacta Grenade";
        displayNameShort = "Bacta Bomb";
        descriptionShort = "Pressurized bacta gas in grenade form. <br />Nicknamed the 'Bacta Bomb'.";

        picture = "\BNA_KC_Gear\Weapons\Data\Textures\UI\BNA_KC_Magazine_BactaBomb_UI.paa";

        ammo = "BNA_KC_Grenade_BactaBomb_Ammo";
        count = 1;

        BNA_KC_GrenadeType = "BACTA";
        BNA_KC_GrenadeBacta_Radius = 20;
        BNA_KC_GrenadeBacta_Duration = 20;
    };

    class 1Rnd_SmokeBlue_Grenade_shell;
    class BNA_KC_Mag_GR20: 1Rnd_SmokeBlue_Grenade_shell
    {
        // Non-grenade version for bacta launcher
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Pressurized Bacta Canister";
        displayNameShort = "Bacta Bomb";
        descriptionShort = "Pressurized bacta gas. <br />Nicknamed the 'Bacta Bomb'.";

        picture = "\BNA_KC_Gear\Weapons\Data\Textures\UI\BNA_KC_Magazine_BactaBomb_UI.paa";

        ammo = "BNA_KC_Grenade_BactaBomb_Ammo";
        count = 1;

        BNA_KC_GrenadeType = "BACTA";
        BNA_KC_GrenadeBacta_Radius = 10;
        BNA_KC_GrenadeBacta_Duration = 15;
    };
};

class CfgAmmo
{
    class JLTS_bullet_rifle_blue;
    class 12thFleet_Ammo_Rifle_Blue: JLTS_bullet_rifle_blue
    {
        coefgravity = 0;
    };

    class JLTS_bullet_sniper_blue;
    class 12thFleet_Ammo_Sniper_Blue: JLTS_bullet_sniper_blue
    {
        coefgravity = 0;
    };
    
    class JLTS_bullet_pistol_blue;
    class 12thFleet_Ammo_Pistol_Blue: JLTS_bullet_pistol_blue
    {
        coefgravity = 0;
    };
    
    class 3AS_EC50_BluePlasma;
    class 12thFleet_Ammo_Westar_Blue: 3AS_EC50_BluePlasma
    {
        coefgravity = 0;
    };

    class JLTS_bullet_stun;
    class 12thFleet_Ammo_Stun: JLTS_bullet_stun
    {
        coefgravity = 0;
    };

    class F_40mm_White;
    class BNA_KC_Flare_Blue: F_40mm_White
    {
        lightColor[] = {0.25, 0.25, 0.5, 0.5};
    };

    class GrenadeHand;
    class BNA_KC_Grenade_DroidPopper_Ammo: GrenadeHand
    {
        model = "ls_weapons\grenades\thermalDet\ls_grenade_thermalDet";

        // Disable damage and explosions
        hit = 0;
        indirectHit = 0;
        // explosive = 0;
        // explosionTime = 5;
        // -1 means impact grenade

        ace_frag_enabled = 0;
        ace_frag_skip = 1;
        ace_frag_metal = 0;
        ace_frag_charge = 0;

        // Sound and visual effects
        ace_grenades_pullPinSound[] = { "\ls_sounds\weapons\grenade\pin.wss", 3, 1, 10 };
        soundFly[] = { "\ls_sounds\weapons\grenade\thermalDet_classC_fuse.wss", 3, 1, 40 };
        SoundSetExplosion[] = { /*"JLTS_GrenadeEMP_Exp_SoundSet", "JLTS_GrenadeEMP_Tail_SoundSet", "Explosion_Debris_SoundSet"*/ };

        explosionEffects = "JLTS_fx_exp_EMP";
        explosionEffectRadius = 3;
        explosionForceCoef = 0;

        aiAmmoUsageFlags = 0; // Disables the ai from this ammo
        
        /*
        JLTS_isEMPAmmo=1;
		hit=0.1;
		indirectHit=0.0099999998;
		indirectHitRange=12;
		timeToLive=30;
		
		fuseDistance=1;
		explosive=9.9999997e-005;
		deflecting=5;
		caliber=5;
		ace_frag_enabled=0;
		ace_frag_force=0;
		ace_frag_classes[]=
		{
			""
		};
		ace_frag_metal=0;
		ace_frag_charge=0;
		ace_frag_gurney_c=0;
		ace_frag_gurney_k="0";
		ace_rearm_caliber=0;
		aiAmmoUsageFlags=0;
		class CamShakeExplode
		{
			distance=10;
			duration=1;
			frequency=20;
			power=0;
		};
        */
    };

    class SmokeShell;
    class BNA_KC_Grenade_BactaBomb_Ammo: SmokeShell
    {
        model = "\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
        smokeColor[] = {0.38, 0.54, 0.91, 0.35};
        effectsSmoke = "BNA_KC_EffectsGroup_BactaSmoke";
        
        aiAmmoUsageFlags = 0;

        simulation="shotSmoke"; // Makes grenades lose all speed when hitting something
		deflectionSlowDown = 0;
    };
};


// Particle Effects Group, used for smoke grenades
class SmokeShellWhiteEffect;
class BNA_KC_EffectsGroup_BactaSmoke: SmokeShellWhiteEffect
{
    // Set of particle effects, multiple effects for variance
    class Smoke
    {
        type = "BNA_KC_Effects_BactaSmoke"; // CfgCloudlets class
        simulation = "particles";

        intensity = 1;
        interval = 1;
        position[] = {0, 0, 0};
    };
    class SmokeUW: Smoke
    {
        type = "BNA_KC_Effects_BactaSmokeUW";
    };
};


class CfgCloudlets
{
    class SmokeShellWhite;
    class BNA_KC_Effects_BactaSmoke: SmokeShellWhite
    {
        interval = 0.01;
        ignoreWind = true;
    };

    // Underwater effects, easier to just inherit from the base underwater
    // particles than to change the same properties they do
    class SmokeShellWhiteUW;
    class BNA_KC_Effects_BactaSmokeUW: SmokeShellWhiteUW
    {
        interval = 0.01;
        ignoreWind = true;
    };
};