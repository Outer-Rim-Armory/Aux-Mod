class CfgAmmo {
    class CLASS(Rocket_Base);
    class CLASS(Rocket_RPS7_HE): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;

        hit = 200;
        indirectHit = 50;
        indirectHitRange = 6;
        irLock = 0;
        warheadName = "HE";

        aiAmmoUsageFlags = QUOTE(AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES);

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket.p3d";
        explosionEffects = "MortarExplosion";
        craterEffects = "ArtyShellCrater";

        ace_frag_charge = 105;
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
        ace_frag_enabled = 1;
        ace_frag_gurney_c = 1400;
        ace_frag_gurney_k = "3/5";
        ace_frag_metal = 200;
        ace_vehicle_damage_incendiary = 0.2;

        class CamShakeExplode {
            distance = 123.905;
            duration = 2;
            frequency = 20;
            power = 22;
        };
    };
    class CLASS(Rocket_RPS7): CLASS(Rocket_Base) {
        SCOPE_PUBLIC;
        submunitionAmmo = QCLASS(Rocket_RPS7_Submunition);
    };

    class CLASS(Rocket_Submunition_Base);
    class CLASS(Rocket_RPS7_Submunition): CLASS(Rocket_Submunition_Base) {
        SCOPE_PUBLIC;
    };
};