class CfgPatches
{
    class BNA_KC_Gear_Aviation
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "ls_armor_bluefor",
                // Phase 1 Pilot Helmet
                // Phase 2 Pilot Helmet
            "BNA_KC_Gear_Infantry"
                // Base Unit
                // Base Uniform
        };
        units[] =
        {
            // Units
            "BNA_KC_Unit_Phase1_Pilot",
            "BNA_KC_Unit_Phase2_Pilot",
            "BNA_KC_Unit_Phase2_Pilot_Officer"
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_Helmet_Phase1_Pilot",
            "BNA_KC_Helmet_Phase2_Pilot",
            "BNA_KC_Helmet_Phase2_Pilot_Officer",
            "BNA_KC_Helmet_Phase2_Pilot_Officer_CamoBrown",
            "BNA_KC_Helmet_Phase2_Pilot_Officer_CamoGrey",

            // Uniforms
            "BNA_KC_Uniform_Pilot",
            "BNA_KC_Uniform_Pilot_Officer",
        };
    };
};