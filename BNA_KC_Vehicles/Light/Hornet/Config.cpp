#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class O_LSV_02_unarmed_F;
    class BNA_KC_Hornet_Unarmed: O_LSV_02_unarmed_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_Cars";
        editorPreview = "\BNA_KC_Vehicles\Light\Hornet\Data\Previews\Hornet.jpg";

        displayName = "Hornet Strike Vehicle";
        crew = "BNA_KC_Unit_ARF";
        typicalCargo[] = {"BNA_KC_Unit_ARF"};
        side = 1;

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoKC.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
        };
        textureList[] = {"CamoKC", 1, "CamoGrey", 0};
        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Brown Camo";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoKC.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoGrey.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
        };

        INVENTORY_VEHICLE_RECON
    };

    class Car_F;
    class LSV_02_base_F: Car_F
    {
        class AnimationSources;
        class Turrets;
    };
    class LSV_02_armed_base_F: LSV_02_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_armed_F: LSV_02_armed_base_F {};
    class BNA_KC_Hornet_MG: O_LSV_02_armed_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";
        editorPreview = "\BNA_KC_Vehicles\Light\Hornet\Data\Previews\Hornet_MG.jpg";

        displayName = "Hornet Strike Vehicle (MG)";
        crew = "BNA_KC_Unit_ARF";
        typicalCargo[] = {"BNA_KC_Unit_ARF"};
        side = 1;

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoKC.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
        };
        textureList[] = {"CamoKC", 1, "CamoGrey", 0};
        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Brown Camo";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoKC.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoGrey.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
        };

        INVENTORY_VEHICLE_RECON

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"BNA_KC_Mounted_MG"};
                magazines[] =
                {
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };

        class AnimationSources: AnimationSources
        {
            class Minigun
            {
                source = "revolving";
                weapon = "BNA_KC_Mounted_MG";
            };
            class muzzle_hide
            {
                source = "reload";
                weapon = "BNA_KC_Mounted_MG";
            };
            class muzzle_rot
            {
                source = "ammorandom";
                weapon = "BNA_KC_Mounted_MG";
            };
        };
    };
    class BNA_KC_Hornet_Armed: BNA_KC_Hornet_MG
    {
        scope = 1;
        scopeCurator = 0;
    };

    class LSV_02_AT_base_F: LSV_02_base_F
    {
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_AT_F: LSV_02_AT_base_F {};
    class BNA_KC_Hornet_AT: O_LSV_02_AT_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";
        editorPreview = "\BNA_KC_Vehicles\Light\Hornet\Data\Previews\Hornet_Launcher.jpg";

        displayName = "Hornet Strike Vehicle (AT)";
        crew = "BNA_KC_Unit_ARF";
        typicalCargo[] = {"BNA_KC_Unit_ARF"};
        side = 1;

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoKC.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa",
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa"
        };
        class TextureSources
        {
            class BrownCamo
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Brown Camo";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoKC.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa",
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa"
                };
            };
            class GreyCamo: BrownCamo
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoGrey.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa",
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa"
                };
            };
        };

        INVENTORY_VEHICLE_RECON

        class AnimationSources: AnimationSources
        {
            class VoronaMuzzle_reload
            {
                source = "reload";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_reloadMagazine
            {
                source = "reloadMagazine";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_revolving
            {
                source = "revolving";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_rot
            {
                source = "ammorandom";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"BNA_KC_Mounted_MissileLauncher"};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
    };
};