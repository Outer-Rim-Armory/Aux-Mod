#include "CfgPatches.hpp"


class CfgVehicles
{
    // class W41_LAAT_MK1;
    // class W41_LAAT_MK2;
    // 41st has numbers swapped, mk1 = mk2, mk2 = mk1
    // 3AS Base Classes (For when dependency free)
    class 3as_LAAT_Mk1;
    // class 3as_LAAT_Mk1Lights;
    class 3as_LAAT_Mk2;
    // class 3as_LAAT_Mk2Lights;

    class BNA_KC_LAATi_MK1: 3as_LAAT_Mk1
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] LAAT/i MK1";

        armor = 200;
        crew = "BNA_KC_Unit_Phase2_Pilot";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\BNA_KC_LAAT_Standard_Body.paa",
            "BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\BNA_KC_LAAT_Standard_Wings.paa",
            "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
            "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
            "3AS\3as_Laat\LAATI\data\Interior_CO.paa"
        };

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

        // Impulse
        tas_can_impulse = 0; // Disables 3AS's Impulse System
		ls_impulsor_soundOn = "BNA_KC_ImpulseOn";
		ls_impulsor_soundOff = "BNA_KC_ImpulseOff";
    };

    class BNA_KC_LAATi_MK2: 3as_LAAT_Mk2
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] LAAT/i MK2";

        armor = 200;
        crew = "BNA_KC_Unit_Phase2_Pilot";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\BNA_KC_LAAT_Standard_Body.paa",
            "BNA_KC_Vehicles\Aviation\Data\Textures\LAATi\BNA_KC_LAAT_Standard_Wings.paa",
            "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
            "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
            "3AS\3as_Laat\LAATI\data\Interior_CO.paa"
        };

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

        // Impulse
        tas_can_impulse = 0; // Disables 3AS's Impulse System
		ls_impulsor_soundOn = "BNA_KC_ImpulseOn";
		ls_impulsor_soundOff = "BNA_KC_ImpulseOff";
    };

    class lsd_laatc_base;
    class lsd_heli_laatc: lsd_laatc_base
    {
        class UserActions; // LS's loading is also done through UserActions
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
        textureList[] = {}; // Clears the extra skins

        class UserActions: UserActions
        {
            class SpecialLoadVehicle
            {
                // Special action used for vehicles that are not fully compatible with ViV (vehicle-in-vehicle)
                // Notably used for 3AS's AT-TE
                displayName = "Load Vehicle (Custom)";
                displayNameDefault = "<img size=2 image='\a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa'>";
                radius = 30;
                hideOnUse = 1;
                priority = 5;

                condition = "_objects = nearestObjects [this, [], 30]; _objects = _objects select {getNumber (configFile >> 'CfgVehicles' >> typeOf _x >> 'VehicleTransport' >> 'Cargo' >> 'BNA_KC_SpecialLoad') isEqualTo 1}; count _objects >= 1 && (this canVehicleCargo (_objects select 0) isEqualTo [true, true]);";
                /* Explanation
                _objects = nearestObjects [this, [], 30];
                  > Gets array of all objects within 30 meters of the player's vehicle
                _objects = _objects select {getNumber (configFile >> 'CfgVehicles' >> typeOf _x >> 'VehicleTransport' >> 'Cargo' >> 'BNA_KC_SpecialLoad') isEqualTo 1};
                  > Filters array by objects with the BNA_KC_SpecialLoad property set to 1
                
                count _objects >= 1 && (heli canVehicleCargo (_objects select 0) isEqualTo [true, true]);
                  > Check if there is at least one object found, and the closest object can both fit into the vehicle and is not already loaded
                */
                statement = "_objects = nearestObjects [this, [], 30]; _objects = _objects select {getNumber (configFile >> 'CfgVehicles' >> typeOf _x >> 'VehicleTransport' >> 'Cargo' >> 'BNA_KC_SpecialLoad') isEqualTo 1}; this setVehicleCargo (_objects select 0);";
            };
        };
    };

    class 3AS_Republic_Transport_01;
    class BNA_KC_RepubTransport: 3AS_Republic_Transport_01
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Republic Transport";

        crew = "BNA_KC_Unit_Phase2_Pilot";

		hiddenselectionstextures[]=
		{
			"BNA_KC_Vehicles\Aviation\Data\Textures\Transport\BNA_KC_Republic_Transport_Body.paa",
			"3as\3as_starships\data\hs_int_co.paa"
		};
	};
	
	class Plane;
	class Plane_Base_F: Plane {};
	class VTOL_Base_F: Plane_Base_F {};
	class VTOL_01_base_F: VTOL_Base_F {};
	class VTOL_01_armed_base_F: VTOL_01_base_F
	{
		class Turrets;
	};
	class B_T_VTOL_01_armed_F: VTOL_01_armed_base_F
	{
		class Turrets: Turrets
		{
			class GunnerTurret_01;
			class GunnerTurret_02;
		};
	};
	class BNA_KC_HAG_Base: B_T_VTOL_01_armed_F
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";


        displayName = "[KC] Galaxy HAG";
        crew = "BNA_KC_Unit_Phase2_Pilot";
		typicalCargo[] = {"B_T_Soldier_F"};
		
		hiddenSelectionsTextures[] = 
		{
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa"
		};
		
		class Turrets: Turrets
		{
			
			//class CopilotTurret: CopilotTurret{};
			class GunnerTurret_01: GunnerTurret_01
			{
				weapons[]=
				{
					"BNA_KC_105mm",
						// "cannon_105mm_VTOL_01"
					"BNA_KC_Gatling_20mm"
						// "gatling_20mm_VTOL_01"
				};
				magazines[]=
				{
					"BNA_KC_100rnd_105mm",
						// "100Rnd_105mm_HEAT_MP"
					"BNA_KC_4000rnd_20mm"
						// "4000Rnd_20mm_Tracer_Red_shells"
				};
			};
			class GunnerTurret_02: GunnerTurret_02
			{
				weapons[]=
				{
					"BNA_KC_40mm_VTOL"
				};
				magazines[]=
				{
					"BNA_KC_40mm_GPR_240rnd",
					"BNA_KC_40mm_APFSDS_160rnd"
				};
			};
		};
		
		soundEngineOffExt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_ext_stop",1,1,600};
		soundEngineOffInt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_int_stop",1,1};
		soundEngineOnExt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_ext_start",1,1,600};
		soundEngineOnInt[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_01\VTOL_01_int_start",1,1};
	};
	
	class VTOL_01_unarmed_base_F: VTOL_01_base_F {};
	class VTOL_01_vehicle_base_F: VTOL_01_unarmed_base_F {};
	class B_T_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F {};
	class BNA_KC_HVT_Base: B_T_VTOL_01_vehicle_F
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";


        displayName = "[KC] Galaxy HVT";
        crew = "BNA_KC_Unit_Phase2_Pilot";
	};

	class VTOL_01_infantry_base_F: VTOL_01_unarmed_base_F {};
	class B_T_VTOL_01_infantry_F: VTOL_01_infantry_base_F {};
	class BNA_KC_HIT_Base: B_T_VTOL_01_infantry_F
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";


        displayName = "[KC] Galaxy HIT";
        crew = "BNA_KC_Unit_Phase2_Pilot";
	};
};

class Extended_init_EventHandlers 
{
    // Add LS Impulse to 3AS vics
	class BNA_KC_LAATi_MK1
	{
		class BNA_KC_LAATi_MK1_init
		{
			init = "(_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
		};
	};
	class BNA_KC_LAATi_MK2
	{
		class BNA_KC_LAATi_MK2_init
		{
			init = "(_this) spawn ls_vehicle_fnc_ImpulsorMonitor;";
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