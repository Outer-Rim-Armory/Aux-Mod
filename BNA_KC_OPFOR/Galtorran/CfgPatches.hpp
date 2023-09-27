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
            "OPTRE_Weapons_Backpacks",
                // Backpacks
            "SC_MDF",
                // MDF White Vests
            "OPTRE_Weapons_Backpacks"
                // Backpacks
        };
        units[] =
        {
            "BNA_KC_Galtorran_Unit_Base",
            "BNA_KC_Galtorran_Unit_Rifleman",
            "BNA_KC_Galtorran_Unit_AT",

            "BNA_KC_Galtorran_Backpack_Base",
            "BNA_KC_Galtorran_Backpack",
            "BNA_KC_Galtorran_Backpack_Predef_Rifleman",
            "BNA_KC_Galtorran_Backpack_Heavy",
            "BNA_KC_Galtorran_Backpack_Heavy_Predef_AT",
            "BNA_KC_Galtorran_Backpack_RTO",
            "BNA_KC_Galtorran_Backpack_RTO_Predef_SL"
        };
        weapons[] =
        {
            "BNA_KC_Galtorran_Helmet",
            "BNA_KC_Galtorran_Helmet_SL",
            "BNA_KC_Galtorran_Uniform",
            "BNA_KC_Galtorran_Vest",
            "BNA_KC_Galtorran_Vest_Medium",
            "BNA_KC_Galtorran_Vest_Heavy"
        };

        skipWhenMissingDependencies = 1;
    };
};