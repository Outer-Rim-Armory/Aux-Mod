class CfgPatches
{
    class BNA_KC_Vehicles_Static
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Weapons_F",
                // Base launcher
            "A3_Static_F_Mortar_01",
                // Base Mortar
            "ace_mk6mortar",
                // Mortar magazines model / picture
            "3AS_Main",
                // Mortar visual effect
            "3AS_mortar",
                // Mortar model/textures
            "3AS_VehicleWeapons",
                // Mortar ammo classes
                // TODO: Replace with vanilla classes
            "ls_vehicles_ground",
                // Mortar sound effects
        };
        units[] =
		{
			"BNA_KC_Deployable_M190"
		};
        weapons[] =
        {
            "BNA_KC_Deployable_M190_Turret",
            "BNA_KC_Deployable_M190_ProxyWeapon",
            "BNA_KC_Deployable_M190_Carry"
        };
        magazines[] =
        {
            "BNA_KC_Mag_3Rnd_82mm_HE",
            "BNA_KC_Mag_3Rnd_82mm_HE_CSW",
            "BNA_KC_Mag_3Rnd_82mm_SmokeWhite",
            "BNA_KC_Mag_3Rnd_82mm_SmokeWhite_CSW",
            "BNA_KC_Mag_3Rnd_82mm_SmokeBlue",
            "BNA_KC_Mag_3Rnd_82mm_SmokeBlue_CSW",
            "BNA_KC_Mag_3Rnd_82mm_SmokeRed",
            "BNA_KC_Mag_3Rnd_82mm_SmokeRed_CSW"
        };
        ammo[] =
        {
            "BNA_KC_82mm_HE_Ammo",
            "BNA_KC_82mm_SmokeWhite_Ammo"
        };
    };
};