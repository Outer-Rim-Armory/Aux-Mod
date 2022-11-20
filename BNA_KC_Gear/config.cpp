#include "cfgPatches.hpp"
#include "cfgSounds.hpp"
#include "cfgFunctions.hpp"

#define ITEM_2(a) a, a
#define ITEM_3(a) a, a, a
#define ITEM_4(a) a, a, a, a
#define ITEM_5(a) a, a, a, a, a
#define ITEM_6(a) a, a, a, a, a, a
#define ITEM_7(a) a, a, a, a, a, a, a
#define ITEM_8(a) a, a, a, a, a, a, a, a
#define ITEM_9(a) a, a, a, a, a, a, a, a, a

class CfgWeapons
{
	//---------------------------------------------------
	// Helmets
	//---------------------------------------------------
	
	class ls_gar_phase1_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_phase1Pilot_helmet;

	class ls_gar_phase2_helmet;
	// Phase 1 ARF is always used
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_engineer_helmet;
	class lsd_gar_airborne_helmet;
	class ls_gar_phase2insulated_helmet;
	class ls_sob_phase2SpecOp_helmet;
	
	//---------------------------------------------------
	// Phase 1 Helmets
	//---------------------------------------------------

	// Version 1
	class BNA_KC_P1Helmet_Trooper: ls_gar_phase1_helmet
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeArsenal = 2;

		displayName = "[KC] Clone Trooper P1 Helmet (v1)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P1Helmet_Trooper_v1_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// Version 2
	class BNA_KC_P1Helmet_Trooper_v2: BNA_KC_P1Helmet_Trooper
	{
		displayName = "[KC] Clone Trooper P1 Helmet (v2)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P1Helmet_Trooper_v2_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// Version 3
	class BNA_KC_P1Helmet_Trooper_v3: BNA_KC_P1Helmet_Trooper
	{
		displayName = "[KC] Clone Trooper P1 Helmet (v3)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P1Helmet_Trooper_v3_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	//---------------------------------------------------
	// Phase 2 Helmets
	//---------------------------------------------------

	// Standard (CT)
	class BNA_KC_P2Helmet_Trooper: ls_gar_phase2_helmet
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Clone Trooper P2 Helmet (CT)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Trooper_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// CR Helmet
	class BNA_KC_P2Helmet_Recruit: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Clone Trooper P2 Helmet (CR)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Recruit_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	// SCT Helmet
	class BNA_KC_P2Helmet_SCT: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Clone Trooper P2 Helmet (SCT)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_SCT_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// VCT Helmet
	class BNA_KC_P2Helmet_VCT: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Clone Trooper P2 Helmet (VCT)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_VCT_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// LCPL-CPL Helmet
	class BNA_KC_P2Helmet_LCPL_CPL: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Clone Trooper P2 Helmet (LCPL-CPL)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_LCPL_CPL_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// CS-CSS Helmet
	class BNA_KC_P2Helmet_CS_CSS: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Clone Trooper P2 Helmet (CS-CSS)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_CS_CSS_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// CMS-CSM Helmet
	class BNA_KC_P2Helmet_CMS_CSM: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Clone Trooper P2 Helmet (CMS-CSM)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_CMS_CSM_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// Officer
	class BNA_KC_P2Helmet_Officer: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] Clone Trooper P2 Helmet (Officer)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Officer_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	
	//---------------------------------------------------
	// Pilot Helmets
	//---------------------------------------------------
	class BNA_KC_PilotHelmet: ls_gar_phase2Pilot_helmet
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Clone Pilot P2 Helmet";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_PilotHelmet_CO.paa",
			"ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
		};
	};
	
	//---------------------------------------------------
	// Engineer Helmets
	//---------------------------------------------------
	class BNA_KC_Engineer_Helmet: ls_gar_engineer_helmet
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Clone Engineer Helmet";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_Engineer_Helmet_CO.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
			"ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
		};
	};
	
	//---------------------------------------------------
	// Snow Trooper Helmets
	//---------------------------------------------------
	class BNA_KC_P2Helmet_Snow_Trooper: ls_gar_phase2insulated_helmet
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[KC] Clone Trooper Insulated P2 Helmet";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_P2Helmet_Snow_Trooper_CO.paa"
		};
	};
	
	//---------------------------------------------------
	// ARF Helmets
	//---------------------------------------------------
	class BNA_KC_P1_ARF_Helmet: ls_gar_phase1Arf_helmet
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[KC] Clone Trooper P1 ARF Helmet";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\BNA_KC_ARFHelmet_CO.paa",
			"",
			"BNA_KC_Gear\Data\BNA_KC_ARFHelmet_CO.paa"
		};
	};
	
	//---------------------------------------------------
	// Reeker Helmets
	//---------------------------------------------------
	class BNA_KC_P2_Reeker_Helmet_1: ls_sob_phase2SpecOp_helmet
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[KC] Clone Trooper P2 Reeker Helmet (v1)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_Reeker1_CO.paa",
			"ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
		};
	};
	class BNA_KC_P2_Reeker_Helmet_2: BNA_KC_P2_Reeker_Helmet_1
	{
		displayName = "[KC] Clone Trooper P2 Reeker Helmet (v2)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_Reeker2_CO.paa",
			"ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
		};
	};

	//---------------------------------------------------
	// Airborne Helmets
	//---------------------------------------------------
	class BNA_KC_AB_Helmet: lsd_gar_airborne_helmet
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[KC] Clone Airborne Helmet (v1)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_ABHelmet_CO.paa"
		};
	}

	class BNA_KC_AB_Helmet_v2: BNA_KC_AB_Helmet
	{
		displayName = "[KC] Clone Airborne Helmet (v2)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_ABHelmet_v2_CO.paa"
		};
	}
	
	//---------------------------------------------------
	// Uniforms
	//---------------------------------------------------
	
	//class UniformItem;
	class UniformItem; 
	class ls_gar_phase2_uniform;
	class lsd_gar_phase2insulated_uniform;
	
	// Trooper
	class BNA_KC_Uniform_Trooper: ls_gar_phase2_uniform
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Clone Trooper Uniform";
		scope = 2;
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_Trooper";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	
	// Pilot
	class BNA_KC_Uniform_Pilot: BNA_KC_Uniform_Trooper
	{
		displayName = "[KC] Clone Pilot Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_Pilot";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	
	// Snow Trooper
	class BNA_KC_Uniform_Snow_Trooper: lsd_gar_phase2insulated_uniform
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Clone Snow Trooper Uniform";
		scope = 2;
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_Snow_Trooper";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	//---------------------------------------------------
	// Vests
	//---------------------------------------------------
	
	class VestItem;
	class SWLB_clone_officer_armor;
	class SWLB_clone_arc_armor;
	
	class BNA_KC_Vest_Officer_Keeli: SWLB_clone_officer_armor
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Clone Trooper Officer Vest (Keeli)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_OfficerVest_Keeli_CO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
			containerClass = "Supply40";
			hiddenSelections[] =
			{
				"camo1"
			};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.10000001;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 20;
					passThrough = 0.10000001;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 10;
					passThrough = 0.20000001;
				};
			};
		};
	};
	class BNA_KC_Vest_Arc: SWLB_clone_arc_armor
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Clone ARC Trooper Vest";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] =
		{
			"\SWLB_clones\data\arc_accessories_co.paa",
			"BNA_KC_Gear\Data\BNA_KC_ARC_Vest_CO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply100";
			hiddenSelections[] =
			{
				"camo1",
				"camo2"
			};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor = 20;
					PassThrough = 0.10000001;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 20;
					passThrough = 0.10000001;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 10;
					passThrough = 0.20000001;
				};
			};
		};
	};
	
	
	//---------------------------------------------------
	// Predefined Weapons
	//---------------------------------------------------
	
	class 3AS_DC15S_F;
	class 3AS_DC15C_F;
	class BNA_KC_DC15S_Predef: 3AS_DC15S_F
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "3AS_optic_reflex_DC15C";
				slot = "CowsSlot";
			};

			class LinkedItemsUnder
			{
				item = "";
				slot = "UnderBarrelSlot";
			};

			class LinkedItemsAcc
			{
				item = "";
				slot = "PointerSlot";
			};

			class LinkedItemsMuzzle
			{
				item = "";
				slot = "MuzzleSlot";
			};
		};
	};
	class BNA_KC_DC15C_Predef: 3AS_DC15C_F
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "3AS_optic_reflex_DC15C";
				slot = "CowsSlot";
			};

			class LinkedItemsUnder
			{
				item = "";
				slot = "UnderBarrelSlot";
			};

			class LinkedItemsAcc
			{
				item = "";
				slot = "PointerSlot";
			};

			class LinkedItemsMuzzle
			{
				item = "";
				slot = "MuzzleSlot";
			};
		};
	};
	
	//---------------------------------------------------
	// Night Vision
	//---------------------------------------------------
	
	class lsd_gar_standard_nvg;
	class SWLB_clone_ccVisor;
	class lsd_gar_rangefinder_nvg;

	// Phase 2 NVGs
	// Base
	class BNA_KC_NVG: lsd_gar_standard_nvg
	{
		scope = 2;
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = {2};

		displayName = "[KC] Republic P2 NV Visor";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_NVG_CO.paa"
		};
	};

	// Keeli
	class BNA_KC_NVG_Keeli: BNA_KC_NVG
	{
		displayName = "[KC] Republic P2 NV Visor (Keeli)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_NVG_Keeli_CO.paa"
		};
	};

	// Commander Visor
	// Base
	class BNA_KC_NVG_Commander: SWLB_clone_ccVisor
	{
		scope = 2;
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = {2};

		displayName = "[KC] Republic P2 Commander Visor";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_Commander_Visor_CO.paa"
		};
	};

	// Rangefinders
	// Base
	class BNA_KC_NVG_Keeli_Rangefinder: lsd_gar_rangefinder_nvg
	{
		scope = 2;
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = {2};

		displayName = "[KC] Republic P2 NV Rangefinder";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_Rangefinder_CO.paa"
		};
	};

	#include "custom_items.hpp"
};

class CfgVehicles
{

	//----------------------------------------------------
	// Units
	//----------------------------------------------------
	
	class lsd_gar_trooper_phase1;
	class lsd_gar_phase2Insulated_base;

	// Trooper
	// Base
	class BNA_KC_Unit_Trooper: lsd_gar_trooper_phase1
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Clone Trooper";
		uniformClass = "BNA_KC_Uniform_Trooper";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_InfP2";
		editorPreview = "\BNA_KC_Gear\Data\UI\BNA_KC_Preview_P2Trooper.paa";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Trooper_Upper_CO.paa",
			"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Trooper_Lower_CO.paa",
			"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
		weapons[] =
		{
			"BNA_KC_DC15C_Predef",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"BNA_KC_DC15C_Predef",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			ITEM_5("SWLW_DC17_Mag"),
			ITEM_3("ls_mag_classC_thermalDet"),
			ITEM_9("3AS_40Rnd_EC40_Mag"),
			ITEM_3("ShieldGrenade_Mag"),
			ITEM_4("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeWhite"),
			ITEM_2("3AS_SmokeRed"),
			ITEM_2("3AS_SmokePurple")
		};
		respawnMagazines[] =
		{
			ITEM_5("SWLW_DC17_Mag"),
			ITEM_3("ls_mag_classC_thermalDet"),
			ITEM_9("3AS_40Rnd_EC40_Mag"),
			ITEM_3("ShieldGrenade_Mag"),
			ITEM_4("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeWhite"),
			ITEM_2("3AS_SmokeRed"),
			ITEM_2("3AS_SmokePurple")
		};
		items[] =
		{
			ITEM_9("ACE_quikclot"),
			ITEM_5("ACE_tourniquet"),
			"ACE_EntrenchingTool"
		};
		respawnItems[] =
		{
			ITEM_9("ACE_quikclot"),
			ITEM_5("ACE_tourniquet"),
			"ACE_EntrenchingTool"
		};
		linkedItems[] =
		{
			"BNA_KC_P2Helmet_Trooper","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_P2Helmet_Trooper","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
		};
		backpack = "";
	};

	// Airborne
	class BNA_KC_Unit_ABTrooper: BNA_KC_Unit_Trooper
	{
		author = "DartRuffian"
		editorSubcategory = "BNA_KCSub_InfAB";
		displayName = "[KC] Airborne Trooper (v1)";
		uniformClass = "BNA_KC_Uniform_Trooper";
		
		linkedItems[] =
		{
			"BNA_KC_AB_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_airborne_armor"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_AB_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_airborne_armor"
		};
	};

	// Variant 2
	class BNA_KC_Unit_ABTrooper_v2: BNA_KC_Unit_Trooper
	{
		author = "DartRuffian"
		editorSubcategory = "BNA_KCSub_InfAB";
		displayName = "[KC] Airborne Trooper (v2)";
		uniformClass = "BNA_KC_Uniform_Trooper";

		linkedItems[] =
		{
			"BNA_KC_AB_Helmet_v2","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_airborne_armor"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_AB_Helmet_v2","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_airborne_armor"
		};
	}
	
	// Pilot
	// Base
	class BNA_KC_Unit_Pilot: BNA_KC_Unit_Trooper
	{
		displayName = "[KC] Clone Pilot";
		uniformClass = "BNA_KC_Uniform_Pilot";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Pilot_Upper_CO.paa",
			"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Pilot_Lower_CO.paa",
			"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
		weapons[] =
		{
			"BNA_KC_DC15S_Predef",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"BNA_KC_DC15S_Predef",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			ITEM_5("SWLW_DC17_Mag"),
			ITEM_3("ls_mag_classC_thermalDet"),
			ITEM_9("3AS_40Rnd_EC40_Mag"),
			ITEM_3("ShieldGrenade_Mag"),
			ITEM_4("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeWhite"),
			ITEM_2("3AS_SmokeRed"),
			ITEM_2("3AS_SmokePurple")
		};
		respawnMagazines[] =
		{
			ITEM_5("SWLW_DC17_Mag"),
			ITEM_3("ls_mag_classC_thermalDet"),
			ITEM_9("3AS_40Rnd_EC40_Mag"),
			ITEM_3("ShieldGrenade_Mag"),
			ITEM_4("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeWhite"),
			ITEM_2("3AS_SmokeRed"),
			ITEM_2("3AS_SmokePurple")
		};
		items[] =
		{
			ITEM_9("ACE_quikclot"),
			ITEM_5("ACE_tourniquet"),
			"ACE_EntrenchingTool"
		};
		respawnItems[] =
		{
			ITEM_9("ACE_quikclot"),
			ITEM_5("ACE_tourniquet"),
			"ACE_EntrenchingTool"
		};
		linkedItems[] =
		{
			"BNA_KC_PilotHelmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_PilotHelmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
		};
		backpack = "";
	};
	
	// Snow Trooper
	// Base
	class BNA_KC_Unit_Snow_Trooper: lsd_gar_phase2Insulated_base
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Snow Trooper";
		uniformClass = "BNA_KC_Uniform_Snow_Trooper";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_InfP2";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Snow_Upper_CO.paa",
			"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Snow_Lower_CO.paa",
			"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Snow_Undersuit_CO.paa"
		};
		weapons[] =
		{
			"BNA_KC_DC15C_Predef",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"BNA_KC_DC15C_Predef",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			ITEM_5("SWLW_DC17_Mag"),
			ITEM_3("ls_mag_classC_thermalDet"),
			ITEM_9("3AS_40Rnd_EC40_Mag"),
			ITEM_3("ShieldGrenade_Mag"),
			ITEM_4("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeWhite"),
			ITEM_2("3AS_SmokeRed"),
			ITEM_2("3AS_SmokePurple")
		};
		respawnMagazines[] =
		{
			ITEM_5("SWLW_DC17_Mag"),
			ITEM_3("ls_mag_classC_thermalDet"),
			ITEM_9("3AS_40Rnd_EC40_Mag"),
			ITEM_3("ShieldGrenade_Mag"),
			ITEM_4("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeWhite"),
			ITEM_2("3AS_SmokeRed"),
			ITEM_2("3AS_SmokePurple")
		};
		items[] =
		{
			ITEM_9("ACE_quikclot"),
			ITEM_5("ACE_tourniquet"),
			"ACE_EntrenchingTool"
		};
		respawnItems[] =
		{
			ITEM_9("ACE_quikclot"),
			ITEM_5("ACE_tourniquet"),
			"ACE_EntrenchingTool"
		};
		linkedItems[] =
		{
			"BNA_KC_P2Helmet_Snow_Trooper","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_P2Helmet_Snow_Trooper","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
		};
		backpack = "";
	};
	
	#define MAG_XX(a,b) class _xx_##a {magazine = a; count = b;}
	#define WEAP_XX(a,b) class _xx_##a {weapon = a; count = b;}
	#define ITEM_XX(a,b) class _xx_##a {name = a; count = b;}
	
	class SWLB_clone_backpack;

	class BNA_KC_Backpack: SWLB_clone_backpack
	{
		displayName = "[KC] Clone Trooper Backpack";
		hiddenSelectionsTextures[]=
		{
			"BNA_KC_Gear\Data\BNA_KC_Backpack_CO.paa",
			"BNA_KC_Gear\Data\BNA_KC_Backpack_CO.paa",
			"",
			""
		};
	};

	class BNA_KC_Backpack_Keeli: BNA_KC_Backpack
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] Clone Trooper Backpack (Keeli)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[]=
		{
			"BNA_KC_Gear\Data\BNA_KC_Backpack_Keeli_CO.paa",
			"BNA_KC_Gear\Data\BNA_KC_Backpack_Keeli_CO.paa",
			"",
			""
		};
	};
	
	class BNA_KC_Backpack_Medic: BNA_KC_Backpack
	{
		displayName = "[KC] Clone Trooper Medic Backpack";
		hiddenSelectionsTextures[]=
		{
			"BNA_KC_Gear\Data\BNA_KC_Medic_Backpack_CO.paa",
			"BNA_KC_Gear\Data\BNA_KC_Medic_Backpack_CO.paa",
			"",
			""
		};
	};
	
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
		displayName = "[KC] Standard LAAT Gunship w/ Pylons";
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_LAATS";
		crew = "BNA_KC_Unit_Pilot";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_body1_CO.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_body2_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_door1_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_door2_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_door3_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_wings_co.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_Cockpits_CO.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		textureList[] = {};
	};
	
	// LAAT Transport
	// Base
	class BNA_KC_Standard_laati_transport: lsd_heli_laati_transport
	{
		displayName = "[KC] Standard LAAT Transport";
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_LAATS";
		crew = "BNA_KC_Unit_Pilot";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_body1_CO.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_body2_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_door1_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_door2_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_door3_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_wings_co.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Standard_Cockpits_CO.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		textureList[] = {};
	};
	
	// LAAT C
	// Base
	class BNA_KC_Standard_laatc: lsd_heli_laatc
	{
		displayName = "[KC] Standard LAAT C";
		faction="BNA_KCFac";
		editorSubcategory="BNA_KCSub_LAATS";
		crew = "BNA_KC_Unit_Pilot";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_C_Auxiliary_CO.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_C_Cockpit_CO.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_C_Glass_CO.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_C_Hull_CO.paa",
			"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_C_Wings_CO.paa"
		};
		textureList[] = {};
	};
	
	//-----------------------------------------------------
	// Gonks
	//-----------------------------------------------------
	
	class 3as_GNK;
	class BNA_KC_Gonk_Basic: 3as_GNK
	{
		displayName = "[KC] Basic Qual Gonk";
		editorSubcategory = "BNA_KC_EditorSubcategory_Gonk";
		editorCategory = "BNA_KC_EditorCategory_Objects";
		class UserActions
		{
			class BNA_KC_GetBasicLoadout
			{
				displayName = "Grab Basic Qual Loadout";
				priority = 10;
				radius = 4; // A too small radius might cause the action to not be visible
				position = "";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "alive player && isNull objectParent player"; // Only show if the unit is alive and is not a player
				statement = "player setUnitLoadout 'BNA_KC_Unit_Trooper'";
			};
		};
		/*
		BNA_LoadoutSelection = 1;
		
		class EventHandlers
		{
			init = "call BNAKC_fnc_LoadoutBox";
		};
		*/
	};
	class BNA_KC_Gonk_Advanced: BNA_KC_Gonk_Basic
	{
		displayName = "[KC] Adv Qual Gonk";
		class UserActions
		{
			class BNA_KC_GetAdvLoadout
			{
				displayName = "Grab Adv Qual Loadout";
				priority = 10;
				radius = 4; // A too small radius might cause the action to not be visible
				position = "";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "alive player && isNull objectParent player"; // Only show if the unit is alive and is not a player
				statement = "player setUnitLoadout 'BNA_KC_Unit_Guardian'";
			};
		};
	};

	#include "custom_units.hpp"
};