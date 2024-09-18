class CfgAmmo {
    class CLASS(missile_base);
    class CLASS(bullet_plasma_Z8_yellow): CLASS(missile_base) {
        SCOPE_PUBLIC;
        // Most of the properties probably aren't needed, but are included to match 3AS_Chaingun_Ammo

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES + AMMO_USAGE_ARMORED_VEHICLES + AMMO_USAGE_AIRCRAFT);
        allowAgainstInfantry = TRUE;

        hit = 18;
        indirectHit = 0;
        indirectHitRange = 0;
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

        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        effectfly = "JLTS_plasma_yellow";
        effectsMissile = "JLTS_plasma_yellow";
        PLASMA_EFFECTS;

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
};