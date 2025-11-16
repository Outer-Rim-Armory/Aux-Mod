class CfgAmmo {
    // Attempting to inherit from Rocket_base caused framerate issues when firing.
    // Instead, I just made a "fake rocket" by modifying a normal ammo type.
    class CLASS(Bullet_Base);
    class CLASS(Rocket_B2Blaster): CLASS(Bullet_Base) {
        SCOPE_PUBLIC;
        aiAmmoUsageFlags = 448;

        caliber = 3;
        cost = 200;
        hit = 100;
        explosive = 0.8;
        dangerRadiusHit = 40;
        dangerRadiusBulletClose = 16;
        indirectHit = 5;
        indirectHitRange = 3;
        suppressionRadiusHit = 10;
        suppressionRadiusBulletClose = 8;
        coefGravity = 0.01;
        typicalSpeed = 30;

        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        muzzleEffect = "BIS_fnc_effectFiredRocket";
        explosionEffects = "ATMissileExplosion";
        nameSound = "missiles";
        effectFly = QCLASS(Effect_B2Blaster_rocket_Fly);

        airlock = TRUE;
        irTarget = TRUE;
        cartridge = "";
        tracerStartTime = 0;
        tracerEndTime = 10;
        tracerScale = 1;
        visibleFireTime = 3;

        ace_ballisticCoefficients[] = {0.322};
        ace_barrelLengths[] = {508, 660.4, 711.2};
        ace_bulletLength = 39.573;
        ace_bulletMass = 16.2;
        ace_caliber = 8.585;
        ace_muzzleVelocities[] = {880, 915, 925};
    };
};
