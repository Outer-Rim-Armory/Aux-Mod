class CfgPatches
{
    class BNA_KC_Weapons_DC17M
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "SWLW_clones_spec"
                // DC-17M
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_DC17M_Base",
            "BNA_KC_DC17M"
        };
        magazines[] = {};
        ammo[] = {};
    };
};