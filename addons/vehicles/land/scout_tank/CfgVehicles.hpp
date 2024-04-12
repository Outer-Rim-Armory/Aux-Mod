class CfgVehicles {
    class lsd_ast_base;
    class lsd_car_ast: lsd_ast_base {
        class Turrets {
            class MainTurret;
        };
        class AnimationSources;
    };
    class CLASS(ScoutTank_Base): lsd_car_ast {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "Armored Scout Tank";

        editorSubcategory = QCLASS(EdSubCat_Speeders);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,ScoutTank_Base);

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"ls_hmp_gun", "ls_hmp_gun_2"};
                magazines[] = {
                    "200Rnd_hmp_he_mag",
                    "200Rnd_hmp_he_mag",
                    "200Rnd_hmp_apfsds_mag",
                    "200Rnd_hmp_apfsds_mag"
                };
            };
        };

        class AnimationSources: AnimationSources {
            class recoil_cannon_source {
                initPhase = -1;
                source = "reload";
                weapon = "ls_hmp_gun_2";
            };
        };
    };
};