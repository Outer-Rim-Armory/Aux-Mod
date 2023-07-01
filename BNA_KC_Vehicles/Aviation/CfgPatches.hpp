class CfgPatches
{
	class BNA_KC_Vehicles_LAATs
	{
		addonRootClass= "BNA_KC_Vehicles";
		author = "SweMonkey and DartRuffian";
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"BNA_KC_Gear",
				// Pilot unit
			"lsd_vehicles_heli",
				// LAAT/c
			// "W41_Aux_LAAT",
			"3AS_LAAT",
				// LAAT/i
				// Will be replaced with "3AS_LAAT" when dependency free
			"ls_functions"
				// Impulse script
		};
		units[] =
		{
			"BNA_KC_LAATi_MK1",
			"BNA_KC_LAATi_MK2",
			"BNA_KC_LAATc"
		};
		weapons[] = {};
	};
};