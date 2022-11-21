//----------------------------------------------------
// Ranked Units
//----------------------------------------------------
class BNA_KC_Unit_CR: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF 01 - Clone Recruit";
	
	uniformClass = "SWLB_clone_uniform";
	// Standard Loadout
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Recruit","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Recruit","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
};
class BNA_KC_Unit_CT: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF 02 - Clone Trooper";
	// Standard Loadout
	
	// Standard Linked Items (Helmet, NVGs, etc.)
};
class BNA_KC_Unit_SCT: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF 03 - Senior Clone Trooper";
	// Standard Loadout
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_SCT","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_SCT","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
};
class BNA_KC_Unit_VCT: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF 04 - Veteran Clone Trooper";
	// Standard Loadout
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_VCT","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_VCT","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
};
class BNA_KC_Unit_LCPL: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF 05 - Clone Lance Corporal";
	// Standard Loadout
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_LCPL_CPL","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_LCPL_CPL","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_armor"
	};
};
class BNA_KC_Unit_CPL: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF 06 - Clone Corporal";
	// Standard Loadout
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_LCPL_CPL","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_LCPL_CPL","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_armor"
	};
};
class BNA_KC_Unit_CS: BNA_KC_Unit_Trooper
{
	// Beginning of NCO Kits
	author = "DartRuffian";
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF CO 07 - Clone Sergeant";
	// Standard Loadout
	// "Command/Support kits may add:
	// 	 +3 smokes of any color to their kit
	// 	 +1 Thermal detonator
	//   +2 Primary and Secondary magazines"
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_CS_CSS","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_CS_CSS","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	backpack = "SWLB_clone_RTO_mini_backpack";
};
class BNA_KC_Unit_CSS: BNA_KC_Unit_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF CO 08 - Clone Staff Sergeant";
	// NCO Loadout
};
class BNA_KC_Unit_CMS: BNA_KC_Unit_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF CO 09 - Clone Master Sergeant";
	// NCO Loadout
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_CMS_CSM","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_CMS_CSM","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
};
class BNA_KC_Unit_LT: BNA_KC_Unit_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF CO 10 - Clone Lieutenant";
	// NCO Loadout
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};
class BNA_KC_Unit_1LT: BNA_KC_Unit_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF CO 11 - Clone First Lieutenant";
	// NCO Loadout
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};
class BNA_KC_Unit_CPT: BNA_KC_Unit_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF CO 12 - Clone Captain";
	// NCO Loadout
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};
class BNA_KC_Unit_MAJ: BNA_KC_Unit_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF CO 13 - Clone Major";
	// NCO Loadout
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};
class BNA_KC_Unit_CMD: BNA_KC_Unit_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_InfRanks";
	displayName = "[KC] INF CO 14 - Clone Comander";
	// NCO Loadout
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Officer","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};