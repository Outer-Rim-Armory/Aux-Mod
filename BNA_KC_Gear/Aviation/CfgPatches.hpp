class CfgPatches
{
    class BNA_KC_Gear_Aviation
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Gear_Infantry"
        };
        units[] =
        {
            // Units
            "BNA_KC_Unit_Phase1_Pilot",
            "BNA_KC_Unit_Phase2_Pilot"
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_Helmet_Phase1_Pilot_Base",
            "BNA_KC_Helmet_Phase2_Pilot_Base",

            // Uniforms
            "BNA_KC_Uniform_Pilot"
        };
    };
};