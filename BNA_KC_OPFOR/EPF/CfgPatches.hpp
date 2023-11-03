class CfgPatches
{
    class BNA_KC_OPFOR_EPF
    {
        addonRootClass= "BNA_KC_OPFOR";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Core",
                // Core Addon
            "BNA_KC_OPFOR",
                // Subcategories
            "BNA_KC_OPFOR_TechnoUnion",
                // Base helmet, uniform, etc.
            "sc_equipment",
                // Uniform textures
                // Vests
                // Backpacks
            "A3_Characters_F_AoW_Headgear",
                // Officer Cap
            "A3_Characters_F_AoW",
                // Officer Uniform
            "BNA_KC_Weapons_E5",
                // E-5
            "BNA_KC_Weapons_E5C",
                // E-5C
            "BNA_KC_Weapons_E60R",
                // E-60R
            "OPTRE_FC_Weapons_PlasmaGrenade",
                // Plasma Grenade
            "BNA_KC_Vehicles",
                // Subcategories
            "BNA_KC_Vehicles_AAT",
                // AAT
            "BNA_KC_Vehicles_Plesioth",
                // Plesioth
            "BNA_KC_Vehicles_Conga",
                // Conga
            "BNA_KC_Vehicles_Hornet",
                // Hornet
            "BNA_KC_Vehicles_Khezu",
                // Khezu
            "BNA_KC_Vehicles_AST",
                // Armored Scout Tank
            "BNA_KC_Vehicles_Ogre",
                // Ogre
            "BNA_KC_Vehicles_Vespoid",
                // Vespoid
            "BNA_KC_Vehicles_Rathian"
                // Rathian
        };
        units[] =
        {
            // Units
            "BNA_KC_EPF_Unit_Base",
            "BNA_KC_EPF_Unit_Rifleman",
            "BNA_KC_EPF_Unit_Rifleman_Shield",
            "BNA_KC_EPF_Unit_AT",
            "BNA_KC_EPF_Unit_AA",
            "BNA_KC_EPF_Unit_AssaultHeavy",
            "BNA_KC_EPF_Unit_AssaultMedium",
            "BNA_KC_EPF_Unit_SL",
            "BNA_KC_EPF_Unit_Melee",
            "BNA_KC_EPF_Unit_Presidente",

            // Backpacks
            "BNA_KC_EPF_Backpack",
            "BNA_KC_EPF_Backpack_Predef_Rifleman",
            "BNA_KC_EPF_Backpack_Heavy",
            "BNA_KC_EPF_Backpack_Heavy_Predef_AT",
            "BNA_KC_EPF_Backpack_Heavy_Predef_AA",
            "BNA_KC_EPF_Backpack_Assault",
            "BNA_KC_EPF_Backpack_Assault_Predef_Heavy",
            "BNA_KC_EPF_Backpack_Assault_Predef_Medium",
            "BNA_KC_EPF_Backpack_RTO",
            "BNA_KC_EPF_Backpack_RTO_Predef_SL",

            // Vehicles
            "BNA_KC_AAT_EPF",
            "BNA_KC_AAT_Heavy_EPF",
            "BNA_KC_AAT_King_EPF",
            "BNA_KC_Plesioth_EPF",
            "BNA_KC_Conga_IFV_EPF",
            "BNA_KC_Conga_MGS_EPF",
            "BNA_KC_Hornet_EPF",
            "BNA_KC_Hornet_MG_EPF",
            "BNA_KC_Hornet_AT_EPF",
            "BNA_KC_Khezu_EPF",
            "BNA_KC_Khezu_Armed_EPF",
            "BNA_KC_AST_EPF",
            "BNA_KC_Ogre_EPF",
            "BNA_KC_Ogre_Armed_EPF",
            "BNA_KC_Vespoid_EPF",
            "BNA_KC_Vespoid_Armed_EPF",
            "BNA_KC_Rathian_CAP_EPF",
            "BNA_KC_Rathian_CAS_EPF"
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_EPF_Helmet",
            "BNA_KC_EPF_Helmet_Assault",
            "BNA_KC_EPF_Helmet_Visor",
            "BNA_KC_EPF_Helmet_Visor_Goggles",
            "BNA_KC_EPF_Helmet_Heavy",
            "BNA_KC_EPF_Helmet_Presidente",

            // Uniforms
            "BNA_KC_EPF_Uniform",
            "BNA_KC_EPF_Uniform_Presidente",

            // Vests
            "BNA_KC_EPF_Vest",
            "BNA_KC_EPF_Vest_Medium",
            "BNA_KC_EPF_Vest_AssaultMedium",
            "BNA_KC_EPF_Vest_AssaultHeavy"
        };

        skipWhenMissingDependencies = 1;
    };
};