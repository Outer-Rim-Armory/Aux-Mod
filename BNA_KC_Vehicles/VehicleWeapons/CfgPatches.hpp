class CfgPatches
{
    class BNA_KC_Vehicles_Weapons
    {
        addonRootClass = "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Weapons_F"
				// Most of the base ammo/magazine types
				// 120 mm cannon
                // Horn weapon class
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_120_Tankgun",
            "BNA_KC40mm_CTWS",
            "BNA_KC_Coax",
            "BNA_KC_CommanderGun",
            "BNA_KC_Mounted_MG",
            "BNA_KC_Mounted_MissileLauncher",

            "BNA_KC_Juggernaut_Horn",
            "BNA_KC_Juggernaut_Alarm",
            "BNA_KC_Glavenus_Horn"
        };
		ammo[] =
		{
            "BNA_KC_120_HE_Ammo",
            "BNA_KC_120_AT_Ammo",
            "BNA_KC_120_HEAT_Ammo",
            "BNA_KC_Coax_Ammo"
		};
		magazines[] =
		{
            "BNA_KC_120_HE_Mag",
            "BNA_KC_120_AT_Mag",
            "BNA_KC_120_HEAT_Mag",
            "BNA_KC_100rnd_Coax_Mag",
            "BNA_KC_500rnd_Coax_Mag",
            "BNA_KC_1000rnd_Coax_Mag"
		};
    };
};