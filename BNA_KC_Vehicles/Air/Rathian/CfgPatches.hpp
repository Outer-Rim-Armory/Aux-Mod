class CfgPatches
{
    class BNA_KC_Vehicles_Rathian
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "OPTRE_Vehicles_Hornet",
                // Hornet
            "BNA_KC_Vehicles_Weapons",
                // Weapons
            "BNA_KC_Vehicles_Sounds"
                // Sounds
        };
        units[] =
        {
            "BNA_KC_Rathian_Base",
            "BNA_KC_Rathian_CAP_Base",
            "BNA_KC_Rathian_CAS_Base"
        };
        weapons[] = {};
    };
};