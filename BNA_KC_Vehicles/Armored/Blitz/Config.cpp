#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


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
    class BNA_KC_Blitz: B_MBT_01_TUSK_F
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
        editorPreview = "\BNA_KC_Vehicles\Armored\Blitz\Data\Previews\Blitz.jpg";

        displayName = "Blitz Assault Tank";
        crew = "BNA_KC_Unit_Phase2_Tanker";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Tanker"};

        soundEngineOffExt[] = {"\BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineShutdown.wss", 30, 1, 100};
        soundEngineOffInt[] = {"\BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineShutdown.wss", 1, 1};
        soundEngineOnExt[] = {"\BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineStartup.wss", 30, 1, 100};
        soundEngineOnInt[] = {"\BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineStartup.wss", 1, 1};
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
                //"MBT_01_Engine_INT_Burst_SoundSet",
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
            "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\KeeliCompany\Body.paa",
            "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\KeeliCompany\Tow.paa",
            "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\KeeliCompany\Addons.paa",
            "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\WhiteRed\Camonet.paa"
        };

        textureList[] = {"KeeliCompany", 1, "WhiteRed", 0, "CamoGrey", 0};
        animationList[] = {"showCamonetCannon", 0, "showCamonetPlates1", 0, "showCamonetPlates2", 0, "showCamonetTurret", 0, "showCamonetHull", 0};
        class TextureSources
        {
            class KeeliCompany
            {
                author = "Rev";
                displayName = "Keeli Company";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\KeeliCompany\Body.paa",
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\KeeliCompany\Tow.paa",
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\KeeliCompany\Addons.paa",
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\WhiteRed\Camonet.paa"
                };
            };
            class WhiteRed: KeeliCompany
            {
                displayName = "White and Red";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\WhiteRed\Body.paa",
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\WhiteRed\Tow.paa",
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\WhiteRed\Addons.paa",
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\WhiteRed\Camonet.paa"
                };
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\CamoGrey\Body.paa",
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\CamoGrey\Tow.paa",
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\CamoGrey\Addons.paa",
                    "\BNA_KC_Vehicles\Armored\Blitz\Data\Textures\WhiteRed\Camonet.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            class TFAR_IntercomChannel
            {
                displayName = "Intercom Channel";
                condition = "true";
                statement = "";

                class TFAR_IntercomChannel_disabled
                {
                    displayName = "Disabled";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true]";
                };
                class TFAR_IntercomChannel_1
                {
                    displayName = "Cargo";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
                };
                class TFAR_IntercomChannel_2
                {
                    displayName = "Crew";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true]";
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
                weapon = "HMG_127_MBT";
            };
            class recoil_source
            {
                source = "reload";
                weapon = "BNA_KC_120_Tankgun";
            };
            class commander_gun_recoil
            {
                source = "reload";
                weapon = "HMG_127_MBT";
            };
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
                            "BNA_KC_100rnd_Coax_Mag",
                            "BNA_KC_100rnd_Coax_Mag",
                            "BNA_KC_100rnd_Coax_Mag",
                            "BNA_KC_100rnd_Coax_Mag",
                            "SmokeLauncherMag"
                        };
                    };
                };

                // gunBeg = "Usti hlavne";
                // gunEnd = "Konec hlavne";
                // memoryPointGun[] = {"usti hlavne3"};
                weapons[] =
                {
                    "BNA_KC_120_Tankgun",
                    "BNA_KC_Coax"
                };
                magazines[] =
                {
                    "BNA_KC_120_AT_Mag",
                    "BNA_KC_120_HEAT_Mag",
                    "BNA_KC_120_HE_Mag",
                    "BNA_KC_100rnd_Coax_Mag",
                    "BNA_KC_100rnd_Coax_Mag",
                    "BNA_KC_100rnd_Coax_Mag",
                    "BNA_KC_100rnd_Coax_Mag",
                    "BNA_KC_100rnd_Coax_Mag"
                };
            };
        };

        // Vehicle Inventory
        maximumLoad = 20000;

        class TransportWeapons
        {
            class _xx_BNA_KC_DC15S
            {
                count = 2;
                weapon = "BNA_KC_DC15S";
            };
        };

        class TransportMagazines
        {
            class _xx_Aux12thFleet_Mag_DC15S
            {
                count = 20;
                magazine = "Aux12thFleet_Mag_DC15S";
            };
        };

        class TransportItems
        {
            class _xx_ACE_elasticBandage
            {
                count = 10;
                name = "ACE_elasticBandage";
            };
            class _xx_ACE_packingBandage
            {
                count = 10;
                name = "ACE_packingBandage";
            };
            class _xx_ACE_quikclot
            {
                count = 10;
                name = "ACE_quikclot";
            };
            class _xx_ACE_surgicalKit
            {
                count = 1;
                name = "ACE_surgicalKit"
            };
            class _xx_ToolKit
            {
                count = 1;
                name = "ToolKit"
            };
        };

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

    class BNA_KC_MBT_Slammer: BNA_KC_Blitz
    {
        scope = 1;
        scopeCurator = 0;
    };
};