class CfgPatches
{
    class BNA_KC_OPFOR_TechnoUnion
    {
        addonRootClass= "BNA_KC_Gear";
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
            "Aux501_Patch_e60r",
                // E-60R Launcher
                // HE/AT Magazines
            "sc_weapons",
                // IG-3 Grenade
            "3AS_Equipment",
                // Squad shield
            "A3_Weapons_F",
                // Smoke grenade
            "A3_Weapons_F_Ammoboxes",
                // Base backpack
            "LFPModels"
                // Shadow Mask
        };
        units[] =
        {
            "BNA_KC_OPFOR_Unit_TU_Base",
            "BNA_KC_OPFOR_Unit_TU_Rifleman",
            "BNA_KC_OPFOR_Unit_TU_AssaultHeavy",
            "BNA_KC_OPFOR_Unit_TU_AssaultMedium",
            "BNA_KC_OPFOR_Unit_TU_AT",
            "BNA_KC_OPFOR_Unit_TU_SL",
            "BNA_KC_OPFOR_Unit_TU_Melee",

            "BNA_KC_Backpack_TU",
            "BNA_KC_Backpack_TU_Predef_Rifleman",
            "BNA_KC_Backpack_TU_Heavy",
            "BNA_KC_Backpack_TU_Heavy_Predef_AT",
            "BNA_KC_Backpack_TU_Assault",
            "BNA_KC_Backpack_TU_Assault_Predef_Heavy",
            "BNA_KC_Backpack_TU_Assault_Predef_Medium",
            "BNA_KC_Backpack_TU_RTO",
            "BNA_KC_Backpack_TU_RTO_Predef_SL"
        };
        weapons[] =
        {
            "BNA_KC_OPFOR_Uniform_TU"
        };

        skipWhenMissingDependencies = 1;
    };
};