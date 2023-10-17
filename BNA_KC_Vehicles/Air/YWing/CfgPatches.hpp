class CfgPatches
{
    class BNA_KC_Vehicles_YWing
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "3AS_BTLB_Bomber",
                // BTL-B Y-Wing
            "ls_vehicles_weapons",
                // Flares
            "BNA_KC_Vehicles_Weapons",
                // Cannons
            "BNA_KC_Gear_Aviation"
                // Pilot unit
        };
        units[] =
        {
            "BNA_KC_BTLB_YWing"
        };
        weapons[] = {};
    };
};