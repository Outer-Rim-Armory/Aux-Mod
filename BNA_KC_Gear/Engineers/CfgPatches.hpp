class CfgPatches
{
    class BNA_KC_Gear_Engineers
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Gear_Infantry",
                // Base helmet, uniform, etc.
            "ls_armor_bluefor",
                // Engineer Helmet
            "LS_units_clones",
                // Vest models
            "SWLB_CEE"
                // Vest models
        };
        units[] =
        {
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_Helmet_Engineer",
            "BNA_KC_Helmet_Engineer_CamoBrown",
            "BNA_KC_Helmet_Engineer_CamoGrey",

            // Vests
            "BNA_KC_Vest_Engineer",
            "BNA_KC_Vest_Engineer_NCO",
            "BNA_KC_Vest_Engineer_Officer",
        };
    };
};