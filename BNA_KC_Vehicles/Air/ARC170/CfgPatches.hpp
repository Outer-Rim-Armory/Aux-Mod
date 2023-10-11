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
            "BNA_KC_Gear_Aviation"
                // Pilot unit
        };
        units[] =
        {
            "BNA_KC_ARC_170"
        };
        weapons[] = {};
    };
};