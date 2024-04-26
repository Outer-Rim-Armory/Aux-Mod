class CfgVehicles {
    class Tank;
    class Tank_F: Tank {
        class Turrets {
            class MainTurret;
        };
    };
    class MBT_01_base_F: Tank_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets;
            };
        };
    };
    class B_MBT_01_base_F: MBT_01_base_F {};
    class B_MBT_01_cannon_F: B_MBT_01_base_F {};
    class B_MBT_01_TUSK_F: B_MBT_01_cannon_F {
        class ACE_SelfActions;
        class AnimationSources;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics;
                };
            };
        };
    };
    class CLASS(Blitz): B_MBT_01_TUSK_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Blitz);

        displayName = "Blitz Assault Tank";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        soundEngineOffExt[] = {QPATHTOF(sounds\data\audio\blitz\Shutdown.wss), 30, 1, 100};
        soundEngineOffInt[] = {QPATHTOF(sounds\data\audio\blitz\Shutdown.wss), 1, 1};
        soundEngineOnExt[] = {QPATHTOF(sounds\data\audio\blitz\Startup.wss), 30, 1, 100};
        soundEngineOnInt[] = {QPATHTOF(sounds\data\audio\blitz\Startup.wss), 1, 1};
        class Sounds {
            soundSetsInt[] = {
                QCLASS(SoundSet_Blitz_Engine_RPM0_INT),
                QCLASS(SoundSet_Blitz_Engine_RPM1_INT),
                QCLASS(SoundSet_Blitz_Engine_RPM2_INT),
                QCLASS(SoundSet_Blitz_Engine_RPM3_INT),
                QCLASS(SoundSet_Blitz_Engine_RPM4_INT),
                QCLASS(SoundSet_Blitz_Engine_RPM5_INT),
                QCLASS(SoundSet_Blitz_Engine_RPM6_INT),
                // "MBT_01_Engine_INT_Burst_SoundSet",
                "MBT_01_Tracks_01_INT_SoundSet",
                "MBT_01_Tracks_02_INT_SoundSet",
                "MBT_01_Tracks_03_INT_SoundSet",
                "MBT_01_Tracks_04_INT_SoundSet",
                "MBT_01_Tracks_05_INT_SoundSet",
                "MBT_01_Tracks_06_INT_SoundSet",
                "MBT_01_Interior_Tone_Engine_Off_SoundSet",
                "MBT_01_Interior_Tone_Engine_On_SoundSet",
                "MBT_01_Rattling_INT_SoundSet",
                "MBT_01_Rain_INT_SoundSet",
                "MBT_01_Tracks_Brake_Hard_INT_SoundSet",
                "MBT_01_Tracks_Brake_Soft_INT_SoundSet",
                "MBT_01_Tracks_Turn_Hard_INT_SoundSet",
                "MBT_01_Tracks_Turn_Soft_INT_SoundSet",
                "MBT_01_Drive_Water_INT_SoundSet",
                "MBT_01_Drive_Dirt_INT_SoundSet",
                "",
                "Tracks_Movement_Dirt_Int_01_SoundSet",
                "Tracks_Surface_Soft_Int_SoundSet",
                "Tracks_Surface_Sand_Int_SoundSet",
                "Tracks_Surface_Squeaks_Soft_Int_SoundSet",
                "Tracks_Surface_Squeaks_Hard_Int_SoundSet",
                "Tanks_Material_Strain_Int_SoundSet",
                "Tank_General_Collision_Int_SoundSet"
            };
            soundSetsExt[] = {
                QCLASS(SoundSet_Blitz_Engine_RPM0_EXT),
                QCLASS(SoundSet_Blitz_Engine_RPM1_EXT),
                QCLASS(SoundSet_Blitz_Engine_RPM2_EXT),
                QCLASS(SoundSet_Blitz_Engine_RPM3_EXT),
                QCLASS(SoundSet_Blitz_Engine_RPM4_EXT),
                QCLASS(SoundSet_Blitz_Engine_RPM5_EXT),
                QCLASS(SoundSet_Blitz_Engine_RPM6_EXT),
                //"MBT_01_Engine_EXT_Burst_SoundSet",
                "MBT_01_Tracks_01_EXT_SoundSet",
                "MBT_01_Tracks_02_EXT_SoundSet",
                "MBT_01_Tracks_03_EXT_SoundSet",
                "MBT_01_Tracks_04_EXT_SoundSet",
                "MBT_01_Tracks_05_EXT_SoundSet",
                "MBT_01_Tracks_06_EXT_SoundSet",
                "MBT_01_Rain_EXT_SoundSet",
                "MBT_01_Tracks_Brake_Hard_EXT_SoundSet",
                "MBT_01_Tracks_Brake_Soft_EXT_SoundSet",
                "MBT_01_Tracks_Turn_Hard_EXT_SoundSet",
                "MBT_01_Tracks_Turn_Soft_EXT_SoundSet",
                "MBT_01_Drive_Water_EXT_SoundSet",
                "MBT_01_Drive_Dirt_EXT_SoundSet",
                "",
                "Tracks_Movement_Dirt_Ext_01_SoundSet",
                "Tracks_Surface_Soft_Ext_SoundSet",
                "Tracks_Surface_Sand_Ext_SoundSet",
                "Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
                "Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
                "Tank_General_Collision_SoundShader"
            };
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\blitz\data\textures\KeeliCompany\Body_co.paa),
            QPATHTOF(land\blitz\data\textures\KeeliCompany\Tow_co.paa),
            QPATHTOF(land\blitz\data\textures\KeeliCompany\Addons_co.paa),
            QPATHTOF(land\blitz\data\textures\WhiteRed\Camonet_co.paa)
        };

        textureList[] = {"KeeliCompany", 1, "WhiteRed", 0, "CamoGrey", 0};
        animationList[] = {"showCamonetCannon", FALSE, "showCamonetPlates1", FALSE, "showCamonetPlates2", FALSE, "showCamonetTurret", FALSE, "showCamonetHull", FALSE};
        class TextureSources {
            class KeeliCompany {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\blitz\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\blitz\data\textures\KeeliCompany\Tow_co.paa),
                    QPATHTOF(land\blitz\data\textures\KeeliCompany\Addons_co.paa),
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Camonet_co.paa)
                };
            };
            class WhiteRed: KeeliCompany {
                displayName = "White and Red";
                textures[] = {
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Body_co.paa),
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Tow_co.paa),
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Addons_co.paa),
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Camonet_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\blitz\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\blitz\data\textures\CamoGrey\Tow_co.paa),
                    QPATHTOF(land\blitz\data\textures\CamoGrey\Addons_co.paa),
                    QPATHTOF(land\blitz\data\textures\CamoGrey\Camonet_co.paa)
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {
                            QCLASS(Coax_Commander),
                            "SmokeLauncher"
                        };
                        magazines[] = {
                            QCLASS(Mag_100Rnd_Coax),
                            QCLASS(Mag_100Rnd_Coax),
                            QCLASS(Mag_100Rnd_Coax),
                            QCLASS(Mag_100Rnd_Coax),
                            QCLASS(Mag_100Rnd_Coax),
                            "SmokeLauncherMag"
                        };
                    };
                };

                weapons[] = {
                    QCLASS(Cannon_Blitz),
                    QCLASS(Coax_Reek)
                };
                magazines[] = {
                    QCLASS(Mag_20Rnd_Cannon_Blitz_HEAT),
                    QCLASS(Mag_20Rnd_Cannon_Blitz_HE),
                    QCLASS(Mag_20Rnd_Cannon_Blitz_AT),
                    QCLASS(Mag_100Rnd_Coax),
                    QCLASS(Mag_100Rnd_Coax),
                    QCLASS(Mag_100Rnd_Coax),
                    QCLASS(Mag_100Rnd_Coax),
                    QCLASS(Mag_100Rnd_Coax)
                };
            };
        };

        class AnimationSources: AnimationSources {
            class muzzle_hide_cannon {
                source = "reload";
                weapon = QCLASS(Cannon_Blitz);
            };
            class muzzle_rot_cannon {
                source = "ammorandom";
                weapon = QCLASS(Cannon_Blitz);
            };
            class muzzle_rot_cmdr {
                source = "ammorandom";
                weapon = QCLASS(Coax_Reek);
            };
            class recoil_source {
                source = "reload";
                weapon = QCLASS(Cannon_Blitz);
            };
            class commander_gun_recoil {
                source = "reload";
                weapon = QCLASS(Coax_Reek);
            };
        };

        maximumLoad = 20000;
        INVENTORY_VEHICLE_BASE(3);

        class ACE_Cargo {
            class Cargo {
                class Track {
                    type = "ACE_Track";
                    amount = 1;
                };
            };
        };
    };

    class CLASS(MBT_Slammer): CLASS(Blitz) {
        SCOPE_HIDDEN;
    };
};