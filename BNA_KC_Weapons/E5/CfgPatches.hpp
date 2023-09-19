class CfgPatches
{
    class BNA_KC_Weapons_E5
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "BNA_KC_Weapons_DC15S",
                // Base Gun
            "JLTS_weapons_E5",
                // E-5 models/textures
            "3AS_Main"
                // E-5 Weapon Sounds
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_E5_Base",
            "BNA_KC_E5",
            "BNA_KC_E5_Fried",
            "BNA_KC_E5_RiotShield",
            "BNA_KC_E5_RiotShield_Fried"
        };
        magazines[] =
        {
            "Aux_12thFleet_Mag_E5"
        };
        ammo[] = {};
    };
};