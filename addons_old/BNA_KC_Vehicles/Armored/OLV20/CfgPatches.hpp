class CfgPatches
{
    class BNA_KC_Vehicles_Hydra
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "A3_Armor_F_Beta_APC_Wheeled_02",
                // Otokar
            "BNA_KC_Vehicles_Weapons",
                // Weapons
            "BNA_KC_Vehicles_Sounds",
                // Sounds
            "BNA_KC_Gear_Armored"
                // Crew Unit
        };
        units[] =
        {
            "BNA_KC_Hydra",
            "BNA_KC_APC_Hydra"
        };
        weapons[] = {};
    };
};