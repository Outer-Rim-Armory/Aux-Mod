class CfgVehicles {
    class 3AS_CIS_N99_F;
    class 3AS_N99: 3AS_CIS_N99_F {
        class Turrets {
            class MainTurret;
        };
    };
    class CLASS(N99Tank_Base): 3AS_N99 {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "N99 Snail Tank";

        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"3AS_N99Cannon","SmokeLauncher"};
                magazines[] = {
                    "3AS_48Rnd_N99_HEAT",
                    "3AS_48Rnd_N99_HEAT",
                    "3AS_48Rnd_N99_HEAT",
                    "3AS_48Rnd_N99_HEAT",
                    "SmokeLauncherMag"
                };
            };
        };
    };
};
