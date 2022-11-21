//----------------------------------------------------
// Units
//----------------------------------------------------

// Trooper
// Keeli
class BNA_KC_Unit_Keeli: BNA_KC_Unit_Trooper
{
	displayName = "[KC] Keeli";
	uniformClass = "BNA_KC_Uniform_Keeli";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Keeli_Upper_CO.paa",
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Keeli_Lower_CO.paa",
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
		"BNA_KC_P2Helmet_Keeli","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Keeli","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","BNA_KC_Vest_Officer"
	};
	backpack = "BNA_KC_Backpack_Keeli";
};

// Guardian
class BNA_KC_Unit_Guardian: BNA_KC_Unit_Trooper
{
	displayName = "[KC] Guardian";
	uniformClass = "BNA_KC_Uniform_Guardian";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Guardian_Upper_CO.paa",
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Guardian_Lower_CO.paa",
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
		"BNA_KC_P2Helmet_Guardian","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Guardian","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	backpack = "";
};

// Joe
class BNA_KC_Unit_Joe: BNA_KC_Unit_Trooper
{
	displayName = "[KC] Joe";
	uniformClass = "BNA_KC_Uniform_Joe";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Joe_Upper_CO.paa",
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Joe_Lower_CO.paa",
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
		"BNA_KC_P2Helmet_Joe","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Joe","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	backpack = "";
};

// Fil
class BNA_KC_Unit_Fil: BNA_KC_Unit_Trooper
{
	displayName = "[KC] Fil";
	uniformClass = "BNA_KC_Uniform_Fil";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Fil_Upper_CO.paa",
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Fil_Lower_CO.paa",
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
		"BNA_KC_P2Helmet_Fil","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Fil","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	backpack = "";
};

// Fil's Squad Members
class BNA_KC_Unit_Fil_Squad: BNA_KC_Unit_Trooper
{
	displayName = "[KC] Fil's Squad Trooper";
	uniformClass = "BNA_KC_Uniform_Fil_Squad";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Fil_Squad_Upper_CO.paa",
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Fil_Squad_Lower_CO.paa",
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
		"BNA_KC_P2Helmet_Fil_Squad","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Fil_Squad","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	backpack = "";
};
// Ponds
class BNA_KC_Unit_Ponds: BNA_KC_Unit_Trooper
{
	author="DartRuffian";
	displayName = "[KC] Ponds";
	uniformClass = "BNA_KC_Uniform_Ponds";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Ponds_Upper_CO.paa",
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Ponds_Lower_CO.paa",
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
		"BNA_KC_P2Helmet_Ponds","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Ponds","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	backpack = "";
};
// Stone
class BNA_KC_Unit_Stone: BNA_KC_Unit_Trooper
{
	author="DartRuffian";
	displayName = "[KC] Stone";
	uniformClass = "BNA_KC_Uniform_Stone";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Stone_Upper_CO.paa",
		"BNA_KC_Gear\Data\BNA_KC_CloneArmor_Stone_Lower_CO.paa",
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
		"BNA_KC_P2Helmet_Stone","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Stone","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p1Interior_hud","lsd_gar_clone_vest"
	};
	backpack = "";
};

// Pilot
// Snow Trooper

//-----------------------------------------------------
// LAATs
//-----------------------------------------------------

// LAAT Gunship
// Dexus
class BNA_KC_Dexus_laati: BNA_KC_Standard_laati
{
	displayName = "[KC] Dexus LAAT Gunship w/ Pylons";
	hiddenSelectionsTextures[] = 
	{
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_body1_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_body2_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_door1_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_door2_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_door3_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_wings_CO.paa",
		"lsd_vehicles_heli\laati\data\missiles_co.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_Cockpits_CO.paa",
		"lsd_vehicles_heli\laati\data\glass_ca.paa"
	};
};

// LAAT Transport
// Dexus
class BNA_KC_Dexus_laati_transport: BNA_KC_Standard_laati_transport
{
	displayName = "[KC] Dexus LAAT Transport";
	hiddenSelectionsTextures[] = 
	{
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_body1_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_body2_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_door1_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_door2_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_door3_CO.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_wings_CO.paa",
		"lsd_vehicles_heli\laati\data\missiles_co.paa",
		"BNA_KC_Gear\Data\LAATS\BNA_KC_LAAT_Dexus_Cockpits_CO.paa",
		"lsd_vehicles_heli\laati\data\glass_ca.paa"
	};
};
