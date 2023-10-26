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
            "ls_armor_bluefor",
                // Airborne Helmet
            "LS_units_clones"
                // Vest models
        };
        units[] =
        {
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_Helmet_Airborne",
            "BNA_KC_Helmet_Airborne_v2",

            // Vests
            "BNA_KC_Vest_Airborne",
            "BNA_KC_Vest_Airborne_Light",
            "BNA_KC_Vest_Airborne_CLS",
            "BNA_KC_Vest_Airborne_NCO",
            "BNA_KC_Vest_Airborne_Officer"
        };
    };
};