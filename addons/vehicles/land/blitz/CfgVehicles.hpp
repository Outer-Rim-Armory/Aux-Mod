class CfgVehicles
{
    class Tank;
    class Tank_F: Tank
    {
        class Turrets
        {
            class MainTurret;
        };
    };
    class MBT_01_base_F: Tank_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };
    class B_MBT_01_base_F: MBT_01_base_F {};
    class B_MBT_01_cannon_F: B_MBT_01_base_F {};
    class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
    {
        class ACE_SelfActions;
        class AnimationSources;
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
    class CLASS(Blitz): B_MBT_01_TUSK_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Tankers);
        editorPreview = QPATHTOF(land\blitz\data\previews\CLASS(Blitz).jpg);

        displayName = "Blitz Assault Tank";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        soundEngineOffExt[] = {QPATHTOF(sounds\data\audio\tank\Shutdown.wss), 30, 1, 100};
        soundEngineOffInt[] = {QPATHTOF(sounds\data\audio\tank\Shutdown.wss), 1, 1};
        soundEngineOnExt[] = {QPATHTOF(sounds\data\audio\tank\Startup.wss), 30, 1, 100};
        soundEngineOnInt[] = {QPATHTOF(sounds\data\audio\tank\Startup.wss), 1, 1};
        class Sounds
        {
            soundSetsInt[] =
            {
                "BNA_KC_Engine_RPM0_INT_SoundSet",
                "BNA_KC_Engine_RPM1_INT_SoundSet",
                "BNA_KC_Engine_RPM2_INT_SoundSet",
                "BNA_KC_Engine_RPM3_INT_SoundSet",
                "BNA_KC_Engine_RPM4_INT_SoundSet",
                "BNA_KC_Engine_RPM5_INT_SoundSet",
                "BNA_KC_Engine_RPM6_INT_SoundSet",
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
            soundSetsExt[] =
            {
                "BNA_KC_Engine_RPM0_EXT_SoundSet",
                "BNA_KC_Engine_RPM1_EXT_SoundSet",
                "BNA_KC_Engine_RPM2_EXT_SoundSet",
                "BNA_KC_Engine_RPM3_EXT_SoundSet",
                "BNA_KC_Engine_RPM4_EXT_SoundSet",
                "BNA_KC_Engine_RPM5_EXT_SoundSet",
                "BNA_KC_Engine_RPM6_EXT_SoundSet",
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

        hiddenSelectionsTextures[] =
        {
            QPATHTOF(land\blitz\data\textures\KeeliCompany\Body_co.paa),
            QPATHTOF(land\blitz\data\textures\KeeliCompany\Tow_co.paa),
            QPATHTOF(land\blitz\data\textures\KeeliCompany\Addons_co.paa),
            QPATHTOF(land\blitz\data\textures\WhiteRed\Camonet_co.paa)
        };

        textureList[] = {"KeeliCompany", 1, "WhiteRed", 0, "CamoGrey", 0};
        animationList[] = {"showCamonetCannon", FALSE, "showCamonetPlates1", FALSE, "showCamonetPlates2", FALSE, "showCamonetTurret", FALSE, "showCamonetHull", FALSE};
        class TextureSources
        {
            class KeeliCompany
            {
                author = "Keeli Company Aux Team";
                displayName = "Keeli Company";
                factions[] = {};
                textures[] =
                {
                    QPATHTOF(land\blitz\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\blitz\data\textures\KeeliCompany\Tow_co.paa),
                    QPATHTOF(land\blitz\data\textures\KeeliCompany\Addons_co.paa),
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Camonet_co.paa)
                };
            };
            class WhiteRed: KeeliCompany
            {
                displayName = "White and Red";
                textures[] =
                {
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Body_co.paa),
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Tow_co.paa),
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Addons_co.paa),
                    QPATHTOF(land\blitz\data\textures\WhiteRed\Camonet_co.paa)
                };
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    QPATHTOF(land\blitz\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\blitz\data\textures\CamoGrey\Tow_co.paa),
                    QPATHTOF(land\blitz\data\textures\CamoGrey\Addons_co.paa),
                    QPATHTOF(land\blitz\data\textures\CamoGrey\Camonet_co.paa)
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
            INTERCOM_END;
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        weapons[] =
                        {
                            "BNA_KC_CommanderGun",
                            "SmokeLauncher"
                        };
                        magazines[] =
                        {
                            QCLASS(Mag_100rnd_Coax),
                            QCLASS(Mag_100rnd_Coax),
                            QCLASS(Mag_100rnd_Coax),
                            QCLASS(Mag_100rnd_Coax),
                            QCLASS(Mag_100rnd_Coax)
                            "SmokeLauncherMag"
                        };
                    };
                };

                weapons[] =
                {
                    "BNA_KC_120_Tankgun",
                    QCLASS(Coax_Badger)
                };
                magazines[] =
                {
                    "BNA_KC_120_AT_Mag",
                    "BNA_KC_120_HEAT_Mag",
                    "BNA_KC_120_HE_Mag",
                    QCLASS(Mag_100rnd_Coax),
                    QCLASS(Mag_100rnd_Coax),
                    QCLASS(Mag_100rnd_Coax),
                    QCLASS(Mag_100rnd_Coax),
                    QCLASS(Mag_100rnd_Coax)
                };
            };
        };

        class AnimationSources: AnimationSources
        {
            class muzzle_hide_cannon
            {
                source = "reload";
                weapon = "BNA_KC_120_Tankgun";
            };
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "BNA_KC_120_Tankgun";
            };
            class muzzle_rot_cmdr
            {
                source = "ammorandom";
                weapon = QCLASS(Coax_Badger);
            };
            class recoil_source
            {
                source = "reload";
                weapon = "BNA_KC_120_Tankgun";
            };
            class commander_gun_recoil
            {
                source = "reload";
                weapon = QCLASS(Coax_Badger);
            };
        };

        maximumLoad = 20000;
        INVENTORY_VEHICLE_BASE(3);

        class ACE_Cargo
        {
            class Cargo
            {
                class Track
                {
                    type = "ACE_Track";
                    amount = 1;
                };
            };
        };
    };

    class CLASS(MBT_Slammer): CLASS(Blitz)
    {
        SCOPE_HIDDEN;
    };
};