class CfgAmmo {
    class CLASS(Rocket_Base);
    class CLASS(Rocket_E60R_HE): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;

        ace_frag_charge = 210;
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_enabled = 1;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = 0.6;
        ace_frag_metal = 400;

        aiAmmoUsageFlags = 192;

        craterEffects = "ArtyShellCrater";
        explosionEffects = "MortarExplosion";
        hit = 200;
        indirectHit = 50;
        indirectHitRange = 6;
        irLock = FALSE;

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket.p3d";
        warheadName = "HE";

        thrust = 100;
        thrustTime = 5;
        timeToLive = 5;
        effectsMissile = QCLASS(Effect_E60_Fly);
        soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 6, 1.5, 700};
    };

    class CLASS(Rocket_E60R_AT): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;

        aiAmmoUsageFlags = 192;
        indirectHit = 28;
        indirectHitRange = 3;
        irLock = 0;

        thrust = 100;
        thrustTime = 5;
        timeToLive = 5;
        effectsMissile = QCLASS(Effect_E60_Fly);
        soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 6, 1.5, 700};
        submunitionAmmo = QCLASS(Rocket_E60R_AT_Submunition);
    };

    class CLASS(Rocket_Submunition_Base);
    class CLASS(Rocket_E60R_AT_Submunition): CLASS(Rocket_Submunition_Base) {
        SCOPE_PUBLIC;
        hit = 480;
        caliber = 43.3333;

        thrust = 210;
        thrustTime = 1.5;
        typicalSpeed = 1000;
    };

    class CLASS(Missile_Base);
    class CLASS(Missile_E60R_AA): CLASS(Missile_Base) {
        SCOPE_PUBLIC;

        cmImmunity = 0.5;
        effectsMissile = QCLASS(Effect_E60_Fly);
        soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1", 6, 1.5, 700};
    };
};
