class CfgPatches
{
    class BNA_KC_Props_Resupply
    {
        addonRootClass= "BNA_KC_Props";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
			"3AS_Prop_Crates",
				// All of the 3AS resupply crates
            "A3_Structures_F_Items_Vessels",
                // Jetpack fuel tank
            "BNA_KC_Weapons"
                // Weapon magazines
        };
        units[] =
		{
            "BNA_KC_Resupply_Base",
			"BNA_KC_Resupply_SquadAmmo",
			"BNA_KC_Resupply_PlatoonAmmo",
            "BNA_KC_Resupply_SquadAmmo_Special",
            "BNA_KC_Resupply_PlatoonAmmo_Special",
            "BNA_KC_Resupply_SquadMedical",
            "BNA_KC_Resupply_PlatoonMedical",
            "BNA_KC_Resupply_JetpackFuel"
		};
        weapons[] = {};
    };
};