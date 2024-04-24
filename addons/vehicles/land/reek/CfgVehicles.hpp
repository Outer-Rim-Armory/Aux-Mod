class CfgVehicles {
    class Wheeled_APC_F;
    class APC_Wheeled_01_base_F: Wheeled_APC_F {
        class Turrets;
    };
    class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F {};
    class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F {
        class ACE_SelfActions;
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class CLASS(Reek): B_APC_Wheeled_01_cannon_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Reek);

        displayName = "Reek IFV";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        armor = 600;

        soundEngineOnInt[] = {QPATHTOF(sounds\data\audio\reek\Startup.wss), 0.79432821, 1};
        soundEngineOffInt[] = {QPATHTOF(sounds\data\audio\reek\Shutdown.wss), 0.79432821, 1};
        soundEngineOnExt[] = {QPATHTOF(sounds\data\audio\reek\Startup.wss), 1, 1, 100};
        soundEngineOffExt[] = {QPATHTOF(sounds\data\audio\reek\Shutdown.wss), 1, 1, 10};
        class Sounds {
            soundSetsInt[] = {
                QCLASS(SoundSet_Reek_Engine_RPM0_INT),
                QCLASS(SoundSet_Reek_Engine_RPM1_INT),
                QCLASS(SoundSet_Reek_Engine_RPM2_INT),
                QCLASS(SoundSet_Reek_Engine_RPM3_INT),
                QCLASS(SoundSet_Reek_Engine_RPM4_INT),
                QCLASS(SoundSet_Reek_Engine_RPM5_INT),
                QCLASS(SoundSet_Reek_Engine_RPM6_INT),
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
            soundSetsExt[] = {
                QCLASS(SoundSet_Reek_Engine_RPM0_EXT),
                QCLASS(SoundSet_Reek_Engine_RPM1_EXT),
                QCLASS(SoundSet_Reek_Engine_RPM2_EXT),
                QCLASS(SoundSet_Reek_Engine_RPM3_EXT),
                QCLASS(SoundSet_Reek_Engine_RPM4_EXT),
                QCLASS(SoundSet_Reek_Engine_RPM5_EXT),
                QCLASS(SoundSet_Reek_Engine_RPM6_EXT),
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

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\reek\data\textures\KeeliCompany\Body_co.paa),
            QPATHTOF(land\reek\data\textures\KeeliCompany\Addons_co.paa),
            QPATHTOF(land\reek\data\textures\KeeliCompany\Tow_co.paa),
            QPATHTOF(land\reek\data\textures\Standard\CamoNet_co.paa),
            QPATHTOF(land\reek\data\textures\Standard\Cage_co.paa)
        };

        textureList[] = {"Standard", 0, "KeeliCompany", 1, "KeeliCompanyDamaged", 0, "CamoGrey", 0};
        class TextureSources {
            class Standard {
                author = AUTHOR;
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\reek\data\textures\Standard\Body_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\Addons_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\Tow_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\CamoNet_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\Cage_co.paa)
                };
            };

            class KeeliCompany: Standard {
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\reek\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\reek\data\textures\KeeliCompany\Addons_co.paa),
                    QPATHTOF(land\reek\data\textures\KeeliCompany\Tow_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\CamoNet_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\Cage_co.paa)
                };
            };

            class KeeliCompanyDamaged: KeeliCompany {
                displayName = "Keeli Company (Damaged)";
                textures[] = {
                    QPATHTOF(land\reek\data\textures\KeeliCompanyDamaged\Body_co.paa),
                    QPATHTOF(land\reek\data\textures\KeeliCompanyDamaged\Addons_co.paa),
                    QPATHTOF(land\reek\data\textures\KeeliCompanyDamaged\Tow_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\CamoNet_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\Cage_co.paa)
                };
            };

            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\reek\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\reek\data\textures\CamoGrey\Addons_co.paa),
                    QPATHTOF(land\reek\data\textures\CamoGrey\Tow_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\CamoNet_co.paa),
                    QPATHTOF(land\reek\data\textures\Standard\Cage_co.paa)
                };
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    QCLASS(Autocannon_Reek),
                    QCLASS(Coax_Reek)
                };
                magazines[] = {
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    QCLASS(Mag_100Rnd_Coax),
                    QCLASS(Mag_100Rnd_Coax),
                    QCLASS(Mag_100Rnd_Coax),
                    QCLASS(Mag_100Rnd_Coax),
                    QCLASS(Mag_100Rnd_Coax)
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;

            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };

        INVENTORY_VEHICLE_BASE(3);
    };

    class CLASS(APC_Reek): CLASS(Reek) {
        SCOPE_HIDDEN;
    };
};