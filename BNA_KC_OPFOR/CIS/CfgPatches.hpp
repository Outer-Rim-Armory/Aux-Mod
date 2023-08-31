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
            "BNA_KC_Gear",
                // Base unit, uniform, etc. for actor armor
            "ls_units_redfor"
                // BX models/texture
        };
        units[] =
        {
            "BNA_KC_Unit_OPFOR_Droid_Base",
            "BNA_KC_Unit_OPFOR_BXDroid"
        };
        weapons[] =
        {
            "BNA_KC_Uniform_OPFOR_Droid_Base",
            "BNA_KC_Uniform_OPFOR_BXDroid",
            "BNA_KC_Vest_OPFOR_BXDroid",
            "BNA_KC_Vest_OPFOR_BXDroid_Melee"
        };
    };
};