#include "cfgPatches.hpp"
#include "cfgFunctions.hpp"

#define ITEM_2 (a) a, a
#define ITEM_3 (a) a, a, a
#define ITEM_4 (a) a, a, a, a
#define ITEM_5 (a) a, a, a, a, a
#define ITEM_6 (a) a, a, a, a, a, a
#define ITEM_7 (a) a, a, a, a, a, a, a
#define ITEM_8 (a) a, a, a, a, a, a, a, a
#define ITEM_9 (a) a, a, a, a, a, a, a, a, a
#define ITEM_10(a) a, a, a, a, a, a, a, a, a, a
#define ITEM_11(a) a, a, a, a, a, a, a, a, a, a, a

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
	class lsd_gar_arc_helmet;
	class ls_gar_barc_helmet;
	
	//---------------------------------------------------
	// Phase 1 Helmets
	//---------------------------------------------------

	// Trooper
	// Version 1
	class BNA_KC_P1Helmet_CT: ls_gar_phase1_helmet
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeArsenal = 2;

		displayName = "[KC] INF P1 Helm 02 (Trooper)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 1\BNA_KC_Helmet_P1_CT.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// Version 2
	class BNA_KC_P1Helmet_v2: BNA_KC_P1Helmet_CT
	{
		displayName = "[KC] INF P1 Helm 02 (Trooper, Alt)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 1\BNA_KC_Helmet_P1_2.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// Version 3
	class BNA_KC_P1Helmet_v3: BNA_KC_P1Helmet_CT
	{
		displayName = "[KC] INF P1 Helm 02 (Trooper, Alt 2)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 1\BNA_KC_Helmet_P1_3.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// CR
	class BNA_KC_P1Helmet_CR: BNA_KC_P1Helmet_CT
	{
		displayName = "[KC] INF P1 Helm 01 (Recruit)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 1\BNA_KC_Helmet_P1_CR.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// SCT
	class BNA_KC_P1Helmet_SCT: BNA_KC_P1Helmet_CT
	{
		displayName = "[KC] INF P1 Helm 03 (Senior Trooper)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 1\BNA_KC_Helmet_P1_SCT.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// VCT
	class BNA_KC_P1Helmet_VCT: BNA_KC_P1Helmet_CT
	{
		displayName = "[KC] INF P1 Helm 04 (Veteran Trooper)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 1\BNA_KC_Helmet_P1_VCT.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// LCPL
	class BNA_KC_P1Helmet_LCPL: BNA_KC_P1Helmet_CT
	{
		displayName = "[KC] INF P1 Helm 05 (Lance Corporal)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 1\BNA_KC_Helmet_P1_LCPL.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// CPL
	class BNA_KC_P1Helmet_CPL: BNA_KC_P1Helmet_CT
	{
		displayName = "[KC] INF P1 Helm 06 (Corporal)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 1\BNA_KC_Helmet_P1_CPL.paa",
			"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
		};
	};

	// Pilot
	class BNA_KC_PilotHelmet_P1: ls_gar_phase1Pilot_helmet
	{
		author = "DartRuffian";

		displayName = "[KC] AVI P1 Helm 01 (Base)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Pilot P1\BNA_KC_Helmet_Pilot_P1.paa",
			"ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
			"ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
		};
	}

	//---------------------------------------------------
	// Phase 2 Helmets
	//---------------------------------------------------

	// Standard P2 Helmet ; Shared across all detachments that use it
	class BNA_KC_P2Helmet_Trooper: ls_gar_phase2_helmet
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		scope = 2;
		scopeArsenal = 2;

		displayName = "[KC] INF Helm 02 (Trooper)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_Base.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	// ALT CT Helmet
	class BNA_KC_P2Helmet_Trooper_v2: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 02 (Trooper, Alt)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_Base_v2.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	//---------------------------------------------------
	// Infantry Ranks
	//--------------------------------------------------

	// CR Helmet
	class BNA_KC_P2Helmet_CR: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 01 (Recruit)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_CR.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	// Alt CR Helmet
	class BNA_KC_P2Helmet_CR_v2: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 01 (Recruit, Alt)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_CR_v2.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// CT Helmet
	// Standard P2 Helmet
	
	// SCT Helmet
	class BNA_KC_P2Helmet_SCT: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 03 (Senior Trooper)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_SCT.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	// Alt SCT Helmet
	class BNA_KC_P2Helmet_SCT_v2: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 03 (Senior Trooper, Alt)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_SCT_v2.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// VCT Helmet
	class BNA_KC_P2Helmet_VCT: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 04 (Veteran Trooper)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_VCT.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	// Alt VCT Helmet
	class BNA_KC_P2Helmet_VCT_v2: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 04 (Veteran Trooper, Alt)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_VCT_v2.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// LCPL Helmet
	class BNA_KC_P2Helmet_LCPL: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 05 (Lance Corporal)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_LCPL.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};
	// Alt LCPL-CPL Helmet
	class BNA_KC_P2Helmet_LCPL_v2: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 05 (Lance Corporal, Alt)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_LCPL_v2.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// CPL Helmet
	class BNA_KC_P2Helmet_CPL: BNA_KC_P2Helmet_Trooper
	{
		author = "DartRuffian";

		displayName = "[KC] INF Helm 06 (Corporal)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_CPL.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// CS Helmet
	class BNA_KC_P2Helmet_CS: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] INF Helm 07 (Sergeant)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_CS.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// CSS Helmet
	class BNA_KC_P2Helmet_CSS: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] INF Helm 08 (Staff Sergeant)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_CSS.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// CMS Helmet
	class BNA_KC_P2Helmet_CMS: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] INF Helm 09 (Master Sergeant)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_CMS.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// CSM Helmet
	class BNA_KC_P2Helmet_CSM: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] INF Helm 10 (Sergeant Major)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_CSM.paa",
			"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
	};

	// Officer
	class BNA_KC_P2Helmet_Officer: BNA_KC_P2Helmet_Trooper
	{
		displayName = "[KC] INF Helm 11 (Officer)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Phase 2\BNA_KC_Helmet_P2_Officer.paa",
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
		displayName = "[KC] AVI Helm 01 (Airman)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Pilot P2\BNA_KC_Helmet_Pilot.paa",
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
		displayName = "[KC] ENG Helm 01 (Base)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Engineer\BNA_KC_Helmet_Engineer.paa",
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
		displayName = "[KC] INF Snow Helm 01 (Base)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Snow\BNA_KC_Helmet_Insulated.paa"
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
		displayName = "[KC] ARF Helm 01 (Base)";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\Textures\Helmets\ARF\BNA_KC_Helmet_ARF.paa",
			"",
			"BNA_KC_Gear\Data\Textures\Helmets\ARF\BNA_KC_Helmet_ARF.paa"
		};
	};

	//---------------------------------------------------
	// ARC Helmet
	//---------------------------------------------------
	class BNA_KC_ARC_Helmet: lsd_gar_arc_helmet
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[KC] ARC Helm 01 (Base)";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\Textures\Helmets\ARC\BNA_KC_Helmet_ARC.paa",
			"lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
		};
	};


	//---------------------------------------------------
	// BARC Helmet
	//---------------------------------------------------
	class BNA_KC_BARC_Helmet: ls_gar_barc_helmet
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[KC] BARC Helm 01 (Base)";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Gear\Data\Textures\Helmets\BARC\BNA_KC_Helmet_BARC.paa",
			"ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
		};
	};

	
	//---------------------------------------------------
	// Reeker Helmets
	//---------------------------------------------------
	class BNA_KC_P2_Reeker_Helmet: ls_sob_phase2SpecOp_helmet
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[KC] Reeker Helm 01 (Base)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\SpecOP\BNA_KC_Helmet_Reeker.paa",
			"ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
		};
	};
	class BNA_KC_P2_Reeker_Helmet_v2: BNA_KC_P2_Reeker_Helmet
	{
		displayName = "[KC] Reeker Helm 01 (Base, Alt)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\SpecOP\BNA_KC_Helmet_Reeker_v2.paa",
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
		displayName = "[KC] AB Helm 01 (Base)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Airborne\BNA_KC_Helmet_AB.paa"
		};
	}

	class BNA_KC_AB_Helmet_v2: BNA_KC_AB_Helmet
	{
		displayName = "[KC] AB Helm 01 (Base, Alt)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Helmets\Airborne\BNA_KC_Helmet_AB_2.paa"
		};
	}


	//---------------------------------------------------
	// Uniforms
	//---------------------------------------------------

	class UniformItem; 
	class ls_gar_phase2_uniform;
	class lsd_gar_phase2insulated_uniform;
	class SWLB_clone_arc_base_P2;

	// Base Uniform ; Shared across all detachments
	class BNA_KC_Uniform_Trooper: ls_gar_phase2_uniform
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		scope = 2;

		displayName = "[KC] INF Armor 02 (Trooper)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_Trooper";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class BNA_KC_Uniform_Trooper_v2: BNA_KC_Uniform_Trooper
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;

		displayName = "[KC] INF Armor 02 (Trooper, Alt)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_INF_CT_v2";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	//---------------------------------------------------
	// Infantry Ranks
	//---------------------------------------------------

	// CR Uniform
	class BNA_KC_Uniform_CR: BNA_KC_Uniform_Trooper
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;

		displayName = "[KC] INF Armor 01 (Recruit)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_INF_CR";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// CT Uniform
	// Standard Trooper Uniform

	// SCT Uniform
	class BNA_KC_Uniform_SCT: BNA_KC_Uniform_Trooper
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;

		displayName = "[KC] INF Armor 03 (Senior Trooper)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_INF_SCT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// VCT Uniform
	class BNA_KC_Uniform_VCT: BNA_KC_Uniform_Trooper
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;

		displayName = "[KC] INF Armor 04 (Veteran Trooper)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_INF_VCT";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// LCPL Uniform
	class BNA_KC_Uniform_LCPL: BNA_KC_Uniform_Trooper
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;

		displayName = "[KC] INF Armor 05 (Lance Corporal)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_INF_LCPL";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// CPL Uniform
	class BNA_KC_Uniform_CPL: BNA_KC_Uniform_Trooper
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;

		displayName = "[KC] INF Armor 06 (Corporal)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "BNA_KC_Unit_INF_CPL";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	// CS Uniform
	// class BNA_KC_Uniform_CS: BNA_KC_Uniform_Trooper
	// {
	// 	dlc = "BNA_KC";
	// 	author = "DartRuffian";
	// 	scope = 2;

	// 	displayName = "[KC] INF Armor 07 (Sergeant)";
	// 	class ItemInfo: UniformItem
	// 	{
	// 		uniformModel = "-";
	// 		uniformClass = "BNA_KC_Unit_INF_CS";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 		uniformType = "Neopren";
	// 	};
	// };

	// CSS Uniform
	// class BNA_KC_Uniform_CSS: BNA_KC_Uniform_Trooper
	// {
	// 	dlc = "BNA_KC";
	// 	author = "DartRuffian";
	// 	scope = 2;

	// 	displayName = "[KC] INF Armor 08 (Staff Sergeant)";
	// 	class ItemInfo: UniformItem
	// 	{
	// 		uniformModel = "-";
	// 		uniformClass = "BNA_KC_Unit_INF_CSS";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 		uniformType = "Neopren";
	// 	};
	// };

	// CMS Uniform
	// class BNA_KC_Uniform_CMS: BNA_KC_Uniform_Trooper
	// {
	// 	dlc = "BNA_KC";
	// 	author = "DartRuffian";
	// 	scope = 2;

	// 	displayName = "[KC] INF Armor 09 (Master Sergeant)";
	// 	class ItemInfo: UniformItem
	// 	{
	// 		uniformModel = "-";
	// 		uniformClass = "BNA_KC_Unit_INF_CMS";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 		uniformType = "Neopren";
	// 	};
	// };

	// CSM Uniform
	// class BNA_KC_Uniform_CSM: BNA_KC_Uniform_Trooper
	// {
	// 	dlc = "BNA_KC";
	// 	author = "DartRuffian";
	// 	scope = 2;

	// 	displayName = "[KC] INF Armor 10 (Sergeant Major)";
	// 	class ItemInfo: UniformItem
	// 	{
	// 		uniformModel = "-";
	// 		uniformClass = "BNA_KC_Unit_INF_CSM";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 		uniformType = "Neopren";
	// 	};
	// };

	// LT Uniform
	// class BNA_KC_Uniform_LT: BNA_KC_Uniform_Trooper
	// {
	// 	dlc = "BNA_KC";
	// 	author = "DartRuffian";
	// 	scope = 2;

	// 	displayName = "[KC] INF Armor 11 (Lieutenant)";
	// 	class ItemInfo: UniformItem
	// 	{
	// 		uniformModel = "-";
	// 		uniformClass = "BNA_KC_Unit_INF_LT";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 		uniformType = "Neopren";
	// 	};
	// };

	// 1LT Uniform
	// class BNA_KC_Uniform_1LT: BNA_KC_Uniform_Trooper
	// {
	// 	dlc = "BNA_KC";
	// 	author = "DartRuffian";
	// 	scope = 2;

	// 	displayName = "[KC] INF Armor 12 (1st Lieutenant)";
	// 	class ItemInfo: UniformItem
	// 	{
	// 		uniformModel = "-";
	// 		uniformClass = "BNA_KC_Unit_INF_1LT";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 		uniformType = "Neopren";
	// 	};
	// };

	// CAP Uniform
	// class BNA_KC_Uniform_CPT: BNA_KC_Uniform_Trooper
	// {
	// 	dlc = "BNA_KC";
	// 	author = "DartRuffian";
	// 	scope = 2;

	// 	displayName = "[KC] INF Armor 13 (Captain)";
	// 	class ItemInfo: UniformItem
	// 	{
	// 		uniformModel = "-";
	// 		uniformClass = "BNA_KC_Unit_INF_CPT";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 		uniformType = "Neopren";
	// 	};
	// };

	// MAJ Uniform
	// class BNA_KC_Uniform_MAJ: BNA_KC_Uniform_Trooper
	// {
	// 	dlc = "BNA_KC";
	// 	author = "DartRuffian";
	// 	scope = 2;

	// 	displayName = "[KC] INF Armor 14 (Major)";
	// 	class ItemInfo: UniformItem
	// 	{
	// 		uniformModel = "-";
	// 		uniformClass = "BNA_KC_Unit_INF_MAJ";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 		uniformType = "Neopren";
	// 	};
	// };

	// CMD Uniform
	// class BNA_KC_Uniform_CMD: BNA_KC_Uniform_Trooper
	// {
	// 	dlc = "BNA_KC";
	// 	author = "DartRuffian";
	// 	scope = 2;

	// 	displayName = "[KC] INF Armor 15 (Commander)";
	// 	class ItemInfo: UniformItem
	// 	{
	// 		uniformModel = "-";
	// 		uniformClass = "BNA_KC_Unit_INF_CMD";
	// 		containerClass = "Supply150";
	// 		mass = 40;
	// 		uniformType = "Neopren";
	// 	};
	// };

	
	// Pilot
	class BNA_KC_Uniform_Pilot: BNA_KC_Uniform_Trooper
	{
		displayName = "[KC] AVI Armor 01 (Airman)";
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
		displayName = "[KC] INF Snow Armor 01 (Base)";
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
	
	class BNA_KC_Vest_Officer: SWLB_clone_officer_armor
	{
		dlc = "BNA_KC";
		author = "SweMonkey";
		displayName = "[KC] INF Vest 10 (Officer)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Vests\INF\BNA_KC_Vest_Officer.paa"
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
		displayName = "[KC] ARC Vest 01 (Base)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] =
		{
			"\SWLB_clones\data\arc_accessories_co.paa",
			"BNA_KC_Gear\Data\Textures\Vests\ARC\BNA_KC_Vest_ARC.paa"
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

	// Chip
	class BNA_KC_NVG_Chip: lsd_gar_standard_nvg
	{
		author = "DartRuffian"
		scope = 2;
		displayName = "[KC] Clone NVG Chip";

		// Make the NVGs invisible
		// Clear Model
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelOptics = "BNA_KC_Gear\Data\Models\nvg_blank_model.p3d";
		// Clear Textures
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};

		class ItemInfo
			{
				type=616;
				uniformModel="BNA_KC_Gear\Data\Models\nvg_blank_model.p3d";
				modelOff="BNA_KC_Gear\Data\Models\nvg_blank_model.p3d";
				mass=10;
				hiddenSelections[]={};
			};
	};

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

		displayName = "[KC] Clone P2 NVG Visor";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\NVGs\BNA_KC_NVG.paa"
		};
	};

	// Keeli
	class BNA_KC_NVG_Keeli: BNA_KC_NVG
	{
		displayName = "[KC] Clone P2 NVG Visor (Keeli)";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\NVGs\Customs\BNA_KC_NVG_Keeli.paa"
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

		displayName = "[KC] Clone P2 Officer Visor";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\NVGs\BNA_KC_NVG_Commander.paa"
		};
	};

	// Rangefinders
	// Base
	class BNA_KC_NVG_Rangefinder: lsd_gar_rangefinder_nvg
	{
		scope = 2;
		visionMode[] =
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[] = {2};

		displayName = "[KC] Clone P2 Viewfinder Antenna";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\NVGs\BNA_KC_NVG_Rangefinder.paa"
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

	// Base KC Trooper
	class BNA_KC_Unit_Trooper: lsd_gar_trooper_phase1
	{
		// Default Attributes
		dlc = "BNA_KC";
		author = "SweMonkey";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "BNA_KCFac";
		editorPreview = "BNA_KC_Gear\Data\Textures\UI\BNA_KC_Preview_P2Trooper.paa";
		// This started with a \ 

		// Popular Attributes
		editorSubcategory = "BNA_KCSub_Inf_Ranks";
		displayName = "[KC] INF 02 - Clone Trooper";

		// Uniform Class / Textures
		uniformClass = "BNA_KC_Uniform_Trooper";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Base_Upper.paa",
			"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Base_Lower.paa",
			"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};

		// Inventory
		// Weapons
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
		// Ammunition / Throwables
		magazines[] =
		{
			// Ammo
			ITEM_11("3AS_40Rnd_EC40_Mag"),
			// Stun rounds would go here
			ITEM_2("3AS_16Rnd_EC20_Mag"),
			// Stun rounds would go here
			// Grenades
			ITEM_2("ls_mag_classC_thermalDet"),
			ITEM_3("ShieldGrenade_Mag"),
			// Smokes
			ITEM_3("3AS_SmokeWhite"),
			ITEM_3("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeGreen"),
		};
		respawnMagazines[] =
		{
			// Ammo
			ITEM_11("3AS_40Rnd_EC40_Mag"),
			// Stun rounds would go here
			ITEM_2("3AS_16Rnd_EC20_Mag"),
			// Stun rounds would go here
			// Grenades
			ITEM_2("ls_mag_classC_thermalDet"),
			ITEM_3("ShieldGrenade_Mag"),
			// Smokes
			ITEM_3("3AS_SmokeWhite"),
			ITEM_3("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeGreen"),
		};
		// Other Items
		items[] =
		{
			// Medical
			ITEM_10("ACE_elasticBandage"),
			ITEM_4("ACE_tourniquet"),
			// Other
			ITEM_3("ACE_CableTie"),
			"ACE_EntrenchingTool",
			"ItemcTabHCam",
			"ACE_IR_Strobe_Item",
			"ACE_Flashlight_XL50",
			"ACE_MapTools"
		};
		respawnItems[] =
		{
			// Medical
			ITEM_10("ACE_elasticBandage"),
			ITEM_4("ACE_tourniquet"),
			// Other
			ITEM_3("ACE_CableTie"),
			"ACE_EntrenchingTool",
			"ItemcTabHCam",
			"ACE_IR_Strobe_Item",
			"ACE_Flashlight_XL50",
			"ACE_MapTools"
		};

		// Helmet, NVGs, etc.
		linkedItems[] =
		{
			"BNA_KC_P2Helmet_Trooper","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_P2Helmet_Trooper","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
		};
		backpack = "";
	};


	//----------------------------------------------------
	// Airborne
	//----------------------------------------------------
	class BNA_KC_Unit_AB_CT: BNA_KC_Unit_Trooper
	{
		author = "DartRuffian"
		editorSubcategory = "BNA_KCSub_AB_Ranks";
		displayName = "[KC] AB 01 - Airborne Trooper";
		
		linkedItems[] =
		{
			"BNA_KC_AB_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_airborne_armor"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_AB_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_airborne_armor"
		};
	};

	
	//----------------------------------------------------
	// Pilots
	//----------------------------------------------------
	class BNA_KC_Unit_Pilot: BNA_KC_Unit_Trooper
	{
		editorSubcategory = "BNA_KCSub_AVI_Ranks";
		displayName = "[KC] AVI 01 - Clone Pilot";
		uniformClass = "BNA_KC_Uniform_Pilot";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Pilot_Upper.paa",
			"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Pilot_Lower.paa",
			"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
		};
		
		linkedItems[] =
		{
			"BNA_KC_PilotHelmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_PilotHelmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
		};
	};
	
	//----------------------------------------------------
	// Snow Troopers
	//----------------------------------------------------
	class BNA_KC_Unit_Snow_Trooper: lsd_gar_phase2Insulated_base
	{
		editorSubcategory = "BNA_KCSub_SF_Snow";
		displayName = "[KC] SNOW 01 - Snow Trooper";
		
		uniformClass = "BNA_KC_Uniform_Snow_Trooper";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Snow_Upper.paa",
			"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Snow_Lower.paa",
			"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Snow_Undersuit.paa"
		};

		linkedItems[] =
		{
			"BNA_KC_P2Helmet_Snow_Trooper","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_P2Helmet_Snow_Trooper","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
		};
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
			"BNA_KC_Gear\Data\Textures\Backpacks\BNA_KC_Backpack.paa",
			"BNA_KC_Gear\Data\Textures\Backpacks\BNA_KC_Backpack.paa",
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
			"BNA_KC_Gear\Data\Textures\Backpacks\BNA_KC_Backpack_Keeli.paa",
			"BNA_KC_Gear\Data\Textures\Backpacks\BNA_KC_Backpack_Keeli.paa",
			"",
			""
		};
	};
	
	class BNA_KC_Backpack_Medic: BNA_KC_Backpack
	{
		displayName = "[KC] Clone Trooper Medic Backpack";
		hiddenSelectionsTextures[]=
		{
			"BNA_KC_Gear\Data\Textures\Backpacks\BNA_KC_Backpack_Medic.paa",
			"BNA_KC_Gear\Data\Textures\Backpacks\BNA_KC_Backpack_Medic.paa",
			"",
			""
		};
	};

	//----------------------------------------------------
	// ARC
	//----------------------------------------------------
	class BNA_KC_Unit_ARC: BNA_KC_Unit_Trooper
	{
		// Default Attributes
		author = "DartRuffian";

		// Popular Attributes
		editorSubcategory = "BNA_KCSub_SF_ARC";
		displayName = "[KC] ARC 01 - ARC Trooper";

		// Inventory
		// Weapons
		weapons[] =
		{
			"3AS_WestarM5_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"3AS_WestarM5_F",
			"SWLB_clone_binocular",
			"Throw",
			"Put"
		};
		// Ammunition / Throwables
		magazines[] =
		{
			// Ammo
			ITEM_11("3AS_60Rnd_EC50_Mag"),
			// Stun rounds would go here
			ITEM_2("3AS_16Rnd_EC20_Mag"),
			// Stun rounds would go here
			// Grenades
			ITEM_2("ls_mag_classC_thermalDet"),
			ITEM_3("ShieldGrenade_Mag"),
			// Smokes
			ITEM_3("3AS_SmokeWhite"),
			ITEM_3("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeGreen"),
		};
		respawnMagazines[] =
		{
			// Ammo
			ITEM_11("3AS_60Rnd_EC50_Mag"),
			// Stun rounds would go here
			ITEM_2("3AS_16Rnd_EC20_Mag"),
			// Stun rounds would go here
			// Grenades
			ITEM_2("ls_mag_classC_thermalDet"),
			ITEM_3("ShieldGrenade_Mag"),
			// Smokes
			ITEM_3("3AS_SmokeWhite"),
			ITEM_3("3AS_SmokeBlue"),
			ITEM_3("3AS_SmokeGreen"),
		};
		// Other Items
		items[] =
		{
			// Medical
			ITEM_10("ACE_elasticBandage"),
			ITEM_4("ACE_tourniquet"),
			// Other
			ITEM_3("ACE_CableTie"),
			"ACE_EntrenchingTool",
			"ItemcTabHCam",
			"ACE_IR_Strobe_Item",
			"ACE_Flashlight_XL50",
			"ACE_MapTools"
		};
		respawnItems[] =
		{
			// Medical
			ITEM_10("ACE_elasticBandage"),
			ITEM_4("ACE_tourniquet"),
			// Other
			ITEM_3("ACE_CableTie"),
			"ACE_EntrenchingTool",
			"ItemcTabHCam",
			"ACE_IR_Strobe_Item",
			"ACE_Flashlight_XL50",
			"ACE_MapTools"
		};

		// Helmet, NVGs, etc.
		linkedItems[] =
		{
			"BNA_KC_ARC_Helmet","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Arc"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_ARC_Helmet","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Arc"
		};
		backpack = "SWLB_clone_backpack_predef_arc_assault";
	};

	//----------------------------------------------------
	// ARF
	//----------------------------------------------------
	class BNA_KC_Unit_ARF: BNA_KC_Unit_Trooper
	{
		// Default Attributes
		author = "DartRuffian";

		// Popular Attributes
		editorSubcategory = "BNA_KCSub_SF_ARF";
		displayName = "[KC] ARF 01 - ARF Trooper";

		// Helmet, NVGs, etc.
		linkedItems[] =
		{
			"BNA_KC_P1_ARF_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_CEE_Force_Recon"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_P1_ARF_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_CEE_Force_Recon"
		};
		backpack = "SWLB_CEE_Recon_RTO_Backpack";
	};


	//-----------------------------------------------------
	// BARC
	//-----------------------------------------------------
	class BNA_KC_Unit_BARC: BNA_KC_Unit_Trooper
	{
		// Default Attributes
		author = "DartRuffian";

		// Popular Attributes
		editorSubcategory = "BNA_KCSub_SF_BARC";
		displayName = "[KC] BARC 01 - BARC Trooper";

		// Helmet, NVGs, etc.
		linkedItems[] =
		{
			"BNA_KC_BARC_Helmet","BNA_KC_NVG","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_clone_recon_armor"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_BARC_Helmet","BNA_KC_NVG","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_clone_recon_armor"
		};
		backpack = "SWLB_clone_RTO_mini_backpack";
	};

	//---------------------------------------------------
	// Reeker
	//---------------------------------------------------
	class BNA_KC_Unit_Reeker: BNA_KC_Unit_Trooper
	{
		// Default Attributes
		author = "DartRuffian";

		// Popular Attributes
		editorSubcategory = "BNA_KCSub_Amr_Reeker";
		displayName = "[KC] REEKR 01 - Crewman";

		// Helmet, NVGs, etc.
		linkedItems[] =
		{
			"BNA_KC_P2_Reeker_Helmet","BNA_KC_NVG_Chip","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_clone_basic_armor"
		};
		respawnLinkedItems[] =
		{
			"BNA_KC_P2_Reeker_Helmet","BNA_KC_NVG_Chip","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_clone_basic_armor"
		};
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

	#include "rank_units.hpp"
	#include "custom_units.hpp"
};