class CfgPatches
{
    class BNA_KC_Vehicles_Armored
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Gear",
				// Driver unit
            "BNA_KC_Vehicles_Weapons",
                // Custom Vehicle Weapons
            "BNA_KC_Vehicles_Sounds",
                // Custom Vehicle Sounds
            "A3_Armor_F",
                // Base Tank Class
            "A3_Armor_F_Beta_APC_Wheeled_01",
				// "Badger" APC
            "A3_Armor_F_Beta_APC_Wheeled_02",
                // "OLV-20" APC
			"A3_Armor_F_EPC_MBT_01",
				// "Blitz" Tank
			// "3AS_ATTE",
				// AT-TE
            "3AS_ATAP",
                // AT-AP Walker
            "3AS_APC_Jug",
                // HAVw A6 Juggernaut
			"3AS_SaberTank"
				// TX-130 Saber Tank
        };
        units[] =
		{
            "BNA_KC_APC_Badger",
            "BNA_KC_APC_OLV20",
			"BNA_KC_MBT_Slammer",
            // "BNA_KC_ATTE",
            "BNA_KC_ATAP",
            "BNA_KC_Juggernaut",
            "BNA_KC_Saber_M1",
            "BNA_KC_RX200_Base"
		};
        weapons[] = {};
    };
};