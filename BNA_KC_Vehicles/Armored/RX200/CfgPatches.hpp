class CfgPatches
{
    class BNA_KC_Vehicles_RX200
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3AS_RX200",
                // RX-200
            "A3_Weapons_F"
                // Artillery Weapon
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