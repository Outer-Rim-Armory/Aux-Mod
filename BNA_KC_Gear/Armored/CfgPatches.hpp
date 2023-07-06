class CfgPatches
{
    class BNA_KC_Gear_Armored
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Gear_Infantry",
                // Base Uniform
                // Base Unit
                // Base Placeable Helmet
            "ls_armor_bluefor"
                // Phase 1/2 SpecOP Helmets
        };
        units[] =
        {
            // Units
            "BNA_KC_Unit_Phase1_Tanker",
            "BNA_KC_Unit_Phase2_Tanker"
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_Helmet_Phase1_Tanker",
            "BNA_KC_Helmet_Phase1_Tanker_v2",
            "BNA_KC_Helmet_Phase2_Tanker",
            "BNA_KC_Helmet_Phase2_Tanker_v2",

            // Uniforms
            "BNA_KC_Uniform_Tanker"
        };
    };
};