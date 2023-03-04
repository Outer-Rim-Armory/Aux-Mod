class CfgPatches
{
	class BNA_KC_Vehicles
	{
		author = "SweMonkey";
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"BNA_KC_Gear",
			"A3_Armor_F",
			"A3_Sounds_F",
			"3AS_VehicleWeapons",
			"3AS_SaberTank",
			"3AS_ATTE",
			"3AS_ATRT",
			"3as_Starships",
			// "3AS_LAAT",
			"W41_Aux_LAAT",
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"A3_Armor_F_EPC_MBT_01",

			"ls_venator"
		};
		units[] =
		{
			"BNA_KC_Standard_laati",
			"BNA_KC_Standard_laati_transport",
			"BNA_KC_Standard_laatc",
			"BNA_KC_laati_mk1_3AS",
			// "BNA_KC_laati_mk1_lights_3AS",
			"BNA_KC_laati_mk2_3AS",
			// "BNA_KC_laati_mk2_lights_3AS",
			"BNA_KC_RepubTransport",
			"BNA_KC_MBT_Slammer",
			"BNA_KC_APC_Badger",
			"BNA_KC_Saber_M1",
			"BNA_KC_ATTE",

			"BNA_KC_Venator"
		};
		weapons[] =
		{
			"BNA_KC_120_Tankgun",
			"BNA_KC_Coax",
			"BNA_KC_CommanderGun",
			"BNA_KC40mm_CTWS"
		};
		ammo[]=
		{
			"BNA_KC_120_AT_Ammo",
			"BNA_KC_120_HEAT_Ammo",
			"BNA_KC_120_HE_Ammo",
			"BNA_KC_Coax_Ammo"
		};
		magazines[]=
		{
			"BNA_KC_120_AT_Mag",
			"BNA_KC_120_HEAT_Mag",
			"BNA_KC_120_HE_Mag",
			"BNA_KC_100rnd_Coax_Mag"
		};
	};
};


class CfgEditorSubcategories
{
	// Misc Vehicles
	class BNA_KCSub_OVics // O = "Other"
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Other Vehicles";
	};

	// Objects
	class BNA_KCSub_Ships
	{
		dlc = "BNA_KC";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Static Ships";
	};
};