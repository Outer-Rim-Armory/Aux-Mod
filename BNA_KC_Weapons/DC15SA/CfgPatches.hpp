class CfgPatches
{
    class BNA_KC_Weapons_DC15SA
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "SWLW_clones_spec"
                // DC-15SA
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_DC15SA_Base",
            "BNA_KC_DC15SA"
        };
        magazines[] =
        {
            "Aux12thFleet_Mag_DC15SA"
        };
        ammo[] = {};
    };
};