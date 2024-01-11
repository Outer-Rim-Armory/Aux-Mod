class CfgPatches
{
    class BNA_KC_Vehicles_AAT
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "3AS_AAT",
                // AAT
            "ls_vehicles_ground"
                // AAT, LS model for King AAT
        };
        units[] =
        {
            "BNA_KC_AAT_Base",
            "BNA_KC_AAT_Heavy_Base",
            "BNA_KC_AAT_King_Base"
        };
        weapons[] = {};
    };
};