class CfgPatches
{
    class BNA_KC_Gear_Weapons
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Weapons_F",
                // Base Grenades
                // Flare Rounds Ammo / Magazine
            "3AS_Weapons",
				// Westar
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
            "M2",
                // Base Flamethrower / Ammo
			"LF_Weapon_Unit_hi12"
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
            "BNA_KC_DC15S_RiotShield",
            "BNA_KC_DC17",
            "BNA_KC_Flamer",
            "BNA_KC_Flamer_Heavy",
			"BNA_KC_HI12"
        };
        magazines[] =
        {
            "12thFleet_Mag_DC15A",
            "12thFleet_Mag_DC15X",
            "12thFleet_Mag_DC15S",
            "12thFleet_Mag_WestarM5",
            "12thFleet_Mag_DC17",

            "BNA_KC_Mag_300Rnd_Flamer",
            "BNA_KC_Mag_150Rnd_Flamer",

            "BNA_KC_UGL_FlareBlue",
            "BNA_KC_3Rnd_UGL_FlareBlue",

            "BNA_KC_Grenade_DroidPopper",
			
			"BNA_KC_HI12_30rnd"
        };
        ammo[] =
        {
            "12thFleet_Ammo_Rifle_Blue",
            "12thFleet_Ammo_Sniper_Blue",
            "12thFleet_Ammo_Pistol_Blue",
            "12thFleet_Ammo_Westar_Blue",
            
            "12thFleet_Ammo_Stun",
            "BNA_KC_Flare_Blue",

            "BNA_KC_Grenade_DroidPopper_Ammo"
        };
    };
};