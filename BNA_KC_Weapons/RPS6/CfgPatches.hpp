class CfgPatches
{
    class BNA_KC_Weapons_RPS6
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "JLTS_weapons_RPS6"
                // RPS-6
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_RPS6_Base",
            "BNA_KC_RPS6",
            "BNA_KC_RPS6_Fried"
        };
        magazines[] = {};
        ammo[] = {};
    };
};