class CfgAmmo
{
    class Sh_120mm_APFSDS_Tracer_Red;
    class BNA_KC_120_AT_Ammo: Sh_120mm_APFSDS_Tracer_Red
    {
        //simulation = "shotShell";
        model = "swlw_main\Effects\laser_red.p3d";
        effectfly = "SWLW_plasma_red";
        coefgravity = 0;
    };

    class Sh_120mm_HE_Tracer_Red;
    class BNA_KC_120_HE_Ammo: Sh_120mm_HE_Tracer_Red
    {
        //simulation = "shotShell";
        model = "swlw_main\Effects\laser_red.p3d";
        effectfly = "SWLW_plasma_red";
        coefgravity = 0;
    };

    class Sh_120mm_HEAT_MP_T_Red;
    class BNA_KC_120_HEAT_Ammo: Sh_120mm_HEAT_MP_T_Red
    {
        //simulation = "shotShell";
        model = "swlw_main\Effects\laser_red.p3d";
        effectfly = "SWLW_plasma_red";
        coefgravity = 0;
    };

    class B_127x99_Ball;
    class BNA_KC_Coax_Ammo: B_127x99_Ball
    {
        model = "ls_weapons_core\Effects\laser_blue.p3d";
        effectfly = "ls_plasma_blue";
        coefgravity = 0;
    };

    class B_20mm_Tracer_Red;
    class BNA_KC_20mm_Ammo: B_20mm_Tracer_Red
    {
        model = "ls_weapons_core\Effects\laser_blue.p3d";
        effectfly = "ls_plasma_blue";
        coefgravity = 0;
    };
    class Sh_105mm_HEAT_MP;
    class BNA_KC_105mm_Ammo: Sh_105mm_HEAT_MP
    {
        model = "3as\3AS_Weapons\Data\tracer_shell_Green.p3d";
        coefgravity = 0;
    };
    class B_40mm_GPR_Tracer_Red;
    class BNA_KC_40mm_GPR_Ammo: B_40mm_GPR_Tracer_Red
    {
        model = "ls_weapons_core\Effects\laser_blue.p3d";
        effectfly = "ls_plasma_blue";
        coefgravity = 0;
    };
    class B_40mm_APFSDS_Tracer_Red;
    class BNA_KC_40mm_APFSDS_Ammo: B_40mm_APFSDS_Tracer_Red
    {
        model = "swlw_main\Effects\laser_red.p3d";
        effectfly = "SWLW_plasma_red";
        coefgravity = 0;
    };

    class 3AS_ATRT_bluePlasma;
    class BNA_KC_ATRT_Turret_Ammo: 3AS_ATRT_bluePlasma
    {
        caliber = 6; // How much geometry the bullet can pass through
        hit = 120;      // Damage when bullet speed is >= typicalSpeed
        typicalSpeed = 400;
        coefgravity = 0;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
    };
};