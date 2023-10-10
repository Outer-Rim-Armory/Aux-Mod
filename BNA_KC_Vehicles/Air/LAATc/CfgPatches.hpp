class CfgPatches
{
    class BNA_KC_Vehicles_LAATc
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "lsd_vehicles_heli",
                // LAAT/c
            "BNA_KC_Gear_Aviation",
                // Pilot unit
            "BNA_KC_Vehicles_Sounds",
                // Impulse sounds
            "ls_functions"
                // Impulse script
        };
        units[] =
        {
            "BNA_KC_LAATc"
        };
        weapons[] = {};
    };
};