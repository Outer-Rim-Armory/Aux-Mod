class CfgPatches
{
	class BNA_KC_Gear
	{
		author = "SweMonkey";
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"A3_Sounds_F",
			"3AS_Main",
			"3AS_Characters",
			"3as_GNK_Prop",
			"LS_units_clones",
			"lsd_vehicles_heli",
			"lsd_equipment_bluefor",
			"ls_armor_bluefor",
			"lsd_units_bluefor",
			"SWLB_clones",
			"SWLB_equipment_backpacks"
		};
		units[] =
		{
			// Base Units
			"BNA_KC_Unit_Trooper",
			"BNA_KC_Unit_Pilot",
			"BNA_KC_Unit_Snow_Trooper",
			"BNA_KC_Backpack",
			"BNA_KC_Backpack_Medic",
			"BNA_KC_Backpack_Keeli",

			// Customs
			"BNA_KC_Unit_Keeli",
			"BNA_KC_Unit_Guardian",
			"BNA_KC_Unit_Joe",
			"BNA_KC_Unit_Fil",
			"BNA_KC_Unit_Fil_Squad",

			// Objects
			"BNA_KC_Gonk_Basic",
			"BNA_KC_Gonk_Advanced",

			// Vehicles
			// Base Vehicles
			"BNA_KC_Standard_laati",
			"BNA_KC_Standard_laati_transport",
			"BNA_KC_Standard_laatc",
			// Dexus LAAT
			"BNA_KC_Dexus_laati",
			"BNA_KC_Dexus_laati_transport"
		};
		weapons[] =
		{
			// Base Armor
			// Helmets
			"BNA_KC_P2Helmet_Trooper",
			"BNA_KC_P2Helmet_Officer",
			"BNA_KC_P2Helmet_Recruit",
			"BNA_KC_P2Helmet_VCT",
			"BNA_KC_P2Helmet_SCT",
			"BNA_KC_P2Helmet_LCPL_CPL",
			"BNA_KC_P2Helmet_CS_CSS",
			"BNA_KC_P2Helmet_CMS_CSM",

			"BNA_KC_PilotHelmet",

			"BNA_KC_Engineer_Helmet",

			"BNA_KC_P2Helmet_Snow_Trooper",

			"BNA_KC_P2_Reeker_Helmet_1",
			"BNA_KC_P2_Reeker_Helmet_2",

			// Uniforms
			"BNA_KC_Uniform_Trooper",
			"BNA_KC_Uniform_Pilot",
			"BNA_KC_Uniform_Snow_Trooper",
			
			
			// Customs
			// Helmets
			// P2
			"BNA_KC_P2Helmet_Keeli",
			"BNA_KC_P2Helmet_Guardian",
			"BNA_KC_P2Helmet_Dexus",
			"BNA_KC_P2Helmet_Vortex",
			"BNA_KC_P2Helmet_Burnt",
			"BNA_KC_P2Helmet_Patriot",
			"BNA_KC_P2Helmet_Joe",
			"BNA_KC_P2Helmet_Fil",
			"BNA_KC_P2Helmet_Fil_Squad",

			// Pilots
			"BNA_KC_PilotHelmet_Dexus",

			// Uniforms
			"BNA_KC_Uniform_Keeli",
			"BNA_KC_Uniform_Guardian",
			"BNA_KC_Uniform_Joe",
			"BNA_KC_Uniform_Fil",
			"BNA_KC_Uniform_Fil_Squad",

			// Vests
			"BNA_KC_Vest_Officer_Keeli",
			
			// NVGs
			"BNA_KC_NVG",
			"BNA_KC_NVG_Commander",
			"BNA_KC_NVG_Keeli",
			"BNA_KC_NVG_Keeli_Rangefinder"
		};
	};
};

class CfgMods
{
	class Mod_Base;
	class BNA_KC: Mod_Base
	{
		logo = "BNA_KC_Gear\Data\UI\BNA_KC_Logo.paa";
		logoOver = "BNA_KC_Gear\Data\UI\BNA_KC_Logo.paa";
		picture = "BNA_KC_Gear\Data\UI\BNA_KC_Logo.paa";
		name = "[KC] Keeli Company Aux Mod";
		dlcColor[] = {0,0,0,1};
	};
};

class CfgFactionClasses
{
	class BNA_KCFac
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "[KC] Keeli Company";
	};
};

class CfgEditorCategories
{
	class BNA_KC_EditorCategory_Objects
	{
		scope = 2;
		scopeCurator = 2;
		displayName="[KC] Objects";
	};
};

class CfgEditorSubcategories
{
	class BNA_KCSub_InfP1
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "Phase 1 Infantry";
	};
	class BNA_KCSub_InfP2
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "Phase 2 Infantry";
	};
	class BNA_KCSub_LAATS
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "LAAT's";
	};
	class BNA_KC_EditorSubcategory_Gonk
	{
		scope = 2;
		scopeCurator = 2;
		displayName="Loadout Gonks";
	};
	class BNA_KC_EditorSubcategory_Ambi
	{
		scope = 2;
		scopeCurator = 2;
		displayName="Ambience";
	};
};