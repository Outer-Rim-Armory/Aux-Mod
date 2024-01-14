class CfgPatches
{
    class BNA_KC_Vehicles_Khezu
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "A3_Drones_F_Soft_F_Gamma_UGV_01",
                // Stomper
            "BNA_KC_Vehicles_Weapons",
                // Co-Ax
            "BNA_KC_Vehicles_Hydra"
                // Turret texture
        };
        units[] =
        {
            "BNA_KC_Khezu_Unarmed",
            "BNA_KC_Khezu_Armed"
        };
        weapons[] = {};
    };
};