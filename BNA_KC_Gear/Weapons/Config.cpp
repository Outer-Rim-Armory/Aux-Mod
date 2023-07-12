#include "CfgPatches.hpp"


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
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Westar-M5";
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
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Westar-M5 UGL";
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
                "3Rnd_UGL_FlareGreen_F",
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
    };

    class JLTS_DC15A: arifle_MX_Base_F
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

        magazines[] = { "12thFleet_Mag_DC15A" };

        modes[]=
        {
            "Single",
            "FullAuto"
        };
        canShootInWater = 1;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    // Medium
                    "Aux501_cows_MRCO",
                    "Aux501_cows_MRCO_2",
                    "Aux501_cows_MRCO_3",
                    // Sights
                    "Aux501_cows_Holoscope",
                    "Aux501_cows_Holoscope_2",
                    "Aux501_cows_Holoscope_3"
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
                soundBegin[] = {begin1, 1};
                soundBeginWater[] = {begin1, 1};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire1", 1, 1, 1800};
                soundBegin[] = {begin1, 1};
                soundBeginWater[] = {begin1, 1};
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

        modes[]=
        {
            "Single",
            "FullAuto"
        };
        canShootInWater = 1;

        magazines[] = { "12thFleet_Mag_DC15A" };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    // Medium
                    "Aux501_cows_MRCO",
                    "Aux501_cows_MRCO_2",
                    "Aux501_cows_MRCO_3",
                    // Sights
                    "Aux501_cows_Holoscope",
                    "Aux501_cows_Holoscope_2",
                    "Aux501_cows_Holoscope_3"
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
                soundBegin[] = {begin1, 1};
                soundBeginWater[] = {begin1, 1};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC15A_Fire1", 1, 1, 1800};
                soundBegin[] = {begin1, 1};
                soundBeginWater[] = {begin1, 1};
            };
        };
        class EGLM: EGLM
        {
            canShootInWater = 0;
            magazines[] =
            {
                "3Rnd_UGL_FlareWhite_F",
                "3Rnd_UGL_FlareRed_F",
                "3Rnd_UGL_FlareGreen_F",
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
        class GL_3GL_F: GL_3GL_F
        {
            canShootInWater = 0;
            magazines[] = {};
            magazineWell[] = {};
        };
    };

    class UGL_F;

    class Default;
    class PistolCore: Default {};
    class Pistol: PistolCore
    {
        class WeaponSlotsInfo {};
    };
    class Pistol_Base_F: Pistol
    {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class hgun_P07_F: Pistol_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class JLTS_DC17SA: hgun_P07_F
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {};
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot {};
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

        magazines[] = { "12thFleet_Mag_DC17" };
        muzzles[] = { "this", "Stun", "EGLM" };

        class Single: Single
        {
            class StandardSound: StandardSound
            {
                begin1[] = {"BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DC17_Fire1", 1, 1, 1800};
                soundBegin[] = {begin1, 1};
            };
        };

        class EGLM: UGL_F
        {
            displayName = "Flare Launcher";
            magazines[] =
            {
                "3Rnd_UGL_FlareWhite_F",
                "3Rnd_UGL_FlareRed_F",
                "BNA_KC_3Rnd_UGL_FlareBlue"
            };
            magazineWell[] = {};

            cameraDir = "eye";
            discreteDistance[] = { 100 };  // Array of ranges
            discreteDistanceInitIndex = 0; // Default range index
            discreteDistanceCameraPoint[] = { "eye" };

            // Muzzle memory points
            // Makes the flares shoot as intended
            muzzlePos = "Usti hlavne";
            muzzleEnd = "Konec hlavne";
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    // Sights
                    "aux501_cows_pistol",
                    "aux501_cows_pistol_2"
                };
            };
        };
    };

    // ┌────────────────────┐
    // │      Grenades      │
    // └────────────────────┘
    class ThrowMuzzle;
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] += {"BNA_KC_Grenade_Muzzle"};
        class BNA_KC_Grenade_Muzzle: ThrowMuzzle
        {
            displayName = "[KC] Droid Popper";
            magazines[] += { "BNA_KC_Grenade_DroidPopper" };
        };
    };
};


class CfgMagazines
{
    #include "12thMags.hpp"

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

        ammo = "BNA_KC_Flare_Blue";
        count = 1;
    };

    class BNA_KC_3Rnd_UGL_FlareBlue: BNA_KC_UGL_FlareBlue
    {
        displayName = "[KC] 3Rnd 3GL Flares (Blue)";
        descriptionShort = "Type: Flare Rounds - Blue <br />Rounds: 3 <br />Used in: EGLM, 3GL";
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
        SoundSetExplosion[] = { "JLTS_GrenadeEMP_Exp_SoundSet", "JLTS_GrenadeEMP_Tail_SoundSet", "Explosion_Debris_SoundSet" };

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
};