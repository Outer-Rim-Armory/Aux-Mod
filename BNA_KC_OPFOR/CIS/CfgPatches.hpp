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
            "JLTS_characters_DroidArmor",
                // B1 Battle Droids
            "ls_units_redfor",
                // BX models/texture
            "WBK_DifferentRobotics_1"
                // Droid walking sounds
        };
        units[] =
        {
            "BNA_KC_CIS_Unit_Droid_Base",
            "BNA_KC_CIS_Unit_B1_Droid",
            "BNA_KC_CIS_Unit_BX_Droid"
        };
        weapons[] =
        {
            "BNA_KC_CIS_Uniform_Droid_Base",
            "BNA_KC_CIS_Uniform_B1_Droid",
            "BNA_KC_CIS_Uniform_BX_Droid",
            "BNA_KC_CIS_Vest_BX_Droid",
            "BNA_KC_CIS_Vest_BX_Droid_Melee"
        };
    };
};