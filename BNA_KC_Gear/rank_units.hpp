//----------------------------------------------------
// Infantry Rank Units
//----------------------------------------------------
class BNA_KC_Unit_INF_CR: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	displayName = "[KC] INF 01 - Clone Recruit";
	
	uniformClass = "BNA_KC_Uniform_CR";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_CR_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_CR_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};

	// Standard Loadout
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_CR","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_CR","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
};
// CT ; Standard Trooper
class BNA_KC_Unit_INF_CT_v2: BNA_KC_Unit_Trooper
{
	// Apply textures to alt CT vest
	scope = 1; // Hides the unit from the editor, as it's not needed.
	scopeCurator = 0; // Hides the unit in Zeus
	author = "DartRuffian";
	// Popular Attributes

	uniformClass = "BNA_KC_Uniform_Trooper_v2";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Base_v2_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Base_v2_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};
}
class BNA_KC_Unit_INF_SCT: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	displayName = "[KC] INF 03 - Senior Clone Trooper";

	uniformClass = "BNA_KC_Uniform_SCT";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_SCT_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_SCT_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};

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
class BNA_KC_Unit_INF_VCT: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	displayName = "[KC] INF 04 - Veteran Clone Trooper";

	uniformClass = "BNA_KC_Uniform_VCT";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_VCT_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_VCT_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};

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
class BNA_KC_Unit_INF_LCPL: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	displayName = "[KC] INF 05 - Clone Lance Corporal";

	uniformClass = "BNA_KC_Uniform_LCPL";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_LCPL_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_LCPL_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};

	// Standard Loadout
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_LCPL","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_LCPL","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
};
class BNA_KC_Unit_INF_CPL: BNA_KC_Unit_Trooper
{
	author = "DartRuffian";
	// Popular Attributes
	displayName = "[KC] INF 06 - Clone Corporal";

	uniformClass = "BNA_KC_Uniform_CPL";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_CPL_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_CPL_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};

	// Standard Loadout
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_CPL","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_CPL","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_armor"
	};
};
class BNA_KC_Unit_INF_CS: BNA_KC_Unit_Trooper
{
	// Beginning of NCO Kits
	author = "DartRuffian";
	// Popular Attributes
	displayName = "[KC] INF 07 - Clone Sergeant";

	// Standard Loadout
	// "Command/Support kits may add:
	// 	 +3 smokes of any color to their kit
	// 	 +1 Thermal detonator
	//   +2 Primary and Secondary magazines"
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_CS","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_CS","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	backpack = "SWLB_clone_RTO_mini_backpack";
};
class BNA_KC_Unit_INF_CSS: BNA_KC_UNIT_INF_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_Inf_Ranks";
	displayName = "[KC] INF 08 - Clone Staff Sergeant";

	// NCO Loadout

	linkedItems[] =
	{
		"BNA_KC_P2Helmet_CSS","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_CSS","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
};
class BNA_KC_Unit_INF_CMS: BNA_KC_UNIT_INF_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_Inf_Ranks";
	displayName = "[KC] INF 09 - Clone Master Sergeant";

	// NCO Loadout

	linkedItems[] =
	{
		"BNA_KC_P2Helmet_CMS","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_CMS","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
};
class BNA_KC_Unit_INF_CSM: BNA_KC_UNIT_INF_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_Inf_Ranks";
	displayName = "[KC] INF 10 - Clone Sergeant Major";

	// NCO Loadout

	linkedItems[] =
	{
		"BNA_KC_P2Helmet_CSM","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_CSM","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
};
class BNA_KC_Unit_INF_LT: BNA_KC_UNIT_INF_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_Inf_Ranks";
	displayName = "[KC] INF 11 - Clone Lieutenant";

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
class BNA_KC_Unit_INF_1LT: BNA_KC_UNIT_INF_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_Inf_Ranks";
	displayName = "[KC] INF 12 - Clone First Lieutenant";

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
class BNA_KC_Unit_INF_CPT: BNA_KC_UNIT_INF_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_Inf_Ranks";
	displayName = "[KC] INF 13 - Clone Captain";

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
class BNA_KC_Unit_INF_MAJ: BNA_KC_UNIT_INF_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_Inf_Ranks";
	displayName = "[KC] INF 14 - Clone Major";

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
class BNA_KC_Unit_INF_CMD: BNA_KC_UNIT_INF_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_Inf_Ranks";
	displayName = "[KC] INF 15 - Clone Comander";

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


//----------------------------------------------------
// Airborne Rank Units
//----------------------------------------------------
class BNA_KC_Unit_AB_NCO: BNA_KC_Unit_INF_CS
{
	editorSubcategory = "BNA_KCSub_AB_Ranks";
	displayName = "[KC] AB 02 - Airborne NCO";

	linkedItems[] =
	{
		"BNA_KC_AB_Helmet_v2","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_airborne_nco_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_AB_Helmet_v2","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_airborne_nco_armor"
	};
}

class BNA_KC_Unit_AB_Officer: BNA_KC_Unit_INF_LT
{
	editorSubcategory = "BNA_KCSub_AB_Ranks";
	displayName = "[KC] AB 03 - Airborne Officer";

	// Normally they would use the LS airborne officer vest (SWLB_CEE_Airborne_Officer)
	// But the pauldron texture is broken
	// Use the normal officer vest instead

	linkedItems[] =
	{
		"BNA_KC_AB_Helmet_v2","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_AB_Helmet_v2","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","JLTS_Clone_helmetInterior_AB","SWLB_clone_officer_armor"
	};
}

//----------------------------------------------------
// ARF Rank Units
//----------------------------------------------------
class BNA_KC_Unit_ARF_NCO: BNA_KC_Unit_INF_CS
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_SF_ARF";
	displayName = "[KC] ARF 02 - ARF NCO";

	// Helmet, NVGs, etc.
	linkedItems[] =
	{
		"BNA_KC_P1_ARF_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_CEE_Force_Recon_NCO"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P1_ARF_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_CEE_Force_Recon_NCO"
	};
};

class BNA_KC_Unit_ARF_Officer: BNA_KC_Unit_INF_LT
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_SF_ARF";
	displayName = "[KC] ARF 03 - ARF Officer";

	// Helmet, NVGs, etc.
	linkedItems[] =
	{
		"BNA_KC_P1_ARF_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_CEE_Force_Recon_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P1_ARF_Helmet","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","SWLB_CEE_Force_Recon_Officer"
	};
};

//----------------------------------------------------
// ARC Rank Units
//----------------------------------------------------
class BNA_KC_Unit_ARC_Officer: BNA_KC_Unit_INF_LT
{
	// Popular Attributes
	editorSubcategory = "BNA_KCSub_SF_ARC";
	displayName = "[KC] ARC 02 - ARC Officer";

	// Helmet, NVGs, etc.
	linkedItems[] =
	{
		"BNA_KC_ARC_Helmet","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Arc"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_ARC_Helmet","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Arc"
	};
	backpack = "SWLB_clone_backpack_predef_arc_assault";
};

//----------------------------------------------------
// Reeker Rank Units
//----------------------------------------------------


//----------------------------------------------------
// Aviation Rank Units
//----------------------------------------------------