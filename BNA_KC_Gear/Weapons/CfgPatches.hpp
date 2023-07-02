class CfgPatches
{
    class BNA_KC_Gear_Weapons
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3AS_Weapons",
				// Westar
                // DC-15S
                // DC-15C
                // BT X-42 Flamer
            "JLTS_weapons_DC15S",
                // DC-15A
            "JLTS_weapons_DC15S",
                // DC-15S
            "JLTS_weapons_DC17SA",
                // DC-17
                // Weapon Flashlights
            "WBK_PhoenixTreal_FlamethrowerMOD",
                // Flamethrower System
            "M2"
                // Base Flamethrower / Ammo
        };
        units[] = {};
        weapons[] =
        {
			// Optics
			"BNA_KC_WestarM5_Scope",
            // Custom Weapons
            "BNA_KC_WestarM5",
            "BNA_KC_WestarM5_UGL",
            "BNA_KC_DC15A",
            "BNA_KC_DC15A_UGL",
            "BNA_KC_DC15S",
            "BNA_KC_DC17",
            "BNA_KC_Flamer",
            "BNA_KC_Flamer_Heavy",

            // Pre-Defined Weapons
            "BNA_KC_DC15S_Predef",
            "BNA_KC_DC15S"
        };
        magazines[] =
        {
            "12thFleet_Mag_DC15A",
            "12thFleet_Mag_DC15S",
            "12thFleet_Mag_WestarM5",
            "12thFleet_Mag_DC17",

            "BNA_KC_Mag_300Rnd_Flamer",
            "BNA_KC_Mag_150Rnd_Flamer"
        };
    };
};