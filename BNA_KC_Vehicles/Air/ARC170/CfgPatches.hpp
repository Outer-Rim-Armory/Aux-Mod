class CfgPatches
{
    class BNA_KC_Vehicles_ARC170
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "3AS_ARC_170",
                // ARC-170
            "ls_vehicles_weapons",
                // Flares
            "BNA_KC_Vehicles_Weapons",
                // ARC-170 Cannons
            "BNA_KC_Gear_Aviation"
                // Pilot unit
        };
        units[] =
        {
            "BNA_KC_ARC170"
        };
        weapons[] = {};
    };
};