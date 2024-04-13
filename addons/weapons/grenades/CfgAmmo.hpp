class CfgAmmo {
    class CLASS(Grenade_Base_Ammo);
    class CLASS(Grenade_EMP_Ammo): CLASS(Grenade_Base_Ammo) {
        GVAR(ammoType) = AMMO_TYPE_EMP;
        hit = 0.01;
        indirectHit = 0.01;
        indirectHitRange = 10;
        explosive = 0.01;
        explosionTime = 5;
        JLTS_isEMPAmmo = FALSE;

        ace_frag_enabled = FALSE;
        ace_frag_skip = TRUE;
        ace_frag_metal = 0;
        ace_frag_charge = 0;

        model = "\ls_weapons\grenades\thermalDet\ls_grenade_thermalDet.p3d";

        // Sound and visual effects
        ace_grenades_pullPinSound[] = {"\ls_sounds\weapons\grenade\pin.wss", 3, 1, 10};
        soundFly[] = {"\ls_sounds\weapons\grenade\thermalDet_classC_fuse.wss", 3, 1, 40};
        soundSetExplosion[] = {};

        explosionEffects = QCLASS(Effect_GrenadeEMP_Explosion);
        explosionEffectRadius = 3;
        explosionForceCoef = 0;

        craterEffects = "";
        craterShape = "";

        aiAmmoUsageFlags = AMMO_USAGE_NONE;
    };

    class CLASS(GrenadeSmoke_Base_Ammo);
    class CLASS(Grenade_Bacta_Ammo): CLASS(GrenadeSmoke_Base_Ammo) {
        GVAR(ammoType) = AMMO_TYPE_BACTA;
        simulation = "shotSmoke";
        deflectionSlowDown = 0;

        model = "\3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
        effectsSmoke = QCLASS(Effect_GrenadeBacta);
        smokeColor[] = {0.38, 0.54, 0.91, 0.35};

        aiAmmoUsageFlags = AMMO_USAGE_NONE;
    };
};