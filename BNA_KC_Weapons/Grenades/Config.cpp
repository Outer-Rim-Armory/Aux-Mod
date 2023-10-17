#include "CfgPatches.hpp"
#include "CfgCloudlets.hpp"


class CfgWeapons
{
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
    class HandGrenade;
    class BNA_KC_Grenade_DroidPopper: HandGrenade
    {
        displayName = "[KC] Droid Popper";
        displayNameShort = "Droid Popper";
        descriptionShort = "An EMP grenade meant to disable electronic systems.";
        picture = "\BNA_KC_Weapons\Grenades\Data\Textures\UI\BNA_KC_Mag_DroidPopper_UI.paa";

        ammo = "BNA_KC_Grenade_DroidPopper_Ammo";

        BNA_KC_GrenadeType = "EMP";
        BNA_KC_GrenadeEMP_Radius_Droid = 5;
        BNA_KC_GrenadeEMP_Radius_Deka = 8;
        BNA_KC_GrenadeEMP_Radius_Vehicle = 8;
    };

    class SmokeShell;
    class BNA_KC_Grenade_BactaBomb: SmokeShell
    {
        displayName = "[KC] Pressurized Bacta Grenade";
        displayNameShort = "Bacta Bomb";
        descriptionShort = "Pressurized bacta gas in grenade form. <br />Nicknamed the 'Bacta Bomb'.";
        picture = "\BNA_KC_Weapons\Grenades\Data\Textures\UI\BNA_KC_Mag_BactaBomb_UI.paa";

        ammo = "BNA_KC_Grenade_BactaBomb_Ammo";

        BNA_KC_GrenadeType = "BACTA";
        BNA_KC_GrenadeBacta_Duration = 20;
        BNA_KC_Medical_areaHealRadius = 20;
        BNA_KC_Medical_areaHealRate = 0.5;
        BNA_KC_Medical_areaHealMaxPatients = -1; // 0 < means no max patients
    };
};


class CfgAmmo
{
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
        soundSetExplosion[] = { /*"JLTS_GrenadeEMP_Exp_SoundSet", "JLTS_GrenadeEMP_Tail_SoundSet", "Explosion_Debris_SoundSet"*/ };

        explosionEffects = "JLTS_fx_exp_EMP";
        explosionEffectRadius = 3;
        explosionForceCoef = 0;

        craterEffects = "";
        craterShape = "";

        aiAmmoUsageFlags = 0;
    };

    class SmokeShell;
    class BNA_KC_Grenade_BactaBomb_Ammo: SmokeShell
    {
        model = "\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
        smokeColor[] = { 0.38, 0.54, 0.91, 0.35 };
        effectsSmoke = "BNA_KC_EffectsGroup_BactaSmoke";

        aiAmmoUsageFlags = 0;

        simulation = "shotSmoke"; // Makes grenades lose all speed when hitting something
        deflectionSlowDown = 0;
    };
};