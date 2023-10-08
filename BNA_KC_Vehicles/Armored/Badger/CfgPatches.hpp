class CfgPatches
{
    class BNA_KC_Vehicles_Badger
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Armor_F_Beta_APC_Wheeled_01",
                // Badger
            "BNA_KC_Vehicles_Weapons",
                // Weapons
            "BNA_KC_Vehicles_Sounds"
                // Sounds
        };
        units[] =
        {
            "BNA_KC_Badger",
            "BNA_KC_APC_Badger"
        };
        weapons[] = {};
    };
};