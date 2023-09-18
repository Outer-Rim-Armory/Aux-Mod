class CfgPatches
{
    class BNA_KC_Weapons_DC15L
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3AS_Weapons_DC15L"
                // DC-15L
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_DC15L_Base",
            "BNA_KC_DC15L",
            "BNA_KC_DC15L_Fried"
        };
        magazines[] =
        {
            "Aux_12thFleet_Mag_DC15L"
        };
        ammo[] = {};
    };
};