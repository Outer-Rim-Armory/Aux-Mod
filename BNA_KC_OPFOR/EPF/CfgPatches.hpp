class CfgPatches
{
    class BNA_KC_OPFOR_EPF
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
                // Vests
                // Backpacks
            "BNA_KC_Weapons_E5",
                // E-5
            "BNA_KC_Weapons_E5C",
                // E-5C
            "BNA_KC_Weapons_E60R"
                // E-60R
        };
        units[] =
        {
            // Units
            "BNA_KC_EPF_Unit_Base"

            // Backpacks

            // Vehicles
        };
        weapons[] =
        {
            // Uniforms
            "BNA_KC_EPF_Uniform",

            // Vests
            "BNA_KC_EPF_Vest",
            "BNA_KC_EPF_Vest_AssaultMedium",
            "BNA_KC_EPF_Vest_AssaultHeavy"
        };

        skipWhenMissingDependencies = 1;
    };
};