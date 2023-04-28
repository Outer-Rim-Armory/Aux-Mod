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
            "BNA_KC_Westar_M5_Base",
            "BNA_KC_DC15A",
            "BNA_KC_DC15S",
            "BNA_KC_Flamer",
            "BNA_KC_Flamer_Heavy",

            // Pre-Defined Weapons
            "BNA_KC_DC15S_Predef",
            "BNA_KC_DC15C_Predef"
        };
    };
};