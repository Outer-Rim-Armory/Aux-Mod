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
                // SL backpack
            "sc_props",
                // Vest
            "BNA_KC_Weapons_E5",
                // E-5
            "BNA_KC_Weapons_E5C",
                // E-5C
            "sc_weapons",
                // IG-3 Grenade
            "3AS_Equipment",
                // Squad shield
            "A3_Weapons_F",
                // Smoke grenade
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
            "BNA_KC_OPFOR_Unit_TU_Melee"
        };
        weapons[] =
        {
            "BNA_KC_OPFOR_Uniform_TU"
        };

        skipWhenMissingDependencies = 1;
    };
};