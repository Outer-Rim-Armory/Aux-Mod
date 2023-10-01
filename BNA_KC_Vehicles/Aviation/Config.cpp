#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"
#include "..\..\BNA_KC_Gear\Macros.hpp"
#include "Macros.hpp"


class CfgVehicles
{
    class Heli_Attack_01_base_F;
    class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
    {
        class UserActions;
    };
    class 3as_laat_Base: B_Heli_Attack_01_base_F
    {
        class UserActions: UserActions
        {
            class impulseOn;
            class impulseOff;
        };
        class ACE_SelfActions;

        class pilotCamera;
        class AnimationSources;
        class Turrets;
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
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] LAAT/i (Base)";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        side = 1;

        // Armor and fuel
        armor = 200;
        fuelCapacity = 3000;
        fuelConsumptionRate = 0.12;

        // Textures
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\KeeliCompany\KC_Body.paa",
            "\BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\KeeliCompany\KC_Wings.paa",
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
                    "\BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\KeeliCompany\KC_Body.paa",
                    "\BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\KeeliCompany\KC_Wings.paa",
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
                    "\BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\Akali\Akali_Body.paa",
                    "\BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\Akali\Akali_Wings.paa",
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
                    "\BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\TwiLek\TwiLek_Body.paa",
                    "\BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\TwiLek\TwiLek_Wings.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                    "\3AS\3as_Laat\LAATI\data\Interior_CO.paa"
                };
            };
        };

        // Weapons and mags
        weapons[] =
        {
            "ls_laat_gun",  // HE Gun
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

        class UserActions: UserActions
        {
            class impulseOn: impulseOn
            {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;

                shortcut = "User19";
                onlyforplayer = 0;
                hideOnUse = 1;

                condition = QUOTE(isEngineOn this and ace_player == currentPilot this and !isTouchingGround this;);
                statement = QUOTE(this call ls_vehicle_fnc_ImpulseJoystick;);
            };
            class impulseOff: impulseOn
            {
                displayName = "Repulse";
                shortcut = "User20";
                statement = QUOTE(this call ls_vehicle_fnc_RepulseJoystick;);
            };

            class SpecialLoadVehicle: impulseOn
            {
                // Special action used for vehicles that are not fully compatible with ViV (vehicle-in-vehicle)
                // Notably used for 3AS's AT-TE
                displayName = "Load Vehicle (Custom)";
                displayNameDefault = "<img size=2 image='\a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa'>";

                condition = QUOTE(this call BNAKC_fnc_canSpecialLoad;);
                statement = QUOTE(this call BNAKC_fnc_specialLoad;);
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };

        // Impulse Settings
        tas_can_impulse = 0; // Disables 3AS's Impulse System
        ls_impulsor_soundOn = "BNA_KC_ImpulseOn";
        ls_impulsor_soundOff = "BNA_KC_ImpulseOff";
        ls_impulsor_fuelDrain_1 = 0;
        ls_impulsor_fuelDrain_2 = 0;
        // ls_impulsor_boostSpeed_1 = 400; // Impulse speeds, default values listed
        // ls_impulsor_boostSpeed_2 = 600;

        accuracy = 5; // How easy it is for AI to indentify
        cost = "3e+006"; // How "important" AI thinks it is
        availableForSupportTypes[] = {"CAS_Heli", "Transport", "Drop"};
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"}; // What units are "normally" in the vehicle
        vehicleClass = "Helicopter"; // What type of vehicle it is

        // Animations
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
    };

    class BNA_KC_LAATi_MK1: BNA_KC_LAATi_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] LAAT/i MK1";
        editorPreview = "\BNA_KC_Vehicles\Aviation\Data\Textures\Previews\BNA_KC_LAATi_MK1.jpg";

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
        displayName = "[KC] LAAT/i MK1 (Lamps)";
        editorPreview = "\BNA_KC_Vehicles\Aviation\Data\Textures\Previews\BNA_KC_LAATi_MK1_Lamps.jpg";
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

        displayName = "[KC] LAAT/i MK2";
        editorPreview = "\BNA_KC_Vehicles\Aviation\Data\Textures\Previews\BNA_KC_LAATi_MK2.jpg";

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
        displayName = "[KC] LAAT/i MK2 (Lamps)";
        editorPreview = "\BNA_KC_Vehicles\Aviation\Data\Textures\Previews\BNA_KC_LAATi_MK2_Lamps.jpg";
        class AnimationSources: AnimationSources
        {
            class Lamps: Lamps
            {
                initPhase = 1;
            };
        };
    };

    class lsd_laatc_base;
    class lsd_heli_laatc: lsd_laatc_base
    {
        class UserActions; // LS's loading is also done through UserActions
        class ACE_SelfActions;
    };
    class BNA_KC_LAATc: lsd_heli_laatc
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";
        editorPreview = "\BNA_KC_Vehicles\Aviation\Data\Textures\Previews\BNA_KC_LAATc.jpg";

        displayName = "[KC] LAAT/c";
        crew = "BNA_KC_Unit_Phase2_Pilot";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Vehicles\Aviation\Data\Textures\LAATc\BNA_KC_LAATC_Auxiliary.paa",
            "BNA_KC_Vehicles\Aviation\Data\Textures\LAATc\BNA_KC_LAATC_Cockpit.paa",
            "lsd_vehicles_heli\laatc\data\glass_ca.paa",
            "BNA_KC_Vehicles\Aviation\Data\Textures\LAATc\BNA_KC_LAATC_Hull.paa",
            "BNA_KC_Vehicles\Aviation\Data\Textures\LAATc\BNA_KC_LAATC_Wings.paa"
        };
        textureList[] = {"Standard", 0, "KeeliCompany", 1};
        class TextureSources
        {
            class Standard
            {
                author = "Legion Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "lsd_vehicles_heli\laatc\data\auxiliary_co.paa",
                    "lsd_vehicles_heli\laatc\data\standard\cockpit_co.paa",
                    "lsd_vehicles_heli\laatc\data\glass_ca.paa",
                    "lsd_vehicles_heli\laatc\data\standard\hull_co.paa",
                    "lsd_vehicles_heli\laatc\data\standard\wings_co.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Dexus";
                displayName = "Keeli Company";
                textures[] =
                {
                    "BNA_KC_Vehicles\Aviation\Data\Textures\LAATc\BNA_KC_LAATC_Auxiliary.paa",
                    "BNA_KC_Vehicles\Aviation\Data\Textures\LAATc\BNA_KC_LAATC_Cockpit.paa",
                    "lsd_vehicles_heli\laatc\data\glass_ca.paa",
                    "BNA_KC_Vehicles\Aviation\Data\Textures\LAATc\BNA_KC_LAATC_Hull.paa",
                    "BNA_KC_Vehicles\Aviation\Data\Textures\LAATc\BNA_KC_LAATC_Wings.paa"
                };
            };
        };

        class UserActions: UserActions
        {
            class Impulse
            {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;

                shortcut = "User19";
                onlyforplayer = 0;
                hideOnUse = 1;

                condition = QUOTE(isEngineOn this and ace_player == currentPilot this and !isTouchingGround this;);
                statement = QUOTE(this call ls_vehicle_fnc_ImpulseJoystick;);
            };
            class Repulse: Impulse
            {
                displayName = "Repulse";
                shortcut = "User20";
                statement = QUOTE(this call ls_vehicle_fnc_RepulseJoystick;);
            };

            class SpecialLoadVehicle
            {
                displayName = "Load Vehicle (Custom)";
                displayNameDefault = "<img size=2 image='\a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa'>";

                position = "pilotview";
                radius = 30;
                onlyForPlayer = 0;

                hideOnUse = 1;
                priority = 5;

                condition = QUOTE(this call BNAKC_fnc_canSpecialLoad;);
                statement = QUOTE(this call BNAKC_fnc_specialLoad;);
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };

        ls_impulsor_soundOn = "BNA_KC_ImpulseOn";
        ls_impulsor_soundOff = "BNA_KC_ImpulseOff";
        ls_impulsor_fuelDrain_1 = 0;
        ls_impulsor_fuelDrain_2 = 0;
        // ls_impulsor_boostSpeed_1 = 400; // Impulse speeds, default values listed
        // ls_impulsor_boostSpeed_2 = 600;
    };

    class 3AS_Republic_Transport_01_Base;
    class 3AS_Republic_Transport_01: 3AS_Republic_Transport_01_Base
    {
        class ACE_SelfActions;
    };
    class BNA_KC_RepubTransport: 3AS_Republic_Transport_01
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";
        editorPreview = "\BNA_KC_Vehicles\Aviation\Data\Textures\Previews\BNA_KC_RepubTransport.jpg";

        displayName = "[KC] Republic Transport";

        crew = "BNA_KC_Unit_Phase2_Pilot";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Vehicles\Aviation\Data\Textures\Transport\BNA_KC_Republic_Transport_Body.paa",
            "3as\3as_starships\data\hs_int_co.paa",
            "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "3as\3as_starships\data\hs_ext_co.paa",
                    "3as\3as_starships\data\hs_int_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
            class Imperial: Standard
            {
                displayName = "Imperial";
                textures[] =
                {
                    "3as\3as_starships\data\hs_Imp_ext_co.paa",
                    "3as\3as_starships\data\hs_int_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Dexus";
                displayName = "Keeli Company";
                textures[] =
                {
                    "BNA_KC_Vehicles\Aviation\Data\Textures\Transport\BNA_KC_Republic_Transport_Body.paa",
                    "3as\3as_starships\data\hs_int_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };
    };

    class VTOL_Base_F;
    class VTOL_01_base_F: VTOL_Base_F
    {
        class Turrets;
    };
    class VTOL_01_armed_base_F: VTOL_01_base_F
    {
        class Turrets: Turrets
        {
            class CopilotTurret;
            class GunnerTurret_01;
            class GunnerTurret_02;
        };
    };
    class B_T_VTOL_01_armed_F: VTOL_01_armed_base_F
    {
        class ACE_SelfActions;
    };
    class BNA_KC_Galaxy_Gunship: B_T_VTOL_01_armed_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Galaxy HAG";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };

        class Turrets: Turrets
        {
            class CopilotTurret: CopilotTurret {};
            class GunnerTurret_01: GunnerTurret_01
            {
                weapons[] =
                {
                    "BNA_KC_105mm",
                    "BNA_KC_Gatling_20mm"
                };
                magazines[] =
                {
                    "BNA_KC_100rnd_105mm",
                    "BNA_KC_4000rnd_20mm"
                };
            };
            class GunnerTurret_02: GunnerTurret_02
            {
                weapons[] = {"BNA_KC_40mm_VTOL"};
                magazines[] =
                {
                    "BNA_KC_40mm_GPR_240rnd",
                    "BNA_KC_40mm_APFSDS_160rnd"
                };
            };
        };
    };
    class BNA_KC_HAG_Base: BNA_KC_Galaxy_Gunship
    {
        // Scope
        scope = 1;
        scopeCurator = 0;
    };

    class VTOL_01_vehicle_base_F;
    class B_T_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
    {
        class ACE_SelfActions;
    };
    class BNA_KC_Galaxy_Transport_Vehicle: B_T_VTOL_01_vehicle_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Galaxy HVT";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };
    };
    class BNA_KC_HVT_Base: BNA_KC_Galaxy_Transport_Vehicle
    {
        // Scope
        scope = 1;
        scopeCurator = 0;
    };

    class VTOL_01_infantry_base_F;
    class B_T_VTOL_01_infantry_F: VTOL_01_infantry_base_F
    {
        class ACE_SelfActions;
    };
    class BNA_KC_Galaxy_Transport_Infantry: B_T_VTOL_01_infantry_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Galaxy HIT";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };
    };
    class BNA_KC_HIT_Base: BNA_KC_Galaxy_Transport_Infantry
    {
        // Scope
        scope = 1;
        scopeCurator = 0;
    };

    class Plane_Fighter_03_base_F;
    class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
    {
        class Turrets;
    };
    class 3AS_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F
    {
        class ACE_SelfActions;
        class Turrets: Turrets
        {
            class LaserPilot;
            class Reargun;
        };
    };
    class BNA_KC_ARC_170: 3AS_ARC_170_Base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] ARC-170";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        hiddenSelectionsTextures[] =
        {
            "\3as\3as_arc170\Data\Main_Frame_co.paa",
            "\3as\3as_arc170\Data\Wings_Engines_co.paa",
            "\3as\3as_arc170\Data\Guns_co.paa"
        };

        BNA_KC_Shield_hasShield = 1;
        BNA_KC_Shield_maxHealth = 20;

        textureList[] = {"Standard", 1};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\3as\3as_arc170\Data\Main_Frame_co.paa",
                    "\3as\3as_arc170\Data\Wings_Engines_co.paa",
                    "\3as\3as_arc170\Data\Guns_co.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER

            class SpawnCrew
            {
                displayName = "Create Vehicle Crew";
                condition = "_this#0 emptyPositions '' > 0";
                statement = "(group ace_player) createVehicleCrew _this#0";
            };
            class DeleteCrew
            {
                displayName = "Delete Vehicle Crew";
                condition = "false in (_this#0 call ace_common_fnc_getVehicleCrew apply {_x call CWR_fnc_isPlayer;})";
                statement = "{_this#0 deleteVehicleCrew _x;} forEach (_this#0 call ace_common_fnc_getVehicleCrew)";
            };

            class Shield
            {
                displayName = "Shield Health: %1";
                condition = "true";
                statement = "";
                modifierFunction = ""; // Show shield % in action name
                runOnHover = 0;

                class ActivateShield
                {
                    displayName = "Activate Shield";
                    condition = "!(_this#0 getVariable ['BNA_KC_Shield_isActive', false]) and ace_player == driver _this#0";
                    statement = "_this#0 call BNAKC_fnc_activateShield";
                };
                class DeactivateShield
                {
                    displayName = "Deactivate Shield";
                    condition = "_this#0 getVariable ['BNA_KC_Shield_isActive', false] and ace_player == driver _this#0";
                    statement = "_this#0 call BNAKC_fnc_deactivateShield";
                };
            };
        };

        class Turrets: Turrets
        {
            class LaserPilot: LaserPilot
            {
                // Re-Do a bunch of work because the 501st Aux breaks things
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100};
                discreteDistanceInitIndex = 5;
                elevationMode = 0;
                LODTurnedIn = 1000;
                LODTurnedOut = 1000;

                turretFollowFreeLook = 2;
                turretInfoType = "RscOptics_Heli_Attack_01_gunner";
                gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
                outGunnerMayFire = 1;
                startEngine = 0;

                // Animations
                gunnerAction = "Plane_Fighter_03_pilot";
                gunnerInAction = "Plane_Fighter_03_pilot";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                gunnerLeftHandAnimName = "lever_copilot";
                gunnerRightHandAnimName = "stick_copilot";
                animationSourceHatch = "";
            };
            class Reargun: Reargun {};
        };
    };
};


class CfgSounds
{
    class BNA_KC_ImpulseOn
    {
        name = "LAAT Impulse On";
        sound[] = {"BNA_KC_Vehicles\Aviation\Data\Audio\ImpulseOn.wav", 800, 1, 800};
        titles[] = {1, "Impulse Turns On"};
    };
    class BNA_KC_ImpulseOff
    {
        name = "LAAT Impulse Off";
        sound[] = {"BNA_KC_Vehicles\Aviation\Data\Audio\ImpulseOff.wav", 500, 1, 500};
        titles[] = {1, "Impulse Turns Off"};
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_VAviation
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Vehicles - Aviation";
    };
};