class CfgPatches
{
    class BNA_KC_Vehicles_ATRT
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "3AS_ATRT",
                // AT-RT
            "cba_xeh",
                // Re-add CBA'x XEH to AT-RT
            "BNA_KC_Vehicles_Weapons"
                // AT-RT weapon
        };
        units[] =
        {
            "BNA_KC_ATRT"
        };
        weapons[] = {};
    };
};