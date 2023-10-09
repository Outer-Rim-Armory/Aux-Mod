class CfgPatches
{
    class BNA_KC_Vehicles_TX130
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "3AS_SaberTank"
                // TX-130
        };
        units[] =
        {
            "BNA_KC_TX130_M1",
            "BNA_KC_Saber_M1"
        };
        weapons[] = {};
    };
};