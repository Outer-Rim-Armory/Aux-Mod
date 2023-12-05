class CfgPatches
{
    class BNA_KC_Vehicles_RepublicTransport
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
                // Core Addon
            "BNA_KC_Vehicles",
                // Core Vehicle Addon
            "3as_Starships",
                // Republic Transport
            "ls_vehicles_weapons",
                // Flares
            "BNA_KC_Gear_Aviation"
                // Pilot unit
        };
        units[] =
        {
            "BNA_KC_RepublicTransport",
            "BNA_KC_RepubTransport"
        };
        weapons[] = {};
    };
};