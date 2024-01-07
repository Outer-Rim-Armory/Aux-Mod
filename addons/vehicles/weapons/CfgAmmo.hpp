class CfgAmmo
{
    // TODO: Make base bullet classes for vehicles
    // Will be done Some Day™️, but not today

    // TODO: Update flyby sounds with JLTS and/or 3AS sounds. See weapons addon for property/class names

    class Sh_120mm_HEAT_MP_T_Red;
    class CLASS(Bullet_PlasmaBlitz_HEAT): Sh_120mm_HEAT_MP_T_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class Sh_120mm_HE_Tracer_Red;
    class CLASS(Bullet_PlasmaBlitz_HE): Sh_120mm_HE_Tracer_Red
    {

        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class Sh_120mm_APFSDS_Tracer_Red;
    class CLASS(Bullet_PlasmaBlitz_AT): Sh_120mm_APFSDS_Tracer_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
        effectfly = "JLTS_plasma_red";
        coefGravity = 0.01;
    };

    class B_127x99_Ball;
    class CLASS(Bullet_PlasmaCoax_Blue): B_127x99_Ball
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };

    class B_20mm_Tracer_Red;
    class CLASS(Bullet_PlasmaGatling_Galaxy_Blue): B_20mm_Tracer_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };
    class Sh_105mm_HEAT_MP;
    class CLASS(Bullet_PlasmaCannon_Galaxy_Green): Sh_105mm_HEAT_MP
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
        effectfly = "JLTS_plasma_green";
        coefGravity = 0.01;
    };
    class B_40mm_GPR_Tracer_Red;
    class CLASS(Bullet_PlasmaAutocannon_Galaxy_GPR_Blue): B_40mm_GPR_Tracer_Red
    {
        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
        coefGravity = 0.01;
    };
    class B_40mm_APFSDS_Tracer_Red;
    class CLASS(Bullet_PlasmaAutocannon_Galaxy_APFSDS_Red): B_40mm_APFSDS_Tracer_Red
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