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