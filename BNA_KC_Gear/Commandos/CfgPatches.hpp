class CfgPatches
{
    class BNA_KC_Gear_Commandos
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
                // Core Addon
            "BNA_KC_Gear_SpecialForces",
                // SF Unit, Uniform, etc. as base
            "BNA_KC_Gear_Infantry",
                // Backpacks
            "ls_armor_bluefor",
                // Commando Helmet
                // Commando Uniform
            "SWLB_clones_spec_backpacks"
                // Commando Backpacks
        };
        units[] =
        {
            // Units
            "BNA_KC_Unit_Commando",

            // Backpacks
            "BNA_KC_Backack_Katarn",
            "BNA_KC_Backack_Katarn_EOD",
            "BNA_KC_Backack_Katarn_RTO",
            "BNA_KC_Backack_Katarn_Tech"
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_Helmet_Katarn",

            // Uniforms
            "BNA_KC_Uniform_Katarn",

            // Vests
            "BNA_KC_Vest_Katarn_Basic",
            "BNA_KC_Vest_Katarn_EOD",
            "BNA_KC_Vest_Katarn_SL",
            "BNA_KC_Vest_Katarn_Sniper",
            "BNA_KC_Vest_Katarn_Tech",

            // NVGs
            "BNA_KC_NVG_Katarn_Visor",
            "BNA_KC_NVG_Katarn_Antenna"
        };
    };
};