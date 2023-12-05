class CfgPatches
{
    class BNA_KC_OPFOR
    {
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
                // Core Addon
            "ls_armor_redfor",
                // Base unit, uniform, vest
            "A3_Weapons_F_Ammoboxes"
                // Base backpack
        };
        units[] =
        {
            "BNA_KC_OPFOR_Unit_Base",
            "BNA_KC_OPFOR_Backpack_Base"
        };
        weapons[] =
        {
            "BNA_KC_OPFOR_Helmet_Base",
            "BNA_KC_OPFOR_Uniform_Base",
            "BNA_KC_OPFOR_Vest_Base"
        };
        magazines[] = {};
        ammo[] = {};
    };
};