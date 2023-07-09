class CfgPatches
{
    class BNA_KC_Vehicles_Light
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3AS_ATRT",
				// AT-RT
            "A3_Soft_F_Exp_LSV_02"
                // Unarmed, Armed, and AT versions of the LSV
        };
        units[] =
		{
			"BNA_KC_ATRT",
            "BNA_KC_Hornet_Unarmed",
            "BNA_KC_Hornet_Armed",
            "BNA_KC_Hornet_AT"
		};
        weapons[] = {};
    };
};