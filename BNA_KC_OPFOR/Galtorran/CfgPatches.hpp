class CfgPatches
{
    class BNA_KC_OPFOR_Galtorran
    {
        addonRootClass= "BNA_KC_OPFOR";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_OPFOR",
                // Base uniform, unit, etc.
            "ls_armor_greenfor",
                // Mandalorian uniform textures
            "OPTRE_UNSC_Units_Army",
                // Snow Helmet
            "SC_MDF",
                // MDF White Vests
            "OPTRE_Weapons_Backpacks"
                // Backpacks
        };
        units[] =
        {
            "BNA_KC_Galtorran_Unit_Base"
        };
        weapons[] =
        {
            "BNA_KC_Galtorran_Uniform"
        };

        skipWhenMissingDependencies = 1;
    };
};