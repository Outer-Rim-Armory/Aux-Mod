#include "CfgPatches.hpp"
#include "..\Macros.hpp"


class CfgMagazines
{
    class JLTS_stun_mag_short;
    class 12thFleet_Mag_StunShort: JLTS_stun_mag_short
    {
        author = "DartRuffian and Dexus";
        displayName = "[12th Fleet] Stun Energy Cell (Short)";
        displayNameShort = "Stun (Short)";
        descriptionShort = "Stun Energy Cell<br/>Rounds: 10<br/>Duration: 5 Seconds<br/>Used in: DC-15S, DC-15A, DC-17";

        JLTS_hasEMPProtection = 1;

        ammo = "Aux_12thFleet_Ammo_Stun";
    };

    class 12thFleet_Mag_StunLong: 12thFleet_Mag_StunShort
    {
        displayName = "[12th Fleet] Stun Energy Cell (Long)";
        displayNameShort = "Stun (Long)";
        descriptionShort = "Stun Energy Cell<br/>Rounds: 5<br/>Duration: 15 Seconds<br/>Used in: DC-15S, DC-15A, DC-17";

        JLTS_hasEMPProtection = 1;

        count = 5;
        JLTS_stunDuration = 15;
    };

    class UGL_FlareWhite_F;
    class BNA_KC_UGL_FlareBlue: UGL_FlareWhite_F
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[KC] Flare Round (Blue)";
        displayNameShort = "Blue Flare";
        descriptionShort = "Type: Flare - Blue <br />Rounds: 1 <br />Used in: EGLM, 3GL";
        picture = "\BNA_KC_Weapons\Core\Data\Textures\UI\BNA_KC_Mag_FlareBlue_UI.paa";

        ammo = "BNA_KC_Flare_Blue";
        count = 1;

        JLTS_hasEMPProtection = 1;
    };

    class BNA_KC_3Rnd_UGL_FlareBlue: BNA_KC_UGL_FlareBlue
    {
        displayName = "[KC] 3Rnd 3GL Flares (Blue)";
        displayNameShort = "3Rnd Blue Flare";
        descriptionShort = "Type: Flare Rounds - Blue <br />Rounds: 3 <br />Used in: EGLM, 3GL";
        mass = 12;
        count = 3;

        JLTS_hasEMPProtection = 1;
    };
};


class CfgAmmo
{
    class JLTS_bullet_rifle_blue;
    class Aux_12thFleet_Ammo_Rifle_Blue: JLTS_bullet_rifle_blue
    {
        coefgravity = 0;
        // 3AS Hit Sounds/Effects
        BULLET_SOUNDS
        BULLET_EFFECTS
    };
    class Aux_12thFleet_Ammo_Rifle_Red: Aux_12thFleet_Ammo_Rifle_Blue
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };

    class JLTS_bullet_carbine_blue;
    class Aux_12thFleet_Ammo_Carbine_Blue: JLTS_bullet_carbine_blue
    {
        coefgravity = 0;
        // 3AS Hit Sounds/Effects
        BULLET_SOUNDS
        BULLET_EFFECTS
    };
    class Aux_12thFleet_Ammo_Carbine_Red: Aux_12thFleet_Ammo_Carbine_Blue
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };

    class JLTS_bullet_sniper_blue;
    class Aux_12thFleet_Ammo_Sniper_Blue: JLTS_bullet_sniper_blue
    {
        BULLET_SOUNDS
        BULLET_EFFECTS

        coefgravity = 0;
        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508, 660.4, 711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880, 915, 925};
        ACE_muzzleVelocityVariationSD = 0.3;

        audibleFire = 80;
    };

    class JLTS_bullet_pistol_blue;
    class Aux_12thFleet_Ammo_Pistol_Blue: JLTS_bullet_pistol_blue
    {
        coefgravity = 0;
        BULLET_SOUNDS
        BULLET_EFFECTS
    };

    class Aux_12thFleet_Ammo_Scatter_Blue: Aux_12thFleet_Ammo_Pistol_Blue
    {
        simulation = "shotSpread";
        fireSpreadAngle = 3;
    };

    class Aux_12thFleet_Ammo_Scatter_HP_Blue: Aux_12thFleet_Ammo_Scatter_Blue
    {
        hit = 10;
    };

    class JLTS_bullet_stun;
    class Aux_12thFleet_Ammo_Stun: JLTS_bullet_stun
    {
        coefgravity = 0;
    };

    class F_40mm_White;
    class BNA_KC_Flare_Blue: F_40mm_White
    {
        lightColor[] = { 0.25, 0.25, 0.5, 0.5 };
    };
};


class CfgMagazineWells
{
    class BNA_KC_1Rnd_UGL_Smokes
    {
        BI_Magazines[] =
        {
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeRed_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeYellow_Grenade_shell",
            "1Rnd_SmokePurple_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell"
        };
    };
    class BNA_KC_3Rnd_UGL_Smokes
    {
        BI_Magazines[] =
        {
            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_SmokeRed_Grenade_shell",
            "3Rnd_SmokeGreen_Grenade_shell",
            "3Rnd_SmokeYellow_Grenade_shell",
            "3Rnd_SmokePurple_Grenade_shell",
            "3Rnd_SmokeBlue_Grenade_shell",
            "3Rnd_SmokeOrange_Grenade_shell"
        };
    };

    class BNA_KC_1Rnd_UGL_Flares
    {
        BI_Magazines[] =
        {
            "1Rnd_UGL_FlareWhite_F",
            "1Rnd_UGL_FlareRed_F"
        };
        KC_Magazines[] =
        {
            "BNA_KC_1Rnd_UGL_FlareBlue"
        };
    };
    class BNA_KC_3Rnd_UGL_Flares
    {
        BI_Magazines[] =
        {
            "3Rnd_UGL_FlareWhite_F",
            "3Rnd_UGL_FlareRed_F"
        };
        KC_Magazines[] =
        {
            "BNA_KC_3Rnd_UGL_FlareBlue"
        };
    };

    class BNA_KC_UGL_Common
    {
        BI_Magazines[] =
        {
            "3Rnd_UGL_FlareWhite_F",
            "3Rnd_UGL_FlareRed_F",
            "3Rnd_UGL_FlareCIR_F",

            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_SmokeRed_Grenade_shell",
            "3Rnd_SmokeGreen_Grenade_shell",
            "3Rnd_SmokeYellow_Grenade_shell",
            "3Rnd_SmokePurple_Grenade_shell",
            "3Rnd_SmokeBlue_Grenade_shell",
            "3Rnd_SmokeOrange_Grenade_shell",

            "3Rnd_HE_Grenade_shell"
        };
        KC_Magazines[] =
        {
            "BNA_KC_3Rnd_UGL_FlareBlue"
        };
        ACE_Magazines[] =
        {
            "ACE_HuntIR_M203"
        };
    };

    class BNA_KC_Stuns
    {
        KC_Magazines[] =
        {
            "12thFleet_Mag_StunShort",
            "12thFleet_Mag_StunLong"
        };
    };
};


class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base
    {
        range = 1800;
        volume = 1;
        samples[] = {};
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_Weapon_Base"};
        soundShadersLimit = 1;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";

        volumeCurve = "InverseSquare2Curve";
        volumeFactor = 1;

        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;

        spatial = 1;
        doppler = 0;
        loop = 0;
    };
};