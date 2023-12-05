class CfgPatches
{
    class BNA_KC_Gear_Jedi
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
                // Core Addon
            "BNA_KC_Gear_Infantry",
                // Base unit, uniform, etc.
            "lsd_armor_bluefor",
                // Jedi Commander Armor
                // Jedi Commander Unit
            "LS_units_clones"
                // Basic Clone vest - used because invisible
        };
        units[] =
        {
            // Units
            "BNA_KC_Unit_Jedi_Commander"
        };
        weapons[] =
        {
            "BNA_KC_Uniform_Jedi_Commander",
            "BNA_KC_Vest_Jedi"
        };
    };
};