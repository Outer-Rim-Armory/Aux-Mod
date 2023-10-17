#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class B_Heli_Attack_01_base_F;
    class 3as_laat_Base: B_Heli_Attack_01_base_F
    {
        class ACE_SelfActions;
        class AnimationSources;
        class Turrets;
        class pilotCamera;
    };
    class BNA_KC_LAATi_Base: 3as_laat_Base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAir";
        side = 1;

        displayName = "LAAT/i (Base)";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        // Armor and fuel
        armor = 200;
        fuelCapacity = 3000;
        fuelConsumptionRate = 0.12;

        vehicleClass = "Helicopter"; // What type of vehicle it is
        availableForSupportTypes[] = {"CAS_Heli", "Transport", "Drop"};

        // Impulse Settings
        tas_can_impulse = 0; // Disables 3AS's Impulse System
        ls_impulsor_soundOn = "BNA_KC_Sound_ImpulseOn";
        ls_impulsor_soundOff = "BNA_KC_Sound_ImpulseOff";
        ls_impulsor_fuelDrain_1 = 0;
        ls_impulsor_fuelDrain_2 = 0;
        // ls_impulsor_boostSpeed_1 = 400; // Impulse speeds, default values listed
        // ls_impulsor_boostSpeed_2 = 600;

        // Weapons and mags
        weapons[] =
        {
            "ls_laat_gun",   // HE Gun
            "ls_laat_gun_2", // AP Gun
            "ls_laat_dar",
            "3as_LAAT_Missile_AGM",
            "3as_LAAT_Missile_AA",

            "Laserdesignator_pilotCamera",
            "ls_weapon_CMFlareLauncher",
            "SmokeLauncher"
        };
        magazines[] =
        {
            "200rnd_laat_he_mag",
            "200rnd_laat_he_mag",
            "200rnd_laat_apfsds_mag",
            "200rnd_laat_apfsds_mag",

            "24Rnd_missiles", // Hydra Missiles
            "3as_LAAT_8Rnd_Missile_AGM",
            "3as_LAAT_8Rnd_Missile_AGM",
            "3as_PylonMissile_LAAT_8Rnd_Missile_AA",
            "3as_PylonMissile_LAAT_8Rnd_Missile_AA",

            "Laserbatteries",
            "Laserbatteries",

            "ls_mag_300rnd_CMFlareChaff_blue",
            "ls_mag_300rnd_CMFlareChaff_blue",
            "ls_mag_300rnd_CMFlareChaff_blue",
            "SmokeLauncherMag"
        };

        // LS Keybind Animations
        ls_vehicle_rampAnims[] = {"ramp"};
        ls_vehicle_rampToggleSounds[] = {"BNA_KC_Sound_LAAT_Ramp", "BNA_KC_Sound_LAAT_Ramp"};

        // Textures
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Air\LAATi\Data\Textures\KeeliCompany\Body.paa",
            "\BNA_KC_Vehicles\Air\LAATi\Data\Textures\KeeliCompany\Wings.paa",
            "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
            "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
            "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
        };
        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1, "Akali", 0, "TwiLek", 0};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\3AS\3as_Laat\LAATI\data\Hull_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Wings_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
            class Imperial: Standard
            {
                author = "Charger";
                displayName = "Imperial";
                textures[] =
                {
                    "\3AS\3as_Laat\LAATI\data\Hull_Imp_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\wings_Imp_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\weapons_Imp_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\weapon_Details_Imp_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\interior_Imp_CO.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Dexus";
                displayName = "Keeli Company";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Air\LAATi\Data\Textures\KeeliCompany\Body.paa",
                    "\BNA_KC_Vehicles\Air\LAATi\Data\Textures\KeeliCompany\Wings.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
            class Akali: Standard
            {
                author = "Rev";
                displayName = "Akali";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Air\LAATi\Data\Textures\Akali\Body.paa",
                    "\BNA_KC_Vehicles\Air\LAATi\Data\Textures\Akali\Wings.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
            class TwiLek: Standard
            {
                author = "Rev";
                displayName = "Twi'Lek";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Air\LAATi\Data\Textures\TwiLek\Body.paa",
                    "\BNA_KC_Vehicles\Air\LAATi\Data\Textures\TwiLek\Wings.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };

        class UserActions
        {
            class Impulse
            {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;
                priority = 9;

                onlyforplayer = 0;
                hideOnUse = 1;
                showWindow = 0;

                condition = QUOTE(isEngineOn this and ace_player == currentPilot this and !isTouchingGround this);
                statement = QUOTE(this call ls_vehicle_fnc_ImpulseJoystick);
            };
            class Repulse: Impulse
            {
                displayName = "Repulse";
                statement = QUOTE(this call ls_vehicle_fnc_RepulseJoystick);
            };

            class DoorsOpen: Impulse
            {
                displayName = "Open Doors";
                condition = QUOTE(ace_player == currentPilot this and (this animationPhase 'door_L') == 1);
                // statement = "['door', true] call ls_fnc_keybind_operationFrameWork;";
                statement = "this action ['LandGear', this]; this say3D 'BNA_KC_Sound_LAAT_DoorsOpen'"
            };
            class DoorsClose: DoorsOpen
            {
                displayName = "Close Doors";
                condition = QUOTE(ace_player == currentPilot this and (this animationPhase 'door_L') == 0);
                // statement = "['door', true] call ls_fnc_keybind_operationFrameWork;";
                statement = "this action ['LandGearUp', this]; this say3D 'BNA_KC_Sound_LAAT_DoorsClose'"
            };

            class RampOpen: Impulse
            {
                displayName = "Open Ramp";
                condition = QUOTE(ace_player == currentPilot this and this animationSourcePhase 'ramp' == 0);
                statement = "['ramp', true] call ls_fnc_keybind_operationFrameWork;";
            };
            class RampClose: RampOpen
            {
                displayName = "Close Ramp";
                condition = QUOTE(ace_player == currentPilot this and this animationSourcePhase 'ramp' == 1);
                statement = "['ramp', true] call ls_fnc_keybind_operationFrameWork;";
            };

            SPECIAL_LOAD
        };

        class AnimationSources: AnimationSources
        {
            class Doors
            {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
            class Lamps
            {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
            class Turrets
            {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
        };

        class Turrets: Turrets
        {
            class MainTurret;
            class CoPilot;
            class LeftDoorGun;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };

        class pilotCamera: pilotCamera
        {
            initTurn = 0;   // Initial states
            initElev = -10;
            maxTurn = 180;  // Turn radius
            minTurn = -180;
            maxElev = 90;   // Elevation (how far up/down)
            minElev = -10;

            maxXRotSpeed = 0.3;
            maxYRotSpeed = 0.3;

            ace_missileguidance_usePilotCameraForTargeting = 1;
        };
    };

    class BNA_KC_LAATi_MK1: BNA_KC_LAATi_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "LAAT/i MK1";
        editorPreview = "\BNA_KC_Vehicles\Air\LAATi\Data\Previews\LAATi_MK1.jpg";

        class AnimationSources: AnimationSources
        {
            class Turrets: Turrets
            {
                initPhase = 1;
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret {};
            class CoPilot: CoPilot {};
            class LeftDoorGun: LeftDoorGun {};
            class RightDoorGun: RightDoorGun {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
        };
    };
    class BNA_KC_LAATi_MK1_Lamps: BNA_KC_LAATi_MK1
    {
        displayName = "LAAT/i MK1 (Lamps)";
        editorPreview = "\BNA_KC_Vehicles\Air\LAATi\Data\Previews\LAATi_MK1_Lamps.jpg";
        class AnimationSources: AnimationSources
        {
            class Lamps: Lamps
            {
                initPhase = 1;
            };
            class Turrets: Turrets
            {
                initPhase = 0;
            };
        };
    };

    class BNA_KC_LAATi_MK2: BNA_KC_LAATi_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "LAAT/i MK2";
        editorPreview = "\BNA_KC_Vehicles\Air\LAATi\Data\Previews\LAATi_MK2.jpg";

        class AnimationSources: AnimationSources
        {
            class Doors: Doors
            {
                initPhase = 1;
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret {};
            class CoPilot: CoPilot {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
            class CargoTurret_06: CargoTurret_06 {};
            delete LeftDoorGun;
            delete RightDoorGun;
        };
    };
    class BNA_KC_LAATi_MK2_Lamps: BNA_KC_LAATi_MK2
    {
        displayName = "LAAT/i MK2 (Lamps)";
        editorPreview = "\BNA_KC_Vehicles\Air\LAATi\Data\Previews\LAATi_MK2_Lamps.jpg";
        class AnimationSources: AnimationSources
        {
            class Lamps: Lamps
            {
                initPhase = 1;
            };
        };
    };
};


class Extended_init_EventHandlers
{
    class BNA_KC_LAATi_Base
    {
        class BNA_KC_Impulse_Init
        {
            init = "(_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
        };
    };
};