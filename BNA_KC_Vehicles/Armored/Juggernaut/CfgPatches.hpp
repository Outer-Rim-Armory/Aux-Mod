class CfgPatches
{
    class BNA_KC_Vehicles_Juggernaut
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3AS_APC_Jug",
                // Juggernaut
            "BNA_KC_Vehicles_Weapons"
                // Horn & Alarm
        };
        units[] =
        {
            "BNA_KC_Juggernaut"
        };
        weapons[] = {};
    };
};