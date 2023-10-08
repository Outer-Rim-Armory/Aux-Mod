#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class APC_Wheeled_01_base_F;
    class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F
    {
        class Turrets;
    };
    class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class BNA_KC_APC_Badger: B_APC_Wheeled_01_cannon_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";
        editorPreview = "\BNA_KC_Vehicles\Armored\Badger\Data\Previews\Badger.jpg";

        displayName = "Badger IFV";
        crew = "BNA_KC_Unit_Phase2_Tanker";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Tanker"};

        armor = 600;

        soundEngineOnInt[] = {"\BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCStartup", 0.79432821, 1};
        soundEngineOffInt[] = {"\BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCShutdown.wss", 0.79432821, 1};
        soundEngineOnExt[] = {"\BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCStartup", 1, 1, 100};
        soundEngineOffExt[] = {"\BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCShutdown.wss", 1, 1, 10};
        class Sounds
        {
            soundSetsInt[] =
            {
                "APC_Wheeled_01_Engine_RPM0_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM1_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM2_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM3_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM4_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM5_INT_SoundSet",
                "APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet",
                "APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet",
                "APC_Wheeled_01_Rattling_INT_SoundSet",
                "APC_Wheeled_01_Stress_INT_SoundSet",
                "APC_Wheeled_01_Rain_INT_SoundSet",
                "APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet",
                "APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet",
                "APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet",
                "APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"
            };
            soundSetsExt[] =
            {
                "BNA_KC_APC_Engine_RPM0_EXT_SoundSet",
                "BNA_KC_APC_Engine_RPM1_EXT_SoundSet",
                "BNA_KC_APC_Engine_RPM2_EXT_SoundSet",
                "BNA_KC_APC_Engine_RPM3_EXT_SoundSet",
                "BNA_KC_APC_Engine_RPM4_EXT_SoundSet",
                "BNA_KC_APC_Engine_RPM5_EXT_SoundSet",
                "APC_Wheeled_01_Rattling_EXT_SoundSet",
                "APC_Wheeled_01_Stress_EXT_SoundSet",
                "APC_Wheeled_01_Rain_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"
            };
        };

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\Body.paa",
            "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\Addons.paa",
            "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\Tow.paa",
            "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\CamoNet.paa",
            "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\Cage.paa"
        };

        textureList[] = {"Standard", 1};
        class TextureSources
        {
            class Standard
            {
                author = "???";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\Body.paa",
                    "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\Addons.paa",
                    "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\Tow.paa",
                    "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\CamoNet.paa",
                    "\BNA_KC_Vehicles\Armored\Badger\Data\Textures\Standard\Cage.paa"
                };
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] =
                {
                    "BNA_KC40mm_CTWS",
                    "BNA_KC_Coax"
                };
                magazines[] =
                {
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "BNA_KC_100rnd_Coax_Mag",
                    "BNA_KC_100rnd_Coax_Mag",
                    "BNA_KC_100rnd_Coax_Mag",
                    "BNA_KC_100rnd_Coax_Mag",
                    "BNA_KC_100rnd_Coax_Mag"
                };
            };
        };
    };
};