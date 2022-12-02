#include "cfgPatches.hpp"




class CfgAmmo
{
	class 3AS_ATTE_AT_Ammo;
	class 3AS_ATTE_125mm_HE;
	
	class BNA_KC_ATTE_AT_Ammo: 3AS_ATTE_AT_Ammo
	{
		simulation = "shotShell";
	};
	class BNA_KC_ATTE_HE_Ammo: 3AS_ATTE_125mm_HE
	{
		simulation = "shotShell";
	};
};
class CfgMagazines
{
	class 3AS_10rnd_ATTE_AT_Mag;
	class 3AS_10rnd_ATTE_HE_Mag;
	
	class BNA_KC_ATTE_AT_Mag: 3AS_10rnd_ATTE_AT_Mag
	{
		ammo = "BNA_KC_ATTE_AT_Ammo";
	};
	class BNA_KC_ATTE_HE_Mag: 3AS_10rnd_ATTE_HE_Mag
	{
		ammo = "BNA_KC_ATTE_HE_Ammo";
	};
};
class CfgWeapons
{
	class 3AS_ATTE_AT_Turret;
	class BNA_KC_ATTE_Tankgun: 3AS_ATTE_AT_Turret
	{
		
		displayName="ATTE Cannon";
		magazines[]=
		{
			"BNA_KC_ATTE_AT_Mag",
			"BNA_KC_ATTE_HE_Mag"
		};
	};
};


class CfgVehicles
{
	//-----------------------------------------------------
	// LAATs
	//-----------------------------------------------------
	
	class lsd_heli_laati;
	class lsd_heli_laatc;
	class lsd_heli_laati_ab;
	class lsd_heli_laati_transport;
	
	// LAAT Gunship
	// Base
	class BNA_KC_Standard_laati: lsd_heli_laati
	{
		armor = 200;
		displayName = "[KC] Standard LAAT Gunship w/ Pylons";
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_LAATS";
		crew = "BNA_KC_Unit_Pilot";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Body1.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Body2.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Door1.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Door2.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Door3.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Wings.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Cockpits.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		textureList[] = {};
		weapons[] = 
		{
			"ls_laat_gun",
			"ls_laat_gun_2",
			"ls_laat_DAR",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[] = 
		{
			"200rnd_laat_he_mag",
			"200rnd_laat_he_mag",
			"200rnd_laat_apfsds_mag",
			"200rnd_laat_apfsds_mag",
			"12rnd_missiles",
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
	};
	
	// LAAT Transport
	// Base
	class BNA_KC_Standard_laati_transport: lsd_heli_laati_transport
	{
		armor = 200;
		displayName = "[KC] Standard LAAT Transport";
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_LAATS";
		crew = "BNA_KC_Unit_Pilot";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Body1.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Body2.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Door1.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Door2.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Door3.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Wings.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Standard\BNA_KC_LAAT_Standard_Cockpits.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		textureList[] = {};
	};
	
	// LAAT C
	// Base
	class BNA_KC_Standard_laatc: lsd_heli_laatc
	{
		displayName = "[KC] Standard LAAT/C";
		faction="BNA_KCFac";
		editorSubcategory="BNA_KCSub_LAATS";
		crew = "BNA_KC_Unit_Pilot";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\Textures\Vehicles\LAATC\BNA_KC_LAATC_Auxiliary.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAATC\BNA_KC_LAATC_Cockpit.paa",
			"lsd_vehicles_heli\laatc\data\glass_ca.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAATC\BNA_KC_LAATC_Hull.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAATC\BNA_KC_LAATC_Wings.paa"
		};
		textureList[] = {};
	};
	
	//-----------------------------------------------------
	// Custom LAATs
	//-----------------------------------------------------
	
	// Dexus
	// Pylons
	class BNA_KC_Dexus_laati: BNA_KC_Standard_laati
	{
		displayName = "[KC] Dexus LAAT Gunship w/ Pylons";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Body1.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Body2.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Door1.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Door2.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Door3.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Wings.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Cockpits.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
	};
	// Transport
	class BNA_KC_Dexus_laati_transport: BNA_KC_Standard_laati_transport
	{
		displayName = "[KC] Dexus LAAT Transport";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Body1.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Body2.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Door1.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Door2.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Door3.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Wings.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Gear\Data\Textures\Vehicles\LAAT\Dexus\BNA_KC_LAAT_Dexus_Cockpits.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
	};
	
	
	//-----------------------------------------------------
	// The scary zone
	//-----------------------------------------------------
	// BNA_KCFac
	// BNA_KCSub_LAATS
	// BNA_KCSub_GVics
	// ["All","AllVehicles","Land","LandVehicle","Tank","Tank_F","MBT_01_base_F","B_MBT_01_base_F","B_MBT_01_cannon_F"]
	// weapons[] = {"cannon_120mm","ACE_LMG_coax_MAG58_mem3"};
	// magazines[] = {"24Rnd_120mm_APFSDS_shells_Tracer_Red","12Rnd_120mm_HE_shells_Tracer_Red","12Rnd_120mm_HEAT_MP_T_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red"};
	
	// weapons[] = {"3AS_ATTE_AT_Turret","SmokeLauncher"};
	// magazines[] = {"3AS_10rnd_ATTE_AT_Mag","3AS_10rnd_ATTE_AT_Mag","3AS_10rnd_ATTE_AT_Mag","3AS_10rnd_ATTE_HE_Mag","3AS_10rnd_ATTE_HE_Mag","3AS_10rnd_ATTE_HE_Mag","SmokeLauncherMag"};
	
	
	class Tank_F;
	class MBT_01_base_F: Tank_F
	{
		class Turrets;
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
		class AnimationSources;
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
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
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon;
			class muzzle_rot_cannon;
			class muzzle_rot_cmdr;
			class recoil_source;
			class commander_gun_recoil;
		};
	};
	class BNA_KC_MBT_Slammer: B_MBT_01_TUSK_F
	{
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_GVics";
		displayName = "[KC] Whacky Tank Thang";
		hiddenSelectionsTextures[] = 
		{
			"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",
			"A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa",
			"a3\armor_f_epc\mbt_01\data\mbt_addons_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"HMG_127_MBT",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"SmokeLauncherMag"
						};
					};
				};
				
				// gunBeg = "Usti hlavne";
				// gunEnd = "Konec hlavne";
				// memoryPointGun[] = {"usti hlavne3"};
				weapons[]=
				{
					"BNA_KC_ATTE_Tankgun",
					"LMG_coax"
				};
				magazines[]=
				{
					"BNA_KC_ATTE_AT_Mag",
					"BNA_KC_ATTE_AT_Mag",
					"BNA_KC_ATTE_HE_Mag",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon: muzzle_hide_cannon
			{
				source="reload";
				weapon="BNA_KC_ATTE_Tankgun";
			};
			class muzzle_rot_cannon: muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="BNA_KC_ATTE_Tankgun";
			};
			class muzzle_rot_cmdr: muzzle_rot_cmdr
			{
				source="ammorandom";
				weapon="HMG_127_MBT";
			};
			class recoil_source: recoil_source
			{
				source="reload";
				weapon="BNA_KC_ATTE_Tankgun";
			};
			class commander_gun_recoil: commander_gun_recoil
			{
				source="reload";
				weapon="HMG_127_MBT";
			};
		};
	};
	
};