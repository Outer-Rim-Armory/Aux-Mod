class CfgPatches
{
    class BNA_KC_Vehicles_Support
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles_Armored",
                // Turret texture
            "A3_Drones_F_Soft_F_Gamma_UGV_01"
                // Stomper drones
        };
        units[] =
        {
            "BNA_KC_Khezu_Unarmed",
            "BNA_KC_Khezu_Armed"
        };
        weapons[] = {};
    };
};