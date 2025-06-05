class SensorTemplateIR;

class CfgAmmo {
    class BulletBase;
    class CLASS(Bullet_Base): BulletBase {
        SCOPE_PRIVATE;
        aiAmmoUsageFlags = AMMO_USAGE_INFANTRY;
        audibleFire = 80;

        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_dragModel = 7;
        ACE_standardAtmosphere = "ICAO";
        ACE_transonicStabilityCoef = 1;
        ACE_muzzleVelocityVariationSD = 0.3;
        ACE_velocityBoundaries[] = {};
    };

    class CLASS(Bullet_flamethrower): CLASS(Bullet_Base) {
        SCOPE_PUBLIC;

        cost = 2;
        airFriction = 0;
        coefGravity = 0.25;
        maxSpeed = 25;
        deflecting = 0;

        caliber = 0.5;
        hit = 10;
        indirectHit = 5;
        indirectHitRange = 1;
        typicalSpeed = 0.12;
        explosive = 1;
        fuseDistance = 1;
        triggerTime = 0.05;

        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        effectFly = "SmallFire";
        cartridge = "";
        explosionEffects = "Flame_Explosion";
        craterEffects = "";
        audibleFire = 12;

        submunitionAmmo = QCLASS(Bullet_flamethrower_sub);
        submunitionConeAngle = 4;
        submunitionConeType[] = {"poissondisc", 4};

        timeToLive = 2;
        tracerEndTime = 0.1;
        tracerScale = 0.001;
        tracerStartTime = 0.01;
        visibleFire = 32;
        visibleFireTime = 20;
    };

    class CLASS(Bullet_flamethrower_sub): CLASS(Bullet_Base) {
        SCOPE_PUBLIC;

        cost = 2;
        airFriction = 0;
        coefGravity = 0.25;
        maxSpeed = 25;
        deflecting = 0;

        caliber = 0.5;
        hit = 10;
        indirectHit = 5;
        indirectHitRange = 1;
        typicalSpeed = 0.12;
        explosive = 1;
        fuseDistance = 1;
        triggerTime = 0.05;

        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        effectFly = "SmallFire";
        cartridge = "";
        explosionEffects = "Flame_Explosion";
        craterEffects = "";
        audibleFire = 12;

        timeToLive = 3.5;
        tracerEndTime = 0.1;
        tracerScale = 0.01;
        tracerStartTime = 0.01;
        visibleFire = 32;
        visibleFireTime = 20;
    };

    class CLASS(Bullet_PlasmaBase): CLASS(Bullet_Base) {
        coefGravity = 0.01;
        airFriction = 0;
        deflecting = 0;
        cartridge = "";

        PLASMA_SOUNDS;
        PLASMA_EFFECTS;
    };

    class CLASS(Bullet_PlasmaRifle_Blue): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 16;
        caliber = 2;
        typicalSpeed = 890;
        dangerRadiusHit = 14;
        dangerRadiusBulletClose = 10;
        suppressionRadiusHit = 10;
        suppressionRadiusBulletClose = 8;
        cost = 6;

        tracerEndTime = 10;
        tracerScale = 1.1;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508, 660.4, 711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880, 915, 925};
    };
    class CLASS(Bullet_PlasmaRifle_Blue2): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 60;
        caliber = 3;
        typicalSpeed = 700;
        dangerRadiusHit = 14;
        dangerRadiusBulletClose = 10;
        suppressionRadiusHit = 10;
        suppressionRadiusBulletClose = 8;
        cost = 6;

        tracerEndTime = 10;
        tracerScale = 1.1;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508, 660.4, 711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 45.2;
        ACE_caliber = 12.585;
        ACE_muzzleVelocities[] = {880, 915, 925};
    };
    class CLASS(Bullet_PlasmaRifle_Red): CLASS(Bullet_PlasmaRifle_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaRifle_Green): CLASS(Bullet_PlasmaRifle_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };
    class CLASS(Bullet_PlasmaRifle_Yellow): CLASS(Bullet_PlasmaRifle_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        effectfly = "JLTS_plasma_yellow";
    };

    class CLASS(Bullet_PlasmaCarbine_Blue): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 10;
        caliber = 1;
        typicalSpeed = 820;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadiusHit = 8;
        suppressionRadiusBulletClose = 6;
        cost = 1.2;

        audibleFire = 40;
        timeToLive = 4;
        tracerEndTime = 10;
        tracerScale = 0.8;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.263};
        ACE_barrelLengths[] = {254,406.4,508,609.6,660.4,762};
        ACE_bulletLength = 32.893;
        ACE_bulletMass = 7.9704;
        ACE_caliber = 6.706;
        ACE_muzzleVelocities[] = {730,760,788,800,810,830};
    };
    class CLASS(Bullet_PlasmaCarbine_Blue2): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 18;
        caliber = 1;
        typicalSpeed = 820;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadiusHit = 8;
        suppressionRadiusBulletClose = 6;
        cost = 1.2;

        audibleFire = 40;
        timeToLive = 4;
        tracerEndTime = 10;
        tracerScale = 0.8;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.263};
        ACE_barrelLengths[] = {254,406.4,508,609.6,660.4,762};
        ACE_bulletLength = 32.893;
        ACE_bulletMass = 7.9704;
        ACE_caliber = 6.706;
        ACE_muzzleVelocities[] = {730,760,788,800,810,830};
    };
    class CLASS(Bullet_PlasmaCarbine_Blue3): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 13;
        caliber = 1;
        typicalSpeed = 820;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadiusHit = 8;
        suppressionRadiusBulletClose = 6;
        cost = 1.2;

        audibleFire = 40;
        timeToLive = 4;
        tracerEndTime = 10;
        tracerScale = 0.8;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.263};
        ACE_barrelLengths[] = {254,406.4,508,609.6,660.4,762};
        ACE_bulletLength = 32.893;
        ACE_bulletMass = 7.9704;
        ACE_caliber = 6.706;
        ACE_muzzleVelocities[] = {730,760,788,800,810,830};
    };
    class CLASS(Bullet_PlasmaCarbine_Red): CLASS(Bullet_PlasmaCarbine_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaCarbine_Green): CLASS(Bullet_PlasmaCarbine_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };
    class CLASS(Bullet_PlasmaCarbine_Yellow): CLASS(Bullet_PlasmaCarbine_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        effectfly = "JLTS_plasma_yellow";
    };

    class CLASS(Bullet_PlasmaSniper_Blue): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 24;
        caliber = 2.4;
        typicalSpeed = 910;
        dangerRadiusHit = -1;
        dangerRadiusBulletClose = 4;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        cost = 7;

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES);

        timeToLive = 7;
        tracerEndTime = 10;
        tracerScale = 0.8;
        tracerStartTime = 0.05;
        visibleFire = 5;
        visibleFireTime = 3;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508, 660.4, 711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880, 915, 925};
    };
    class CLASS(Bullet_PlasmaSniper_Blue2): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 48;
        caliber = 2.4;
        typicalSpeed = 910;
        dangerRadiusHit = -1;
        dangerRadiusBulletClose = 4;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        cost = 7;

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES);

        timeToLive = 7;
        tracerEndTime = 10;
        tracerScale = 0.8;
        tracerStartTime = 0.05;
        visibleFire = 5;
        visibleFireTime = 3;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508, 660.4, 711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880, 915, 925};
    };
    class CLASS(Bullet_PlasmaSniper_Blue3): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 48;
        caliber = 2.4;
        typicalSpeed = 1750;
        maxSpeed = 2500;
        dangerRadiusHit = -1;
        dangerRadiusBulletClose = 4;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        cost = 7;

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES);

        timeToLive = 7;
        tracerEndTime = 10;
        tracerScale = 0.8;
        tracerStartTime = 0.05;
        visibleFire = 5;
        visibleFireTime = 3;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508, 660.4, 711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880, 915, 925};
    };
    class CLASS(Bullet_PlasmaSniper_Red2): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 48;
        caliber = 2.4;
        typicalSpeed = 910;
        dangerRadiusHit = -1;
        dangerRadiusBulletClose = 4;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        cost = 7;

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES);

        timeToLive = 7;
        tracerEndTime = 10;
        tracerScale = 0.8;
        tracerStartTime = 0.05;
        visibleFire = 5;
        visibleFireTime = 3;

        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508, 660.4, 711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880, 915, 925};
    };
    class CLASS(Bullet_PlasmaSniper_Red): CLASS(Bullet_PlasmaSniper_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaSniper_Green): CLASS(Bullet_PlasmaSniper_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class CLASS(Bullet_PlasmaSniperAP_Blue): CLASS(Bullet_PlasmaSniper_Blue) {
        hit = 45;
        caliber = 15;
        ACE_caliber = 15;
        typicalSpeed = 700;
        ACE_bulletMass = 30;
    };
    class CLASS(Bullet_PlasmaSniperAP_Yellow): CLASS(Bullet_PlasmaSniperAP_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        effectfly = "JLTS_plasma_yellow";
    };

    class CLASS(Bullet_PlasmaMachineGun_Blue): CLASS(Bullet_PlasmaCarbine_Blue) {
        hit = 19;
        caliber = 2.5;
        tracerscale = 1.3;
    };
    class CLASS(Bullet_PlasmaMachineGun_Red): CLASS(Bullet_PlasmaMachineGun_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaMachineGun_Green): CLASS(Bullet_PlasmaMachineGun_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class CLASS(Bullet_PlasmaAutoRifle_Blue): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 19;
        caliber = 2.8;
        typicalSpeed = 890;
        dangerRadiusHit = 14;
        dangerRadiusBulletClose = 10;
        suppressionRadiusHit = 10;
        suppressionRadiusBulletClose = 8;
        cost = 6;

        timeToLive = 6;
        tracerEndTime = 10;
        tracerscale = 1.5;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ballisticCoefficients[] = {0.322};
        ACE_barrelLengths[] = {508,660.4,711.2};
        ACE_bulletLength = 39.573;
        ACE_bulletMass = 16.2;
        ACE_caliber = 8.585;
        ACE_muzzleVelocities[] = {880,915,925};
    };
    class CLASS(Bullet_PlasmaAutoRifle_Red): CLASS(Bullet_PlasmaAutoRifle_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaAutoRifle_Green): CLASS(Bullet_PlasmaAutoRifle_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class CLASS(Bullet_PlasmaPistol_Blue): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 5;
        caliber = 1.2;
        typicalSpeed = 380;
        dangerRadiusHit = 8;
        dangerRadiusBulletClose = 4;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        cost = 1.2;

        audibleFire = 40;
        timeToLive = 4;
        tracerEndTime = 10;
        tracerScale = 0.5;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.17};
        ACE_barrelLengths[] = {93.5,101.6,127,228.6};
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 7.452;
        ACE_caliber = 9.042;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {380,390,420,435};
    };
    class CLASS(Bullet_PlasmaPistol_Red): CLASS(Bullet_PlasmaPistol_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaPistol_Green): CLASS(Bullet_PlasmaPistol_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };

    class CLASS(Bullet_PlasmaScatter_Blue): CLASS(Bullet_PlasmaBase) {
        SCOPE_PUBLIC;

        hit = 20;
        caliber = 2;
        typicalSpeed = 400;
        dangerRadiusHit = 40;
        dangerRadiusBulletClose = 16;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        cost = 5;

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES);

        audibleFire = 40;
        timeToLive = 4;
        tracerEndTime = 10;
        tracerScale = 1;
        tracerStartTime = 0.05;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        simulationStep = 0.0001;
        submunitionAmmo = QCLASS(Bullet_PlasmaScatter_submunition_Blue);
        submunitionConeAngle = 1;
        submunitionConeType[] = {"poissondisc", 9};

        ACE_ballisticCoefficients[] = {0.263};
        ACE_barrelLengths[] = {254,406.4,508,609.6,660.4,762};
        ACE_bulletLength = 32.893;
        ACE_bulletMass = 7.9704;
        ACE_caliber = 6.706;
        ACE_muzzleVelocities[] = {730,760,788,800,810,830};
        fireSpreadAngle = 8;
        triggerTime = 0.0003; // Gives the shotgun pellet spread
    };
    class CLASS(Bullet_PlasmaScatter_Red): CLASS(Bullet_PlasmaScatter_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        submunitionAmmo = QCLASS(Bullet_PlasmaScatter_submunition_Red);
    };
    class CLASS(Bullet_PlasmaScatter_Green): CLASS(Bullet_PlasmaScatter_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
        submunitionAmmo = QCLASS(Bullet_PlasmaScatter_submunition_Green);
    };
    class CLASS(Bullet_PlasmaScatter_Yellow): CLASS(Bullet_PlasmaScatter_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        effectfly = "JLTS_plasma_yellow";
        submunitionAmmo = QCLASS(Bullet_PlasmaScatter_submunition_Yellow);
    };

    class CLASS(Bullet_PlasmaScatter_submunition_Blue): CLASS(Bullet_PlasmaPistol_Blue) {
        hit = 10;
    };
    class CLASS(Bullet_PlasmaScatter_submunition_Red): CLASS(Bullet_PlasmaScatter_submunition_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaScatter_submunition_Green): CLASS(Bullet_PlasmaScatter_submunition_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };
    class CLASS(Bullet_PlasmaScatter_submunition_Yellow): CLASS(Bullet_PlasmaScatter_submunition_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        effectfly = "JLTS_plasma_Yellow";
    };

    class CLASS(Bullet_PlasmaScatterHP_Blue): CLASS(Bullet_PlasmaScatter_Blue) {
        submunitionAmmo = QCLASS(Bullet_PlasmaScatterHP_submunition_Blue);
    };
    class CLASS(Bullet_PlasmaScatterHP_Red): CLASS(Bullet_PlasmaScatterHP_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        submunitionAmmo = QCLASS(Bullet_PlasmaScatterHP_submunition_Red);
    };
    class CLASS(Bullet_PlasmaScatterHP_Green): CLASS(Bullet_PlasmaScatterHP_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
        submunitionAmmo = QCLASS(Bullet_PlasmaScatterHP_submunition_Green);
    };
    class CLASS(Bullet_PlasmaScatterHP_Yellow): CLASS(Bullet_PlasmaScatterHP_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        effectfly = "JLTS_plasma_yellow";
        submunitionAmmo = QCLASS(Bullet_PlasmaScatterHP_submunition_Yellow);
    };

    class CLASS(Bullet_PlasmaScatterHP_submunition_Blue): CLASS(Bullet_PlasmaPistol_Blue) {
        hit = 20;
    };
    class CLASS(Bullet_PlasmaScatterHP_submunition_Red): CLASS(Bullet_PlasmaScatterHP_submunition_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
    };
    class CLASS(Bullet_PlasmaScatterHP_submunition_Green): CLASS(Bullet_PlasmaScatterHP_submunition_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
    };
    class CLASS(Bullet_PlasmaScatterHP_submunition_Yellow): CLASS(Bullet_PlasmaScatterHP_submunition_Blue) {
        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        effectfly = "JLTS_plasma_yellow";
    };

    class CLASS(Bullet_PlasmaStun): CLASS(Bullet_PlasmaPistol_Blue) {
        hit = 0;
        typicalSpeed = 30;
        dangerRadiusHit = -1;
        dangerRadiusBulletClose = -1;
        suppressionRadiusHit = -1;
        suppressionRadiusBulletClose = -1;

        aiAmmoUsageFlags = AMMO_USAGE_NONE;

        model = "\MRC\JLTS\weapons\Core\effects\stun.p3d";
        timetolive = 3;

        JLTS_isStunAmmo = TRUE;
    };

    class F_40mm_White;
    class CLASS(Flare_Base): F_40mm_White {
        SCOPE_PRIVATE;
    };

    class CLASS(Flare_Blue): CLASS(Flare_Base) {
        SCOPE_PUBLIC;
        lightColor[] = {0.25, 0.25, 0.5, 0.5};
    };

    class G_40mm_HE;
    class CLASS(Grenade_B2Blaster): G_40mm_HE {
        hit = 10;
        dangerRadiusHit = 30;
        indirectHit = 8;
        indirectHitRange = 6;
        explosionEffectsRadius = 20;
        suppressionRadiusHit = 30;

        typicalspeed = 30;
        visibleFireTime = 1;
        visibleFire = 0.5;
        audibleFire = 0.05;
        fuseDistance = 0;
        explosionTime = 5;
        timeToLive = 30;

        explosionEffects = "VehicleExplosionEffects";
        model = "\ls_weapons\grenades\thermalDet\ls_grenade_thermalDet.p3d";
        soundFly[] = {"\ls_sounds\weapons\grenade\thermalDet_classC_fuse.wss", 3, 1, 40};

        ace_frag_enabled = FALSE;
        ace_frag_skip = FALSE;
        ace_frag_force = FALSE;
    };
    class CLASS(Grenade_HE): G_40mm_HE {
        hit = 200;
        dangerRadiusHit = 15;
        indirectHit = 15;
        indirectHitRange = 6;
        explosionEffectsRadius = 20;
        suppressionRadiusHit = 30;

        typicalspeed = 30;
        visibleFireTime = 1;
        visibleFire = 0.5;
        audibleFire = 0.05;
        fuseDistance = 0;
        explosionTime = 5;
        timeToLive = 30;

        explosionEffects = "M136_Explode";
        craterEffects = "M136_Smoke";
        model = "\SWLW_clones\machineguns\Z6\Z6_g_mag.p3d";
        soundFly[] = {"\ls_sounds\weapons\grenade\thermalDet_classC_fuse.wss", 3, 1, 40};

        ace_frag_enabled = FALSE;
        ace_frag_skip = FALSE;
        ace_frag_force = FALSE;
    };

    // TODO: Update to inherit from base KC bullet
    class SWLW_ammo_40mm_at;
    class CLASS(Bullet_Plasma40mm_AT): SWLW_ammo_40mm_at {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        craterWaterEffects = "ImpactEffectsWaterExplosion";

        hit = 800;
        typicalSpeed = 1550;

        submunitionAmmo = QCLASS(Bullet_Plasma40mm_ATSubmunition);
        submunitionInitialOffset[] = {0,0, -0.5};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
    };
    class CLASS(Bullet_Plasma40mm): SWLW_ammo_40mm_at {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        craterWaterEffects = "ImpactEffectsWaterExplosion";

        hit = 200;
        typicalSpeed = 1550;

        submunitionAmmo = QCLASS(Bullet_Plasma40mm_Submunition);
        submunitionInitialOffset[] = {0,0, -0.5};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
    };

    class ammo_Penetrator_Titan_AT;
    class CLASS(Bullet_Plasma40mm_ATSubmunition): ammo_Penetrator_Titan_AT {
        hit = 650;
        caliber = 60;

        thrust = 210;
        thrustTime = 1.5;
        typicalSpeed = 1000;
    };

    class RocketBase;
    class CLASS(Rocket_Base): RocketBase {
        SCOPE_PUBLIC;

        hit = 150;
        indirectHit = 100;
        indirectHitRange = 10;
        cost = 100;
        maxSpeed = 140;
        explosive = 1;
        fuseDistance = 10;
        initTime = 0;
        maneuvrability = 0;
        airFriction = 0.075;
        sideAirFriction = 0.075;
        airLock = 0;
        irLock = 1;

        thrust = 500;
        thrustTime = 0.1;
        timeToLive = 10;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        warheadName = "TandemHEAT";
        simulationStep = 0.02;

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_VEHICLES + AMMO_USAGE_AIRCRAFT + AMMO_USAGE_ARMORED_VEHICLES);
        allowAgainstInfantry = FALSE;

        model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
        effectsMissile = "EmptyEffect";
        explosionEffects = "M136_Explode";
        craterEffects = "M136_Smoke";
        effectsMissileInit = "";

        submunitionAmmo = "";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;

        multiSoundHit[] = {"soundHit1", 0.34, "soundHit2", 0.33, "soundHit3", 0.33};
        soundFly[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32", 0.316228, 1.5, 900};
        soundHit1[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01", 2.51189, 1, 1800};
        soundHit2[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02", 2.51189, 1, 1800};
        soundHit3[] = {"\A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03", 2.51189, 1, 1800};
        soundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};

        class CamShakeFire {
            distance = 35.7771;
            duration = 0.8;
            frequency = 20;
            power = 2.11474;
        };
        class CamShakePlayerFire {
            distance = 1;
            duration = 0.1;
            frequency = 20;
            power = 1;
        };
        class CamShakeHit {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 110;
        };
        class CamShakeExplode {
            distance = 99.3296;
            duration = 1.4;
            frequency = 20;
            power = 11;
        };
    };
    class CLASS(Bullet_Plasma_Z7): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;
        // Most of the properties probably aren't needed, but are included to match 3AS_Chaingun_Ammo

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES + AMMO_USAGE_ARMORED_VEHICLES + AMMO_USAGE_AIRCRAFT);
        allowAgainstInfantry = TRUE;

        hit = 80 ;
        indirectHit = 12;
        indirectHitRange = 4;
        caliber = 1.6;
        ACE_caliber = 7.823; // ! Must be 0 to not immediately lose your hearing
        cost = 2000;
        coefGravity = 0.01;
        explosive = 1.8;
        maneuvrability = 4;
        airFriction = -0.00078;
        cmImmunity = 1;
        timeToLive = 4;
        typicalSpeed = 1050;
        maxSpeed = 1050;
        airLock = 1;
        proximityExplosionDistance = 5;

        model = "ls_weapons_core\Effects\laser_blue.p3d";
        effectfly = "SWLW_plasma_blue";
        ExplosionEffects = "25mm_Explode";
        craterEffects = "SWLW_plasma_he_impact";

        soundSetExplosion[] = {};
        audibleFire = 80;
        whistleDist = 20;
        PLASMA_SOUNDS;

        deleteParentWhenTriggered = FALSE;
        flightProfiles[] = {"Direct"};
        fuseDistance = 0;
        initTime = 0;
        irLock = 0;
        maxControlRange = 600;
        thrust = 210;
        thrustTime = 1.5;

        missileKeepLockedCone = 300;
        missileLockCone = 5;
        missileLockMaxDistance = 800;
        missileLockMaxSpeed = 35;
        missileLockMinDistance = 20;

        simulationStep = 0.02;

        trackLead = 1;
        triggerDistance = 2.5;
        triggerOnImpact = 1;
        weaponLockSystem = QUOTE(LOCK_TYPE_VISUAL + LOCK_TYPE_MISSILE);

        class CamShakeExplode {
            distance = 91.3296;
            duration = 1.4;
            frequency = 20;
            power = 11;
        };

        class CamShakeHit {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 110;
        };

        class CamShakeFire {
            distance = 1;
            duration = 1.2;
            frequency = 18;
            power = 0.8;
        };

        class CamShakePlayerFire {
            distance = 1;
            duration = 0.1;
            frequency = 20;
            power = 2;
        };
    };
    class CLASS(Bullet_Plasma_Z7_Red): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;
        // Most of the properties probably aren't needed, but are included to match 3AS_Chaingun_Ammo

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES + AMMO_USAGE_ARMORED_VEHICLES + AMMO_USAGE_AIRCRAFT);
        allowAgainstInfantry = TRUE;

        hit = 80 ;
        indirectHit = 12;
        indirectHitRange = 4;
        caliber = 1.6;
        ACE_caliber = 7.823; // ! Must be 0 to not immediately lose your hearing
        cost = 2000;
        coefGravity = 0.01;
        explosive = 1.8;
        maneuvrability = 4;
        airFriction = -0.00078;
        cmImmunity = 1;
        timeToLive = 4;
        typicalSpeed = 1050;
        maxSpeed = 1050;
        airLock = 1;
        proximityExplosionDistance = 5;

        model = "ls_weapons_core\Effects\laser_red.p3d";
        effectfly = "SWLW_plasma_red";
        ExplosionEffects = "25mm_Explode";
        craterEffects = "SWLW_plasma_he_impact";

        soundSetExplosion[] = {};
        audibleFire = 80;
        whistleDist = 20;
        PLASMA_SOUNDS;

        deleteParentWhenTriggered = FALSE;
        flightProfiles[] = {"Direct"};
        fuseDistance = 0;
        initTime = 0;
        irLock = 0;
        maxControlRange = 600;
        thrust = 210;
        thrustTime = 1.5;


        missileKeepLockedCone = 300;
        missileLockCone = 5;
        missileLockMaxDistance = 800;
        missileLockMaxSpeed = 35;
        missileLockMinDistance = 20;

        simulationStep = 0.02;

        trackLead = 1;
        triggerDistance = 2.5;
        triggerOnImpact = 1;
        weaponLockSystem = QUOTE(LOCK_TYPE_VISUAL + LOCK_TYPE_MISSILE);

        class CamShakeExplode {
            distance = 91.3296;
            duration = 1.4;
            frequency = 20;
            power = 11;
        };

        class CamShakeHit {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 110;
        };

        class CamShakeFire {
            distance = 1;
            duration = 1.2;
            frequency = 18;
            power = 0.8;
        };

        class CamShakePlayerFire {
            distance = 1;
            duration = 0.1;
            frequency = 20;
            power = 2;
        };
    };
    class CLASS(Bullet_Plasma_Z8): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;
        // Most of the properties probably aren't needed, but are included to match 3AS_Chaingun_Ammo

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES + AMMO_USAGE_ARMORED_VEHICLES + AMMO_USAGE_AIRCRAFT);
        allowAgainstInfantry = TRUE;

        hit = 120;
        indirectHit = 25;
        indirectHitRange = 5;
        caliber = 2;
        ACE_caliber = 0; // ! Must be 0 to not immediately lose your hearing
        cost = 500;
        coefGravity = 0.01;
        explosive = 0.2;
        maneuvrability = 4;
        airFriction = 0;
        cmImmunity = 0.2;
        timeToLive = 4;
        typicalSpeed = 1050;
        maxSpeed = 1050;
        airLock = 0;
        proximityExplosionDistance = 5;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        effectsMissile = "JLTS_plasma_blue";
        ExplosionEffects = "25mm_Explode";
        craterEffects = "M136_Smoke";

        soundSetExplosion[] = {};
        audibleFire = 80;
        whistleDist = 20;
        PLASMA_SOUNDS;

        deleteParentWhenTriggered = FALSE;
        flightProfiles[] = {"Direct"};
        fuseDistance = 0;
        initTime = 0;
        irLock = 0;
        maxControlRange = 600;
        thrust = 500;
        thrustTime = 3.4;

        missileKeepLockedCone = 300;
        missileLockCone = 5;
        missileLockMaxDistance = 800;
        missileLockMaxSpeed = 35;
        missileLockMinDistance = 20;

        simulationStep = 0.02;

        trackLead = 1;
        triggerDistance = 2.5;
        triggerOnImpact = 1;
        weaponLockSystem = QUOTE(LOCK_TYPE_VISUAL + LOCK_TYPE_MISSILE);

        class CamShakeExplode {
            distance = 91.3296;
            duration = 1.4;
            frequency = 20;
            power = 11;
        };

        class CamShakeHit {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 110;
        };

        class CamShakeFire {
            distance = 1;
            duration = 1.2;
            frequency = 18;
            power = 0.8;
        };

        class CamShakePlayerFire {
            distance = 1;
            duration = 0.1;
            frequency = 20;
            power = 2;
        };
    };
    class CLASS(Bullet_Plasma_Z8_Red): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;
        // Most of the properties probably aren't needed, but are included to match 3AS_Chaingun_Ammo

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES + AMMO_USAGE_ARMORED_VEHICLES + AMMO_USAGE_AIRCRAFT);
        allowAgainstInfantry = TRUE;

        hit = 120;
        indirectHit = 25;
        indirectHitRange = 5;
        caliber = 2;
        ACE_caliber = 0; // ! Must be 0 to not immediately lose your hearing
        cost = 500;
        coefGravity = 0.01;
        explosive = 0.2;
        maneuvrability = 4;
        airFriction = 0;
        cmImmunity = 0.2;
        timeToLive = 4;
        typicalSpeed = 1050;
        maxSpeed = 1050;
        airLock = 0;
        proximityExplosionDistance = 5;

        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        effectsMissile = "JLTS_plasma_red";
        explosionEffects = "25mm_Explode";
        craterEffects = "M136_Smoke";

        soundSetExplosion[] = {};
        audibleFire = 80;
        whistleDist = 20;
        PLASMA_SOUNDS;

        deleteParentWhenTriggered = FALSE;
        flightProfiles[] = {"Direct"};
        fuseDistance = 0;
        initTime = 0;
        irLock = 0;
        maxControlRange = 600;
        thrust = 500;
        thrustTime = 3.4;

        missileKeepLockedCone = 300;
        missileLockCone = 5;
        missileLockMaxDistance = 800;
        missileLockMaxSpeed = 35;
        missileLockMinDistance = 20;

        simulationStep = 0.02;

        trackLead = 1;
        triggerDistance = 2.5;
        triggerOnImpact = 1;
        weaponLockSystem = QUOTE(LOCK_TYPE_VISUAL + LOCK_TYPE_MISSILE);

        class CamShakeExplode {
            distance = 91.3296;
            duration = 1.4;
            frequency = 20;
            power = 11;
        };

        class CamShakeHit {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 110;
        };

        class CamShakeFire {
            distance = 1;
            duration = 1.2;
            frequency = 18;
            power = 0.8;
        };

        class CamShakePlayerFire {
            distance = 1;
            duration = 0.1;
            frequency = 20;
            power = 2;
        };
    };

    class ammo_Penetrator_Base;
    class CLASS(Rocket_Submunition_Base): ammo_Penetrator_Base {
        SCOPE_PUBLIC;

        hit = 480;
        caliber = 43.3333;
        warheadName = "TandemHEAT";
    };

    class MissileCore;
    class MissileBase: MissileCore {
        class Components;
    };
    class CLASS(Missile_Base): MissileBase {
        SCOPE_PUBLIC;

        hit = 80;
        indirectHit = 60;
        indirectHitRange = 6;
        cost = 1000;
        maxSpeed = 850;
        ace_frag_skip = 1;

        proximityExplosionDistance = 10;
        missileKeepLockedCone = 75;
        missileLockCone = 4;
        missileLockMaxDistance = 3500;
        missileLockMaxSpeed = 250;
        missileLockMinDistance = 100;

        fuseDistance = 50;
        initTime = 0.25;
        maneuvrability = 15;
        airFriction = 0.145;
        sideAirFriction = 0.1;
        airLock = 2;
        irLock = 1;

        thrust = 380;
        thrustTime = 2.25;
        timeToLive = 15;
        trackLead = 0.95;

        warheadName = "HE";
        simulationStep = 0.002;

        aiAmmoUsageFlags = AMMO_USAGE_AIRCRAFT;

        model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl_fly.p3d";
        explosionEffects = "AA_Explode";
        craterEffects = "AA_Smoke";
        soundSetExplosion[] = {"RocketsHeavy_Exp_SoundSet", "RocketsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};

        class CamShakeFire {
            distance = 61.9677;
            duration = 1.6;
            frequency = 20;
            power = 2.78316;
        };
        class CamShakePlayerFire {
            distance = 1;
            duration = 0.1;
            frequency = 20;
            power = 3;
        };
        class CamShakeHit {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 110;
        };
        class CamShakeExplode {
            distance = 147.905;
            duration = 2;
            frequency = 20;
            power = 22;
        };

        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        angleRangeHorizontal = 7;
                        angleRangeVertical = 4.5;
                        groundNoiseDistanceCoef = 0.2;
                        maxGroundNoiseDistance = 50;
                        maxTrackableSpeed = 250;

                        class GroundTarget {
                            maxRange = 2500;
                            minRange = 500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        class AirTarget {
                            maxRange = 3500;
                            minRange = 500;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                    };
                };
            };
        };
    };

    class GrenadeHand;
    class CLASS(Grenade_Base_Ammo): GrenadeHand {
        aiAmmoUsageFlags = AMMO_USAGE_INFANTRY;
    };

    class SmokeShell;
    class CLASS(GrenadeSmoke_Base_Ammo): SmokeShell {};
};