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
			// Infantry P2
			"BNA_KC_Unit_INF_CR",
			"BNA_KC_Unit_INF_SCT",
			"BNA_KC_Unit_INF_VCT",
			"BNA_KC_Unit_INF_LCPL",
			"BNA_KC_Unit_INF_CPL",
			"BNA_KC_Unit_INF_CS",
			"BNA_KC_Unit_INF_CSS",
			"BNA_KC_Unit_INF_CMS",
			"BNA_KC_Unit_INF_CSM",
			"BNA_KC_Unit_INF_LT",
			"BNA_KC_Unit_INF_1LT",
			"BNA_KC_Unit_INF_CPT",
			"BNA_KC_Unit_INF_MAJ",
			"BNA_KC_Unit_INF_CMD",
			// Infantry P1
			"BNA_KC_Unit_INF_P1_CR",
			"BNA_KC_Unit_INF_P1_SCT",
			"BNA_KC_Unit_INF_P1_VCT",
			"BNA_KC_Unit_INF_P1_LCPL",
			"BNA_KC_Unit_INF_P1_CPL",
			"BNA_KC_Unit_INF_P1_CS",
			"BNA_KC_Unit_INF_P1_CSS",
			"BNA_KC_Unit_INF_P1_CMS",
			"BNA_KC_Unit_INF_P1_CSM",
			"BNA_KC_Unit_INF_P1_LT",
			"BNA_KC_Unit_INF_P1_1LT",
			"BNA_KC_Unit_INF_P1_CPT",
			"BNA_KC_Unit_INF_P1_MAJ",
			"BNA_KC_Unit_INF_P1_CMD",
			// Airborne
			"BNA_KC_Unit_AB_CT",
			"BNA_KC_Unit_AB_NCO",
			"BNA_KC_Unit_AB_Officer",
			// ARC
			"BNA_KC_Unit_ARC",
			"BNA_KC_Unit_ARC_Officer",
			// ARF
			"BNA_KC_Unit_ARF",
			"BNA_KC_Unit_ARF_NCO",
			"BNA_KC_Unit_ARF_Officer",
			// BARC
			"BNA_KC_Unit_BARC",
			// Reeker
			"BNA_KC_Unit_Reeker",

			// Customs
			"BNA_KC_Unit_Keeli",
			"BNA_KC_Unit_Guardian",
			"BNA_KC_Unit_Joe",
			"BNA_KC_Unit_Fil",
			"BNA_KC_Unit_Fil_Squad",
			"BNA_KC_Unit_Ponds",
			"BNA_KC_Unit_Stone",
			"BNA_KC_Unit_Vortex",
			// Objects
			"BNA_KC_Gonk_Basic",
			"BNA_KC_Gonk_Advanced"
		};
		weapons[] =
		{
			// Base Armor
			// P1 Helmets
			"BNA_KC_P1Helmet_CR",
			"BNA_KC_P1Helmet_CT",
			"BNA_KC_P1Helmet_v2",
			"BNA_KC_P1Helmet_v3",
			"BNA_KC_P1Helmet_SCT",
			"BNA_KC_P1Helmet_VCT",
			"BNA_KC_P1Helmet_LCPL",
			"BNA_KC_P1Helmet_CPL",

			// P2 Helmets
			"BNA_KC_P2Helmet_CR",
			"BNA_KC_P2Helmet_CR_v2",
			"BNA_KC_P2Helmet_Trooper",
			"BNA_KC_P2Helmet_Trooper_v2",
			"BNA_KC_P2Helmet_SCT",
			"BNA_KC_P2Helmet_SCT_v2",
			"BNA_KC_P2Helmet_VCT",
			"BNA_KC_P2Helmet_VCT_v2",
			"BNA_KC_P2Helmet_LCPL",
			"BNA_KC_P2Helmet_LCPL_v2",
			"BNA_KC_P2Helmet_CPL",
			"BNA_KC_P2Helmet_CS_CSS",
			"BNA_KC_P2Helmet_CMS_CSM",
			"BNA_KC_P2Helmet_Officer",

			// Airborne
			"BNA_KC_AB_Helmet",
			"BNA_KC_AB_Helmet_v2",
			
			// P1 Pilots
			"BNA_KC_PilotHelmet_P1",

			// P2 Pilots
			"BNA_KC_PilotHelmet",

			// Engineer
			"BNA_KC_Engineer_Helmet",

			// Insulated
			"BNA_KC_P2Helmet_Snow_Trooper",

			// SpecOPs
			"BNA_KC_P2_Reeker_Helmet",
			"BNA_KC_P2_Reeker_Helmet_v2",

			// ARC
			"BNA_KC_ARC_Helmet",

			// BARC
			"BNA_KC_BARC_Helmet",

			// Uniforms
			"BNA_KC_Uniform_Trooper",
			"BNA_KC_Uniform_Trooper_v2",
			"BNA_KC_Uniform_ABTrooper",
			"BNA_KC_Uniform_Pilot",
			"BNA_KC_Uniform_Snow_Trooper",

			// Rank Uniforms
			"BNA_KC_Uniform_CR",
			"BNA_KC_Uniform_SCT",
			"BNA_KC_Uniform_VCT",
			"BNA_KC_Uniform_LCPL",
			"BNA_KC_Uniform_CPL",
			// "BNA_KC_Uniform_CS",
			// "BNA_KC_Uniform_CSS",
			// "BNA_KC_Uniform_CMS",
			// "BNA_KC_Uniform_CSM",
			// "BNA_KC_Uniform_LT",
			// "BNA_KC_Uniform_1LT",
			// "BNA_KC_Uniform_CPT",
			// "BNA_KC_Uniform_MAJ",
			// "BNA_KC_Uniform_CMD",
			
			// Customs
			// P1 Helmets
			"BNA_KC_P1Helmet_Keeli",
			"BNA_KC_P1Helmet_Burnt",
			"BNA_KC_P1Helmet_Dexus",
			"BNA_KC_P1Helmet_Joe",
			"BNA_KC_P1Helmet_Axel",
			"BNA_KC_P1Helmet_Hazard",
			"BNA_KC_P1Helmet_Guardian",
			"BNA_KC_P1Helmet_Lui",
			"BNA_KC_P1Helmet_Sin",
			"BNA_KC_P1Helmet_Sytha",
			"BNA_KC_P1Helmet_Anvil",

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
			"BNA_KC_P2Helmet_Axel",
			"BNA_KC_P2Helmet_Hazard",
			"BNA_KC_P2Helmet_Lui",
			"BNA_KC_P2Helmet_Nokk",

			// P1 Pilots
			"BNA_KC_PilotHelmet_P1_Dexus",

			// P2 Pilots
			"BNA_KC_PilotHelmet_Dexus",
			// "BNA_KC_PilotHelmet_Lui",

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
	class BNA_KCSub_Inf_Ranks
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Infantry";
	};

	class BNA_KCSub_INF_P1_Ranks
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Infantry (Phase 1)";
	};

	class BNA_KCSub_Amr_Reeker
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Reeker";
	};

	class BNA_KCSub_AB_Ranks
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Airborne";
	};

	class BNA_KCSub_AVI_Ranks
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Aviation";
	};

	class BNA_KCSub_SF_ARC
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "ARC";
	};

	class BNA_KCSub_SF_ARF
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "ARF";
	};

	class BNA_KCSub_SF_Snow
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Snow Troopers";
	};

	class BNA_KCSub_SF_BARC
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "BARC Troopers";
	};

	class BNA_KCSub_Customs
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "Customs";
	};


	// Vehicles
	class BNA_KCSub_LAATS
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "LAATs";
	};
	class BNA_KCSub_GVics
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ground Vehicles";
	};

	// Objects
	class BNA_KC_EditorSubcategory_Gonk
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName="Loadout Gonks";
	};


	// Misc
	class BNA_KC_EditorSubcategory_Ambi
	{
		dlc = "BNA_KC";
		author = "Monkey";
		scope = 2;
		scopeCurator = 2;
		displayName="Ambience";
	};
};