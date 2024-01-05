class CfgAmmo
{
    class Sh_120mm_APFSDS_Tracer_Red;
    class BNA_KC_120_AT_Ammo: Sh_120mm_APFSDS_Tracer_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class Sh_120mm_HE_Tracer_Red;
    class BNA_KC_120_HE_Ammo: Sh_120mm_HE_Tracer_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class Sh_120mm_HEAT_MP_T_Red;
    class BNA_KC_120_HEAT_Ammo: Sh_120mm_HEAT_MP_T_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class B_127x99_Ball;
    class BNA_KC_Coax_Ammo: B_127x99_Ball
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };

    class B_20mm_Tracer_Red;
    class BNA_KC_20mm_Ammo: B_20mm_Tracer_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };
    class Sh_105mm_HEAT_MP;
    class CLASS(Bullet_PlasmaCannon_105mm_Green): Sh_105mm_HEAT_MP
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
        coefGravity = 0.01;
    };
    class B_40mm_GPR_Tracer_Red;
    class BNA_KC_40mm_GPR_Ammo: B_40mm_GPR_Tracer_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };
    class B_40mm_APFSDS_Tracer_Red;
    class BNA_KC_40mm_APFSDS_Ammo: B_40mm_APFSDS_Tracer_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class 3AS_ATRT_bluePlasma;
    class CLASS(Bullet_PlasmaATRT_Blue): 3AS_ATRT_bluePlasma
    {
        caliber = 6;
        hit = 120;
        typicalSpeed = 400;
        coefGravity = 0.01;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
    };
};