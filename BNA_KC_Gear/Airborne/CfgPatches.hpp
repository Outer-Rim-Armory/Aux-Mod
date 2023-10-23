class CfgPatches
{
    class BNA_KC_Gear_Airborne
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Gear_Infantry",
                // Base helmet, uniform, etc.
            "LS_units_clones"
                // Vest models
        };
        units[] =
        {
        };
        weapons[] =
        {
            // Vests
            "BNA_KC_Vest_Airborne",
            "BNA_KC_Vest_Airborne_NCO",
            "BNA_KC_Vest_Airborne_Officer"
        };
    };
};