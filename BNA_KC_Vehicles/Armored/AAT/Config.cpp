#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Tank_F;
    class 3AS_AAT_base_F: Tank_F
    {
        class Turrets;
    };
    class 3AS_CIS_AAT_base_F: 3AS_AAT_base_F {};
    class 3AS_CIS_AAT_F: 3AS_CIS_AAT_base_F {};
    class 3AS_AAT: 3AS_CIS_AAT_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class BNA_KC_AAT: 3AS_AAT
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_OPFOR_CIS";
        editorSubcategory = "BNA_KC_SubCat_CIS_Tanks";

        displayName = "AAT";
        crew = "JLTS_Droid_B1_Crew";
        typicalCargo[] = {"JLTS_Droid_B1_Crew"};

        hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"3AS_AATCannon", "SmokeLauncher"};
                magazines[] =
                {
                    "3AS_24Rnd_AAT_AP",
                    "3AS_24Rnd_AAT_AP",
                    "SmokeLauncherMag"
                };
            };
        };
    };
};