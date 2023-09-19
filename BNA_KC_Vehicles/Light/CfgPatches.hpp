class CfgPatches
{
    class BNA_KC_Vehicles_Light
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            // "3AS_ATRT",
				// AT-RT
            // cba_xeh,
                // 3AS AT-RT doesn't inherit CBA's XEH class
            "A3_Soft_F_Exp_LSV_02",
                // Unarmed, Armed, and AT versions of the LSV
            "A3_Soft_F_MRAP_02"
                // Karatel
        };
        units[] =
		{
			// "BNA_KC_ATRT",
            "BNA_KC_Hornet_Unarmed",
            "BNA_KC_Hornet_Armed",
            "BNA_KC_Hornet_AT",
            "BNA_KC_Glavenus_Unarmed",
            "BNA_KC_Glavenus_Medic",
            "BNA_KC_Glavenus_GMG",
            "BNA_KC_Glavenus_HMG"
		};
        weapons[] = {};
    };
};