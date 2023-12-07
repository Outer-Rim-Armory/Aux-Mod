class CfgPatches
{
    class BNA_KC_Vehicles_ATAP
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "3AS_ATAP",
                // AT-AP
            "BNA_KC_Vehicles_Sounds",
                // AT-TE alarm
            "BNA_KC_Gear_Armored"
                // Crew Unit
        };
        units[] =
        {
            "BNA_KC_ATAP"
        };
        weapons[] = {};
    };
};