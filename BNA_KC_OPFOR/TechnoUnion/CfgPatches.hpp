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
                // Backpacks
            "sc_props",
                // Vest
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
            "LFPModels"
                // Shadow Mask
        };
        units[] =
        {
            "BNA_KC_TU_Unit_Base",
            "BNA_KC_TU_Unit_Rifleman",
            "BNA_KC_TU_Unit_AssaultHeavy",
            "BNA_KC_TU_Unit_AssaultMedium",
            "BNA_KC_TU_Unit_AT",
            "BNA_KC_TU_Unit_SL",
            "BNA_KC_TU_Unit_Melee",

            "BNA_KC_TU_Backpack",
            "BNA_KC_TU_Backpack_Predef_Rifleman",
            "BNA_KC_TU_Backpack_Heavy",
            "BNA_KC_TU_Backpack_Heavy_Predef_AT",
            "BNA_KC_TU_Backpack_Assault",
            "BNA_KC_TU_Backpack_Assault_Predef_Heavy",
            "BNA_KC_TU_Backpack_Assault_Predef_Medium",
            "BNA_KC_TU_Backpack_RTO",
            "BNA_KC_TU_Backpack_RTO_Predef_SL"
        };
        weapons[] =
        {
            "BNA_KC_TU_Uniform"
        };

        skipWhenMissingDependencies = 1;
    };
};