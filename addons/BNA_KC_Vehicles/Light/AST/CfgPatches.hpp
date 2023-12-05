class CfgPatches
{
    class BNA_KC_Vehicles_AST
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "lsd_vehicles_cars"
                // Armored Scout Tank
        };
        units[] =
        {
            "BNA_KC_AST_Base"
        };
        weapons[] = {};
    };
};