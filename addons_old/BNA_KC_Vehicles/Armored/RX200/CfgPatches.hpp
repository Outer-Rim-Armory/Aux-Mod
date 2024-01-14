class CfgPatches
{
    class BNA_KC_Vehicles_RX200
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "3AS_RX200",
                // RX-200
            "A3_Weapons_F",
                // Artillery Weapon
            "BNA_KC_Gear_Armored"
                // Crew Unit
        };
        units[] =
        {
            "BNA_KC_RX200_Base",
            "BNA_KC_RX200_AA",
            "BNA_KC_RX200_Artillery"
        };
        weapons[] = {};
    };
};