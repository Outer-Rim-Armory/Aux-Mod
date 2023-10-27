class CfgPatches
{
    class BNA_KC_Vehicles_AAT
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "3AS_AAT",
                // AAT
            "BNA_KC_OPFOR_CIS",
                // Faction / Subcategory
            "JLTS_characters_DroidArmor",
                // Crew Unit
        };
        units[] =
        {
            "BNA_KC_AAT_CIS"
        };
        weapons[] = {};
    };
};