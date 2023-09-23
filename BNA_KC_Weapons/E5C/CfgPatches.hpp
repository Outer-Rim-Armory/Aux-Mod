class CfgPatches
{
    class BNA_KC_Weapons_E5C
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "BNA_KC_Weapons_E5",
                // Sound effects
            "JLTS_weapons_E5C"
                // E-5C
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_E5C_Base",
            "BNA_KC_E5C",
            "BNA_KC_E5C_Fried"
        };
        magazines[] =
        {
            "Aux_12thFleet_Mag_E5C"
        };
        ammo[] = {};
    };
};