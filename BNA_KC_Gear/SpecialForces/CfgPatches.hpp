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
            "ls_armor_bluefor",
                // ARF Helm
                // BARC Helm
            "lsd_armor_bluefor",
                // ARC Helm
            "SWLB_equipment_backpacks",
                // ARC Backpack
            "SWLB_Clones"
                // ARC Vest
        };
        units[] =
        {
            // Units
            "BNA_KC_Unit_ARC",
            "BNA_KC_Unit_ARF",
            "BNA_KC_Unit_BARC",
            
            // Backpacks
            "BNA_KC_Backpack_ARC"
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_Helmet_ARC_Base",
            "BNA_KC_Helmet_ARF_Base",
            "BNA_KC_Helmet_BARC_Base",
            
            // Uniforms

            // Vests
            "BNA_KC_Vest_ARC"
        };
    };
};