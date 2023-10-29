#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class lsd_ast_base;
    class lsd_car_ast: lsd_ast_base
    {
        class Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };
    class BNA_KC_AST_Base: lsd_car_ast
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Armored Scout Tank";

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"ls_hmp_gun", "ls_hmp_gun_2"};
                magazines[] =
                {
                    "200rnd_hmp_he_mag",
                    "200rnd_hmp_he_mag",
                    "200rnd_hmp_apfsds_mag",
                    "200rnd_hmp_apfsds_mag"
                };
            };
        };

        class AnimationSources: AnimationSources
        {
            class recoil_cannon_source
            {
                initPhase = -1;
                source = "reload";
                weapon = "ls_hmp_gun_2";
            };
        };
    };
};