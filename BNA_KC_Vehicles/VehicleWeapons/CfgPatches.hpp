class CfgPatches
{
    class BNA_KC_Vehicles_Weapons
    {
        addonRootClass = "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Weapons_F",
				// Most of the base ammo/magazine types
				// 120 mm cannon
                // Horn weapon class
			"A3_Weapons_F_Exp",
				// VTOL Shit
			"3as_static_turbolaser_xx10",
            "3AS_Main",
                // Vehicle Weapon Sound Sets
            "3AS_ATRT_Weapon",
                // AT-RT weapon
            "3AS_Weapons"
                // AT-RT magazine
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

			"BNA_KC_Gatling_20mm",
			"BNA_KC_105mm",
			"BNA_KC_40mm_VTOL",
            "BNA_KC_ARC_Cannon_Medium",
            "BNA_KC_ARC_TailCannon_Heavy",

            "BNA_KC_ATRT_Turret",

            "BNA_KC_Juggernaut_Horn",
            "BNA_KC_Juggernaut_Alarm",
            "BNA_KC_Glavenus_Horn"
        };
		ammo[] =
		{
            "BNA_KC_120_HE_Ammo",
            "BNA_KC_120_AT_Ammo",
            "BNA_KC_120_HEAT_Ammo",
            "BNA_KC_Coax_Ammo",
			"BNA_KC_20mm_Ammo",
			"BNA_KC_105mm_Ammo",
			"BNA_KC_40mm_GPR_Ammo",
			"BNA_KC_40mm_APFSDS_Ammo",
            "BNA_KC_ATRT_Turret_Ammo"
		};
		magazines[] =
		{
            "BNA_KC_120_HE_Mag",
            "BNA_KC_120_AT_Mag",
            "BNA_KC_120_HEAT_Mag",
            "BNA_KC_100rnd_Coax_Mag",
            "BNA_KC_500rnd_Coax_Mag",
            "BNA_KC_1000rnd_Coax_Mag",
			"BNA_KC_4000rnd_20mm",
			"BNA_KC_100rnd_105mm",
			"BNA_KC_40mm_GPR_240rnd",
			"BNA_KC_40mm_APFSDS_160rnd",
            "BNA_KC_9999Rnd_ATRT_Turret_Magazine"
		};
    };
};