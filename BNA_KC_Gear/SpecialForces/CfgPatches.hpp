class CfgPatches
{
    class BNA_KC_Gear_SpecialForces
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Gear_Infantry",
                // Base KC Unit
                // Officer Pauldron Texture (For ARC Vest)
            "ls_armor_bluefor",
                // ARF Helm
                // BARC Helm
            "lsd_armor_bluefor",
                // ARC Helm
            "lsd_equipment_bluefor",
                // Facewear
            "SWLB_equipment_backpacks",
                // ARC Backpack
            "SWLB_Clones"
                // ARC Vest
        };
        units[] =
        {
            // Units
            "BNA_KC_Unit_ARC",
            "BNA_KC_Unit_ARC_Night",
            "BNA_KC_Unit_ARF",
            "BNA_KC_Unit_BARC",

            // Backpacks
            "BNA_KC_Backpack_ARC"
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_Helmet_ARC",
            "BNA_KC_Helmet_ARC_CamoBrown",
            "BNA_KC_Helmet_ARC_CamoGrey",
            "BNA_KC_Helmet_ARC_v2",
            "BNA_KC_Helmet_ARC_Night",
            "BNA_KC_Helmet_ARF",
            "BNA_KC_Helmet_ARF_CamoBrown",
            "BNA_KC_Helmet_ARF_CamoGrey",
            "BNA_KC_Helmet_ARF_v2",
            "BNA_KC_Helmet_BARC",

            // Uniforms
            "BNA_KC_Uniform_ARC",
            "BNA_KC_Uniform_ARC_Night",
            "BNA_KC_Uniform_ARF",

            // Vests
            "BNA_KC_Vest_ARC",
            "BNA_KC_Vest_ARC_Light"
        };
    };
};