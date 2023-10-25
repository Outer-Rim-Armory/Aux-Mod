#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Tank_F;
    class 3AS_AAT_base_F: Tank_F
    {
        class Turrets;
    };
    class 3AS_CIS_AAT_base_F: 3AS_AAT_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class 3AS_CIS_AAT_F: 3AS_CIS_AAT_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };
    class 3AS_AAT: 3AS_CIS_AAT_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                };
            };
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

                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        weapons[] = {"3AS_AAT_Repeater", "SmokeLauncher"};
                        magazines[] =
                        {
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "SmokeLauncherMag"
                        };
                    };
                };
            };
        };

        class AnimationSources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "3AS_AATCannon";
            };
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "3AS_AAT_Repeater";
            };
            class muzzle_rot_coax
            {
                source = "ammorandom";
                weapon = "3AS_AAT_Repeater";
            };
        };
    };
};