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
			"3AS_VehicleWeapons"
		};
		units[] =
		{
			"BNA_KC_Standard_laati",
			"BNA_KC_Standard_laati_transport",
			"BNA_KC_Standard_laatc",
			"BNA_KC_Dexus_laati",
			"BNA_KC_Dexus_laati_transport",
			"BNA_KC_MBT_Slammer"
		};
		weapons[] =
		{
			"BNA_KC_120_Tankgun",
			"BNA_KC_Coax",
			"BNA_KC_CommanderGun"
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