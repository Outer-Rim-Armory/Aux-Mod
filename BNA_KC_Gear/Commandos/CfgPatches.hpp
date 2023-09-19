class CfgPatches
{
    class BNA_KC_Gear_Commandos
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Gear_SpecialForces",
                // SF Unit, Uniform, etc. as base
            "ls_armor_bluefor",
                // Commando Helmet
                // Commando Uniform
            "SWLB_clones_spec_backpacks"
                // Commando Backpacks
        };
        units[] =
        {
            "BNA_KC_Unit_Commando"
        };
        weapons[] =
        {
            "BNA_KC_Helmet_Katarn",
            "BNA_KC_Uniform_Katarn"
        };
    };
};