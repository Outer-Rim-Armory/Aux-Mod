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
            "3AS_mortar",
                // Mortar model/textures
                // Mortar magazine/ammo
                // Mortar visual effect
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
            "BNA_KC_3Rnd_82mm_Shell",
            "BNA_KC_3Rnd_82mm_Shell_CSW"
        };
        ammo[] =
        {
            "BNA_KC_82mm_Shell_Ammo"
        };
    };
};