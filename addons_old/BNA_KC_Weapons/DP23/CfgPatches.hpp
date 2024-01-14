class CfgPatches
{
    class BNA_KC_Weapons_DP23
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "JLTS_weapons_DP23",
                // DP-23
            "Aux501_Patch_Accessories",
                // 501st Scopes/Sights
            "JLTS_weapons_DC17SA",
                // Flashlight
            "A3_Weapons_F_Acc",
                // Laser pointer
            "ace_laserpointer"
                // Green laser pointer
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_DP23_Base",
            "BNA_KC_DP23",
            "BNA_KC_DP23_Fried",
            "BNA_KC_DP23_RiotShield",
            "BNA_KC_DP23_RiotShield_Fried",
        };
        magazines[] =
        {
            "Aux12thFleet_Mag_DP23",
            "Aux12thFleet_Mag_DP23_HP"
        };
        ammo[] = {};
    };
};