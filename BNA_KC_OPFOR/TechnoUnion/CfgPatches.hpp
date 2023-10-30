class CfgPatches
{
    class BNA_KC_OPFOR_TechnoUnion
    {
        addonRootClass= "BNA_KC_OPFOR";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_OPFOR",
                // Base OPFOR unit, uniform, etc.
            "sc_equipment",
                // Uniform textures
                // Vest
                // Backpacks
            "BNA_KC_Weapons_E5",
                // E-5
            "BNA_KC_Weapons_E5C",
                // E-5C
            "BNA_KC_Weapons_E60R",
                // E-60R
            "sc_weapons",
                // IG-3 Grenade
            "3AS_Equipment",
                // Squad shield
            "A3_Weapons_F",
                // Smoke grenade
            "A3_Characters_F",
                // Shadow Mask picture
            "A3_Weapons_F_Ammoboxes",
                // Base backpack
            "LFPModels",
                // Shadow Mask
            "BNA_KC_Vehicles",
                // Subcategories
            "BNA_KC_Vehicles_AAT",
                // AAT
            "BNA_KC_Vehicles_Plesioth",
                // Plesioth
            "BNA_KC_Vehicles_Conga",
                // Conga
            "BNA_KC_Vehicles_AST",
                // Armored Scout Tank
            "BNA_KC_Vehicles_Ogre",
                // Ogre
            "BNA_KC_Vehicles_Rathian"
                // Rathian
        };
        units[] =
        {
            // Units
            "BNA_KC_TU_Unit_Base",
            "BNA_KC_TU_Unit_Rifleman",
            "BNA_KC_TU_Unit_Rifleman_Shield",
            "BNA_KC_TU_Unit_AssaultHeavy",
            "BNA_KC_TU_Unit_AssaultMedium",
            "BNA_KC_TU_Unit_AT",
            "BNA_KC_TU_Unit_AA",
            "BNA_KC_TU_Unit_SL",
            "BNA_KC_TU_Unit_Melee",

            // Backpacks
            "BNA_KC_TU_Backpack",
            "BNA_KC_TU_Backpack_Predef_Rifleman",
            "BNA_KC_TU_Backpack_Heavy",
            "BNA_KC_TU_Backpack_Heavy_Predef_AT",
            "BNA_KC_TU_Backpack_Heavy_Predef_AA",
            "BNA_KC_TU_Backpack_Assault",
            "BNA_KC_TU_Backpack_Assault_Predef_Heavy",
            "BNA_KC_TU_Backpack_Assault_Predef_Medium",
            "BNA_KC_TU_Backpack_RTO",
            "BNA_KC_TU_Backpack_RTO_Predef_SL",

            // Vehicles
            "BNA_KC_AAT_TU",
            "BNA_KC_AAT_Heavy_TU",
            "BNA_KC_AAT_King_TU",
            "BNA_KC_Plesioth_TU",
            "BNA_KC_Conga_IFV_TU",
            "BNA_KC_Conga_MGS_TU",
            "BNA_KC_AST_TU",
            "BNA_KC_Rathian_CAP_TU",
            "BNA_KC_Rathian_CAS_TU",
            "BNA_KC_Ogre_TU",
            "BNA_KC_Ogre_Armed_TU"
        };
        weapons[] =
        {
            // Helmets
            "BNA_KC_TU_Helmet",
            "BNA_KC_TU_Helmet_Assault",
            "BNA_KC_TU_Helmet_Visor",
            "BNA_KC_TU_Helmet_Visor_Goggles",
            "BNA_KC_TU_Helmet_Heavy",

            // Uniforms
            "BNA_KC_TU_Uniform",

            // Vests
            "BNA_KC_TU_Vest",
            "BNA_KC_TU_Vest_Medium",
            "BNA_KC_TU_Vest_AssaultMedium",
            "BNA_KC_TU_Vest_AssaultHeavy"
        };

        skipWhenMissingDependencies = 1;
    };
};