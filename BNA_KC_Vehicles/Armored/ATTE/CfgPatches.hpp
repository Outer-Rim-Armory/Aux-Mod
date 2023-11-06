class CfgPatches
{
    class BNA_KC_Vehicles_ATTE
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "3AS_ATTE",
                // AT-TE
            "BNA_KC_Vehicles_Sounds",
                // Alarm Sound
            "BNA_KC_Gear_Armored"
                // Crew Unit
        };
        units[] =
        {
            "BNA_KC_ATTE_Base",
            "BNA_KC_ATTE",
            "BNA_KC_ATTE_Command"
        };
        weapons[] = {};
    };
};