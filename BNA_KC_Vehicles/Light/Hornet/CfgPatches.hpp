class CfgPatches
{
    class BNA_KC_Vehicles_Hornet
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "A3_Soft_F_Exp_LSV_02",
                // Metis-M LSV
            "BNA_KC_Vehicles_Weapons"
                // Co-Ax
                // Missile Launcher
        };
        units[] =
        {
            "BNA_KC_Hornet_Unarmed",
            "BNA_KC_Hornet_Armed",
            "BNA_KC_Hornet_AT"
        };
        weapons[] = {};
    };
};