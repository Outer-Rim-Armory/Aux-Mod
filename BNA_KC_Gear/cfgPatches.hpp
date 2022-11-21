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
			"BNA_KC_Unit_ABTrooper",
			"BNA_KC_Unit_ABTrooper_v2",

			// Ranks
			"BNA_KC_Unit_CR",
			"BNA_KC_Unit_CT",
			"BNA_KC_Unit_SCT",
			"BNA_KC_Unit_VCT",
			"BNA_KC_Unit_LCPL_CPL",
			"BNA_KC_Unit_CS_CSS",
			"BNA_KC_Unit_CMS_CSM",
			"BNA_KC_Unit_LT",
			"BNA_KC_Unit_1LT",
			"BNA_KC_Unit_CPT",
			"BNA_KC_Unit_MAJ",
			"BNA_KC_Unit_CMD",

			// ARC
			"BNA_KC_Unit_ARC",
			"BNA_KC_Unit_ARC_CO",

			// ARF
			"BNA_KC_Unit_ARF",
			"BNA_KC_Unit_ARF_NCO",
			"BNA_KC_Unit_ARF_Officer",

			// Customs
			"BNA_KC_Unit_Keeli",
			"BNA_KC_Unit_Guardian",
			"BNA_KC_Unit_Joe",
			"BNA_KC_Unit_Fil",
			"BNA_KC_Unit_Fil_Squad",
			"BNA_KC_Unit_Ponds",
			"BNA_KC_Unit_Stone",

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
			// P1 Helmets
			"BNA_KC_P1Helmet_Trooper",
			"BNA_KC_P1Helmet_Trooper_v2",
			"BNA_KC_P1Helmet_Trooper_v3",

			// P2 Helmets
			"BNA_KC_P2Helmet_Trooper",
			"BNA_KC_P2Helmet_Officer",
			"BNA_KC_P2Helmet_Recruit",
			"BNA_KC_P2Helmet_VCT",
			"BNA_KC_P2Helmet_SCT",
			"BNA_KC_P2Helmet_LCPL_CPL",
			"BNA_KC_P2Helmet_CS_CSS",
			"BNA_KC_P2Helmet_CMS_CSM",

			// Airborne
			"BNA_KC_AB_Helmet",
			"BNA_KC_AB_Helmet_v2",
			
			// P1 Pilots

			// P2 Pilots
			"BNA_KC_PilotHelmet",

			// Engineer
			"BNA_KC_Engineer_Helmet",

			// Insulated
			"BNA_KC_P2Helmet_Snow_Trooper",

			// SpecOPs
			"BNA_KC_P2_Reeker_Helmet_1",
			"BNA_KC_P2_Reeker_Helmet_2",

			// Uniforms
			"BNA_KC_Uniform_Trooper",
			"BNA_KC_Uniform_ABTrooper",
			"BNA_KC_Uniform_Pilot",
			"BNA_KC_Uniform_Snow_Trooper",
			
			
			// Customs
			// P1 Helmets

			// P2 Helmets
			"BNA_KC_P2Helmet_Keeli",
			"BNA_KC_P2Helmet_Guardian",
			"BNA_KC_P2Helmet_Dexus",
			"BNA_KC_P2Helmet_Vortex",
			"BNA_KC_P2Helmet_Burnt",
			"BNA_KC_P2Helmet_Patriot",
			"BNA_KC_P2Helmet_Joe",
			"BNA_KC_P2Helmet_Fil",
			"BNA_KC_P2Helmet_Fil_Squad",
			"BNA_KC_P2Helmet_Ponds",
			"BNA_KC_P2Helmet_Stone",
			"BNA_KC_P2Helmet_Sytha",
			"BNA_KC_P2Helmet_Ox",

			// P1 Pilots

			// P2 Pilots
			"BNA_KC_PilotHelmet_Dexus",

			// Uniforms
			"BNA_KC_Uniform_Keeli",
			"BNA_KC_Uniform_Guardian",
			"BNA_KC_Uniform_Joe",
			"BNA_KC_Uniform_Fil",
			"BNA_KC_Uniform_Fil_Squad",
			"BNA_KC_Uniform_Ponds",
			"BNA_KC_Uniform_Stone",

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
	// Units
	class BNA_KCSub_InfP1
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "INF - Phase 1";
	};

	class BNA_KCSub_InfP2
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "INF - Phase 2";
	};

	class BNA_KCSub_InfRanks
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "INF - Rank Units";
	};

	class BNA_KCSub_InfAB
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Airborne";
	};

	class BNA_KCSub_SF_ARC
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "SF - ARC";
	};

	class BNA_KCSub_SF_ARF
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "SF - ARF";
	};


	// Vehicles
	class BNA_KCSub_LAATS
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "LAAT's";
	};

	// Objects
	class BNA_KC_EditorSubcategory_Gonk
	{
		scope = 2;
		scopeCurator = 2;
		displayName="Loadout Gonks";
	};


	// Misc
	class BNA_KC_EditorSubcategory_Ambi
	{
		scope = 2;
		scopeCurator = 2;
		displayName="Ambience";
	};
};