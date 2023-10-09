class CfgPatches
{
    class BNA_KC_Vehicles_ATAP
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3AS_ATAP",
                // AT-AP
            "BNA_KC_Vehicles_Sounds"
                // AT-TE alarm
        };
        units[] =
        {
            "BNA_KC_ATAP"
        };
        weapons[] = {};
    };
};