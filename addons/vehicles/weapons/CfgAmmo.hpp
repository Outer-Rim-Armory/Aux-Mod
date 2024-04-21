class CfgAmmo {
    // TODO: Make base bullet classes for vehicles
    // Will be done Some Day™️, but not today

    // TODO: Update flyby sounds with JLTS and/or 3AS sounds. See weapons addon for property/class names

    class Sh_120mm_HEAT_MP_T_Red;
    class CLASS(Bullet_PlasmaBlitz_HEAT): Sh_120mm_HEAT_MP_T_Red {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class Sh_120mm_HE_Tracer_Red;
    class CLASS(Bullet_PlasmaBlitz_HE): Sh_120mm_HE_Tracer_Red {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class Sh_120mm_APFSDS_Tracer_Red;
    class CLASS(Bullet_PlasmaBlitz_AT): Sh_120mm_APFSDS_Tracer_Red {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class B_127x99_Ball;
    class CLASS(Bullet_PlasmaCoax_Blue): B_127x99_Ball {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };

    class B_20mm_Tracer_Red;
    class CLASS(Bullet_PlasmaGatling_Galaxy_Blue): B_20mm_Tracer_Red {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };
    class Sh_105mm_HEAT_MP;
    class CLASS(Bullet_PlasmaCannon_Galaxy_Green): Sh_105mm_HEAT_MP {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
        coefGravity = 0.01;
    };
    class B_40mm_GPR_Tracer_Red;
    class CLASS(Bullet_PlasmaAutocannon_Galaxy_GPR_Blue): B_40mm_GPR_Tracer_Red {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };
    class B_40mm_APFSDS_Tracer_Red;
    class CLASS(Bullet_PlasmaAutocannon_Galaxy_APFSDS_Red): B_40mm_APFSDS_Tracer_Red {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class 3AS_ATRT_bluePlasma;
    class CLASS(Bullet_PlasmaATRT_Blue): 3AS_ATRT_bluePlasma {
        hit = 120;
        caliber = 6;
        typicalSpeed = 400;
        coefGravity = 0.01;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";

        tracerScale = 1;
    };

    class Sh_155mm_AMOS;
    class CLASS(Shell_PlasmaMortar_82mm_HE): Sh_155mm_AMOS {
        hit = 340;
        dangerRadiusHit = 750;
        indirectHit = 125;
        indirectHitRange = 30;
        suppressionRadiusHit = 75;
        explosive = 0.8;

        cost = 200;

        effectFly = "3AS_PlasmaBolt_Medium_Blue_Fly";
        effectFlare = "FlareShell";
        effectsFire = "CannonFire";
        effectsMissile = "ExplosionEffects";
        effectsSmoke = "SmokeShellWhite";
        explosionEffects = "MortarExplosion";

        MORTAR_SOUND_AMMO;

        class CamShakeExplode {
            distance = 216.443;
            duration = 1.8;
            frequency = 20;
            power = 16.4;
        };
        class CamShakeFire {
            distance = 72.4431;
            duration = 1.8;
            frequency = 20;
            power = 3.00922;
        };
        class CamShakeHit {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 82;
        };
        class CamShakePlayerFire {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 82;
        };
    };

    class ShotDeployBase;
    class CLASS(Shell_Mortar_SmokeWhite): ShotDeployBase {
        model = "\A3\weapons_f\ammo\shell";
        submunitionAmmo = "SmokeShellArty";

        effectFlare = "FlareShell";
        effectsFire = "CannonFire";
        effectsMissile = "ExplosionEffects";
        effectsSmoke = "SmokeShellWhite";
        explosionEffects = "MortarExplosion";

        MORTAR_SOUND_AMMO;
    };
    class CLASS(Shell_Mortar_SmokeBlue): CLASS(Shell_Mortar_SmokeWhite) {
        submunitionAmmo = QCLASS(Shell_Mortar_SmokeBlue_Submunition);
    };
    class CLASS(Shell_Mortar_SmokeRed): CLASS(Shell_Mortar_SmokeWhite) {
        submunitionAmmo = QCLASS(Shell_Mortar_SmokeRed_Submunition);
    };

    class SmokeShellArty;
    class CLASS(Shell_Mortar_SmokeBlue_Submunition): SmokeShellArty {
        effectsSmoke = QCLASS(Effect_Mortar_SmokeShellBlue);
    };
    class CLASS(Shell_Mortar_SmokeRed_Submunition): SmokeShellArty {
        effectsSmoke = QCLASS(Effect_Mortar_SmokeShellRed);
    };


    class Bo_GBU12_LGB;
    class CLASS(Bomb_Proton): Bo_GBU12_LGB {
        effectsMissile = QCLASS(Effect_E60_Fly);

        thrust = 1;
        thrustTime = 100;
    };
};