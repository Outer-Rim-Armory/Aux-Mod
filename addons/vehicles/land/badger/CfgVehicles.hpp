class CfgVehicles
{
    class Wheeled_APC_F;
    class APC_Wheeled_01_base_F: Wheeled_APC_F
    {
        class Turrets;
    };
    class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F {};
    class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class CLASS(Badger): B_APC_Wheeled_01_cannon_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_APCs);
        editorPreview = QPATHTOF(land\atte\data\previews\CLASS(Badger).jpg);

        displayName = "Badger IFV";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        armor = 600;

        soundEngineOnInt[] = {QPATHTOF(sounds\data\audio\apc\Startup.wss), 0.79432821, 1};
        soundEngineOffInt[] = {QPATHTOF(sounds\data\audio\apc\Shutdown.wss), 0.79432821, 1};
        soundEngineOnExt[] = {QPATHTOF(sounds\data\audio\apc\Startup.wss), 1, 1, 100};
        soundEngineOffExt[] = {QPATHTOF(sounds\data\audio\apc\Shutdown.wss), 1, 1, 10};
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
            QPATHTOF(badger\data\textures\KeeliCompany\Body_co.paa),
            QPATHTOF(badger\data\textures\KeeliCompany\Addons_co.paa),
            QPATHTOF(badger\data\textures\KeeliCompany\Tow_co.paa),
            QPATHTOF(badger\data\textures\Standard\CamoNet_co.paa),
            QPATHTOF(badger\data\textures\Standard\Cage_co.paa)
        };

        textureList[] = {"Standard", 0, "KeeliCompany", 1, "KeeliCompanyDamaged", 0, "CamoGrey", 0};
        class TextureSources
        {
            class Standard
            {
                author = "Keeli Company Aux Team";
                displayName = "Standard";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(badger\data\textures\Standard\Body_co.paa),
                    QPATHTOF(badger\data\textures\Standard\Addons_co.paa),
                    QPATHTOF(badger\data\textures\Standard\Tow_co.paa),
                    QPATHTOF(badger\data\textures\Standard\CamoNet_co.paa),
                    QPATHTOF(badger\data\textures\Standard\Cage_co.paa)
                };
            };

            class KeeliCompany: Standard
            {
                displayName = "Keeli Company";
                textures[] =
                {
                    QPATHTOF(badger\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(badger\data\textures\KeeliCompany\Addons_co.paa),
                    QPATHTOF(badger\data\textures\KeeliCompany\Tow_co.paa),
                    QPATHTOF(badger\data\textures\Standard\CamoNet_co.paa),
                    QPATHTOF(badger\data\textures\Standard\Cage_co.paa)
                };
            };

            class KeeliCompanyDamaged: KeeliCompany
            {
                displayName = "Keeli Company (Damaged)";
                textures[] =
                {
                    QPATHTOF(badger\data\textures\KeeliCompanyDamaged\Body_co.paa),
                    QPATHTOF(badger\data\textures\KeeliCompanyDamaged\Addons_co.paa),
                    QPATHTOF(badger\data\textures\KeeliCompanyDamaged\Tow_co.paa),
                    QPATHTOF(badger\data\textures\Standard\CamoNet_co.paa),
                    QPATHTOF(badger\data\textures\Standard\Cage_co.paa)
                };
            };

            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(badger\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(badger\data\textures\CamoGrey\Addons_co.paa),
                    QPATHTOF(badger\data\textures\CamoGrey\Tow_co.paa),
                    QPATHTOF(badger\data\textures\Standard\CamoNet_co.paa),
                    QPATHTOF(badger\data\textures\Standard\Cage_co.paa)
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

        INVENTORY_VEHICLE_BASE(3);
    };

    class CLASS(APC_Badger): CLASS(Badger)
    {
        SCOPE_HIDDEN;
    };
};