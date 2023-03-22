class CfgPatches
{
    class BNA_KC_Gear_Weapons
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "3AS_Weapons"
				// Westar
        };
        units[] = {};
        weapons[] =
        {
            // Custom Weapons
            "BNA_KC_Westar_M5_Base",

            // Pre-Defined Weapons
            "BNA_KC_DC15S_Predef",
            "BNA_KC_DC15C_Predef"
        };
    };
};