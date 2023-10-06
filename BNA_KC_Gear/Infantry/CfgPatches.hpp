class CfgPatches
{
    class BNA_KC_Gear_Infantry
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Gear_Weapons",
                // Predfined / Custom Weapons
            "ls_armor_bluefor",
                // P1 and P2 helmets
                // Engineer Helmet
                // Airborne Helmet
                // Insulated Helmet
                // Basic Uniform
                // Insulated Uniform
                // Placeable Helmet Props
            "lsd_units_bluefor",
                // Base Clone Unit
            "lsd_equipment_bluefor",
                // Standard NVGs
                // Rangefinder NVGs
            "SWLB_equipment_backpacks",
                // Infantry Backpacks
            "SWLB_Clones",
                // Clone Commander Visor
                // Officer Vest
            "JLTS_core"
                // Droid NVG UI image
        };
        units[] =
        {
            // Phase 1 Units
            "BNA_KC_Unit_Phase1_Base",
            "BNA_KC_Unit_Phase1_CR",
            "BNA_KC_Unit_Phase1_CT",
            "BNA_KC_Unit_Phase1_SCT",
            "BNA_KC_Unit_Phase1_VCT",
            "BNA_KC_Unit_Phase1_LCPL",
            "BNA_KC_Unit_Phase1_CPL",
            "BNA_KC_Unit_Phase1_CS",
            "BNA_KC_Unit_Phase1_CSS",
            "BNA_KC_Unit_Phase1_CSFC",
            "BNA_KC_Unit_Phase1_CMS",
            "BNA_KC_Unit_Phase1_CSM",
            // "BNA_KC_Unit_Phase1_LT",
            // "BNA_KC_Unit_Phase1_WO",
            // "BNA_KC_Unit_Phase1_1LT",
            // "BNA_KC_Unit_Phase1_CAP",
            // "BNA_KC_Unit_Phase1_MAJ",
            // "BNA_KC_Unit_Phase1_CMD",

            // Camo Phase 2 Units
            "BNA_KC_Unit_Phase1_Recruit_CamoBrown",
            "BNA_KC_Unit_Phase1_Recruit_CamoGrey",
            "BNA_KC_Unit_Phase1_Enlisted_CamoBrown",
            "BNA_KC_Unit_Phase1_Enlisted_CamoGrey",
            "BNA_KC_Unit_Phase1_NCO_CamoBrown",
            "BNA_KC_Unit_Phase1_NCO_CamoGrey",
            "BNA_KC_Unit_Phase1_Officer_CamoBrown",
            "BNA_KC_Unit_Phase1_Officer_CamoGrey",

            // Phase 2 Units
            "BNA_KC_Unit_Phase2_Base",
            "BNA_KC_Unit_Phase2_CR",
            "BNA_KC_Unit_Phase2_CT",
            "BNA_KC_Unit_Phase2_CT_Legacy",
            "BNA_KC_Unit_Phase2_SCT",
            "BNA_KC_Unit_Phase2_VCT",
            "BNA_KC_Unit_Phase2_LCPL",
            "BNA_KC_Unit_Phase2_CPL",
            "BNA_KC_Unit_Phase2_CS",
            "BNA_KC_Unit_Phase2_CSS",
            "BNA_KC_Unit_Phase2_CSFC",
            "BNA_KC_Unit_Phase2_CMS",
            "BNA_KC_Unit_Phase2_CSM",
            "BNA_KC_Unit_Phase2_WO",
            "BNA_KC_Unit_Phase2_WO2",
            "BNA_KC_Unit_Phase2_WO3",
            "BNA_KC_Unit_Phase2_LT",
            "BNA_KC_Unit_Phase2_1LT",
            // "BNA_KC_Unit_Phase2_CAP",
            // "BNA_KC_Unit_Phase2_MAJ",
            // "BNA_KC_Unit_Phase2_CMD",

            // Camo Phase 2 Units
            "BNA_KC_Unit_Phase2_Recruit_CamoBrown",
            "BNA_KC_Unit_Phase2_Enlisted_CamoBrown",
            "BNA_KC_Unit_Phase2_NCO_CamoBrown",
            "BNA_KC_Unit_Phase2_Officer_CamoBrown",

            // Engineer Units

            // Airborne Units

            // Insulated (Snow) Units
            "BNA_KC_Unit_Insulated_Trooper",

            // Backpacks
            "BNA_KC_Backpack",
            "BNA_KC_Backpack_Invisible",
            "BNA_KC_Backpack_Heavy",
            "BNA_KC_Backpack_Radio",
            "BNA_KC_Backpack_Radio_Mini",
            "BNA_KC_Backpack_Radio_Invisible",
            "BNA_KC_Backpack_Medic",
            "BNA_KC_Backpack_Medic_Heavy",
            "BNA_KC_Backpack_Medic_Radio"
        };
        weapons[] =
        {
            // Phase 1 Helmets
            "BNA_KC_Helmet_Phase1_Base",
            "BNA_KC_Helmet_Phase1_CR",
            "BNA_KC_Helmet_Phase1_CT",
            "BNA_KC_Helmet_Phase1_CT_v2",
            "BNA_KC_Helmet_Phase1_CT_v3",
            "BNA_KC_Helmet_Phase1_CT_v4",
            "BNA_KC_Helmet_Phase1_SCT",
            "BNA_KC_Helmet_Phase1_VCT",
            "BNA_KC_Helmet_Phase1_LCPL",
            "BNA_KC_Helmet_Phase1_CPL",
            "BNA_KC_Helmet_Phase1_CS",
            "BNA_KC_Helmet_Phase1_CSS",
            "BNA_KC_Helmet_Phase1_CSFC",
            "BNA_KC_Helmet_Phase1_CMS",
            "BNA_KC_Helmet_Phase1_CSM",
            // "BNA_KC_Helmet_Phase1_LT",
            // "BNA_KC_Helmet_Phase1_Officer",

            // Camo Phase 1 Helmets
            "BNA_KC_Helmet_Phase1_Recruit_CamoBrown",
            "BNA_KC_Helmet_Phase1_Enlisted_CamoBrown",
            "BNA_KC_Helmet_Phase1_NCO_CamoBrown",
            "BNA_KC_Helmet_Phase1_Officer_CamoBrown",

            // Phase 2 Helmets
            "BNA_KC_Helmet_Phase2_Base",
            "BNA_KC_Helmet_Phase2_CR",
            "BNA_KC_Helmet_Phase2_CR_Legacy",
            "BNA_KC_Helmet_Phase2_CT",
            "BNA_KC_Helmet_Phase2_CT_v2",
            "BNA_KC_Helmet_Phase2_CT_Legacy",
            "BNA_KC_Helmet_Phase2_SCT",
            "BNA_KC_Helmet_Phase2_SCT_Legacy",
            "BNA_KC_Helmet_Phase2_VCT",
            "BNA_KC_Helmet_Phase2_VCT_Legacy",
            "BNA_KC_Helmet_Phase2_LCPL",
            "BNA_KC_Helmet_Phase2_LCPL_Legacy",
            "BNA_KC_Helmet_Phase2_CPL",
            "BNA_KC_Helmet_Phase2_CS",
            "BNA_KC_Helmet_Phase2_CS_Legacy",
            "BNA_KC_Helmet_Phase2_CSS",
            "BNA_KC_Helmet_Phase2_CSS_Legacy",
            "BNA_KC_Helmet_Phase2_CSFC",
            "BNA_KC_Helmet_Phase2_CSFC_Legacy",
            "BNA_KC_Helmet_Phase2_CMS",
            "BNA_KC_Helmet_Phase2_CMS_Legacy",
            "BNA_KC_Helmet_Phase2_CSM",
            "BNA_KC_Helmet_Phase2_CSM_Legacy",
            "BNA_KC_Helmet_Phase2_Officer",
            "BNA_KC_Helmet_Phase2_WO",
            "BNA_KC_Helmet_Phase2_WO2",
            "BNA_KC_Helmet_Phase2_WO3",
            "BNA_KC_Helmet_Phase2_LT",
            "BNA_KC_Helmet_Phase2_1LT",
            // "BNA_KC_Helmet_Phase2_CPT",
            // "BNA_KC_Helmet_Phase2_MAJ",
            // "BNA_KC_Helmet_Phase2_COM",

            // Camo Phase 2 Helmets
            "BNA_KC_Helmet_Phase2_Recruit_CamoBrown",
            "BNA_KC_Helmet_Phase2_Recruit_CamoGrey",
            "BNA_KC_Helmet_Phase2_Enlisted_CamoBrown",
            "BNA_KC_Helmet_Phase2_Enlisted_CamoGrey",
            "BNA_KC_Helmet_Phase2_NCO_CamoBrown",
            "BNA_KC_Helmet_Phase2_NCO_CamoGrey",
            "BNA_KC_Helmet_Phase2_Officer_CamoBrown",
            "BNA_KC_Helmet_Phase2_Officer_CamoGrey",

            // Engineer Helmets
            "BNA_KC_Helmet_Engineer",
            "BNA_KC_Helmet_Engineer_CamoBrown",
            "BNA_KC_Helmet_Engineer_CamoGrey",

            // Airborne
            "BNA_KC_Helmet_Airborne",
            "BNA_KC_Helmet_Airborne_v2",

            // Insulated (Snow) Helmets
            "BNA_KC_Helmet_Insulated",

            // Uniforms
            "BNA_KC_Uniform_Base",
            "BNA_KC_Uniform_CR",
            "BNA_KC_Uniform_CT",
            "BNA_KC_Uniform_CT_Legacy",
            "BNA_KC_Uniform_SCT",
            "BNA_KC_Uniform_VCT",
            "BNA_KC_Uniform_LCPL",
            "BNA_KC_Uniform_CPL",
            "BNA_KC_Uniform_CS",
            "BNA_KC_Uniform_CSS",
            "BNA_KC_Uniform_CSFC",
            "BNA_KC_Uniform_CMS",
            "BNA_KC_Uniform_CSM",
            "BNA_KC_Uniform_WO",
            "BNA_KC_Uniform_WO2",
            "BNA_KC_Uniform_WO3",
            "BNA_KC_Uniform_LT",
            "BNA_KC_Uniform_1LT",
            // "BNA_KC_Uniform_CPT",
            // "BNA_KC_Uniform_MAJ",
            // "BNA_KC_Uniform_COM",

            // Camo Uniforms
            "BNA_KC_Uniform_Recruit_CamoBrown",
            "BNA_KC_Uniform_Recruit_CamoGrey",
            "BNA_KC_Uniform_Enlisted_CamoBrown",
            "BNA_KC_Uniform_Enlisted_CamoGrey",
            "BNA_KC_Uniform_NCO_CamoBrown",
            "BNA_KC_Uniform_NCO_CamoGrey",
            "BNA_KC_Uniform_Officer_CamoBrown",
            "BNA_KC_Uniform_Officer_CamoGrey",

            // Insualted (Snow) Uniforms
            "BNA_KC_Uniform_Insulated",

            // Vests
            "BNA_KC_Vest_Basic",
            "BNA_KC_Vest_LCPL",
            "BNA_KC_Vest_CPL",
            "BNA_KC_Vest_CS",
            "BNA_KC_Vest_CSS",
            "BNA_KC_Vest_CSFC",
            "BNA_KC_Vest_CMS",
            "BNA_KC_Vest_CSM",
            "BNA_KC_Vest_Medic",
            "BNA_KC_Vest_Medic_Senior",
            "BNA_KC_Vest_Medic_v2",
            "BNA_KC_Vest_Medic_Senior_v2",
            "BNA_KC_Vest_Medic_Platoon",
            "BNA_KC_Vest_Officer",

            // NVGs
            "BNA_KC_NVG_Chip",
            "BNA_KC_NVG_Visor",
            "BNA_KC_NVG_Visor_v2",
            "BNA_KC_NVG_Rangefinder",
            "BNA_KC_NVG_Officer"
        };
    };
};