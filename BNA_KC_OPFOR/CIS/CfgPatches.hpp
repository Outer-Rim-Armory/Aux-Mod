class CfgPatches
{
    class BNA_KC_OPFOR_CIS
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_OPFOR",
                // Base OPFOR unit, uniform, etc.
            "BNA_KC_Gear_Infantry",
                // Base unit, uniform, etc. for actor armor
            "ls_units_redfor",
                // BX models/texture
            "JLTS_characters_DroidArmor",
                // Crew Unit
        };
        units[] =
        {
            "BNA_KC_OPFOR_Unit_Droid_Base",
            "BNA_KC_OPFOR_Unit_BXDroid",

            // Vehicles
            "BNA_KC_AAT_CIS"
        };
        weapons[] =
        {
            "BNA_KC_OPFOR_Uniform_Droid_Base",
            "BNA_KC_OPFOR_Uniform_BXDroid",
            "BNA_KC_OPFOR_Vest_BXDroid",
            "BNA_KC_OPFOR_Vest_BXDroid_Melee"
        };
    };
};