class CfgPatches
{
    class BNA_KC_INDEP
    {
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
                // Core Addon
            "ls_armor_greenfor",
                // Base unit, uniform, vest
            "A3_Weapons_F_Ammoboxes"
                // Base backpack
        };
        units[] =
        {
            "BNA_KC_INDEP_Unit_Base",
            "BNA_KC_INDEP_Backpack_Base"
        };
        weapons[] =
        {
            "BNA_KC_INDEP_Helmet_Base",
            "BNA_KC_INDEP_Uniform_Base",
            "BNA_KC_INDEP_Vest_Base"
        };
        magazines[] = {};
        ammo[] = {};
    };
};