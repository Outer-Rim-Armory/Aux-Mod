class CfgAmmo
{
    class BulletBase;
    class CLASS(Bullet_Base): BulletBase
    {
        SCOPE_PRIVATE;
    };

    class CLASS(Bullet_PlasmaBase): CLASS(Bullet_Base)
    {
        coefGravity = 0.01;
        airFriction = 0;
        deflecting = 0;
        cartridge = "";

        supersoniccrackfar[] = {};
        supersoniccracknear[] = {};

        PLASMA_SOUNDS;
        PLASMA_EFFECTS;
    };

    class CLASS(Bullet_PlasmaRifle_Blue): CLASS(Bullet_PlasmaBase)
    {
        SCOPE_PUBLIC;

        hit = 16;
        caliber = 2;
        typicalSpeed = 890;
        dangerRadiusHit = 14;
        dangerRadiusBulletClose = 10;
        suppressionRadiusHit = 10;
        suppressionRadiusBulletClose = 8;
        cost = 6;

        audibleFire = 80;
        tracerEndTime = 10;
        tracerScale = 1.1;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508, 660.4, 711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {880, 915, 925};
        ACE_muzzleVelocityVariationSD = 0.3;
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };
    class CLASS(Bullet_PlasmaRifle_Red): CLASS(Bullet_PlasmaRifle_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaRifle_Green): CLASS(Bullet_PlasmaRifle_Blue)
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class Aux12thFleet_Ammo_AutoRifle_Blue: Aux12thFleet_Ammo_Rifle_Blue
    {
        hit = 17.5;
        caliber = 2.8;
        tracerscale = 1.5;
    };
    class Aux12thFleet_Ammo_AutoRifle_Red: Aux12thFleet_Ammo_AutoRifle_Blue
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };

    class JLTS_bullet_carbine_blue;
    class Aux12thFleet_Ammo_Carbine_Blue: JLTS_bullet_carbine_blue
    {
        coefgravity = 0.01;
        PLASMA_SOUNDS;
        PLASMA_EFFECTS;
    };
    class Aux12thFleet_Ammo_Carbine_Red: Aux12thFleet_Ammo_Carbine_Blue
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };

    class JLTS_bullet_sniper_blue;
    class Aux12thFleet_Ammo_Sniper_Blue: JLTS_bullet_sniper_blue
    {
        PLASMA_SOUNDS;
        PLASMA_EFFECTS;

        coefgravity = 0.01;
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
    class Aux12thFleet_Ammo_Pistol_Blue: JLTS_bullet_pistol_blue
    {
        coefgravity = 0.01;
        PLASMA_SOUNDS;
        PLASMA_EFFECTS;
    };

    class B_12Gauge_Pellets_Submunition;
    class Aux12thFleet_Ammo_Scatter_Blue: B_12Gauge_Pellets_Submunition
    {
        submunitionAmmo = "Aux12thFleet_Ammo_Pistol_Blue";
        submunitionConeAngle = 1;
        fireSpreadAngle = 8;
        caliber = 2;
        cartridge = "FxCartridge_slug";
        cost = 5;
        typicalSpeed = 400;
        airFriction = -0.0080000004;
        triggerTime = 0.00030000001;
        deflecting = 0;
        deflectionSlowDown = 0.80000001;
        dangerRadiusHit = 40;
        dangerRadiusBulletClose = 16;
    };
    class Aux12thFleet_Ammo_Scatter_HP_Blue: Aux12thFleet_Ammo_Scatter_Blue
    {
        hit = 10;
    };

    class JLTS_bullet_stun;
    class Aux12thFleet_Ammo_Stun: JLTS_bullet_stun
    {
        coefgravity = 0.01;
    };

    class F_40mm_White;
    class BNA_KC_Flare_Blue: F_40mm_White
    {
        lightColor[] = {0.25, 0.25, 0.5, 0.5};
    };

    class SWLW_ammo_40mm_at;
    class Aux12thFleet_Ammo_40mm_AT: SWLW_ammo_40mm_at
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        craterWaterEffects = "ImpactEffectsWaterExplosion";

        hit = 800;
        typicalSpeed = 1550;

        submunitionammo = "Aux12thFleet_Ammo_40mm_AT_SubAmmo";
        submunitionInitialOffset[] = {0,0, -0.5};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
    };

    class ammo_Penetrator_Titan_AT;
    class Aux12thFleet_Ammo_40mm_AT_SubAmmo: ammo_Penetrator_Titan_AT
    {
        hit = 650;
        caliber = 60;

        thrust = 210;
        thrustTime = 1.5;
        typicalSpeed = 1000;
    };
};