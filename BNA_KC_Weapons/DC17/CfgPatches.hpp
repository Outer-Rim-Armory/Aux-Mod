class CfgPatches
{
    class BNA_KC_Weapons_DC17
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "JLTS_weapons_DC17SA",
                // DC-17
            "A3_Weapons_F",
                // UGL Smoke Round
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
            "BNA_KC_DC17_Base",
            "BNA_KC_DC17",
            "BNA_KC_DC17_Fried",
            "BNA_KC_DC17_RiotShield",
            "BNA_KC_DC17_RiotShield_Fried",

            "BNA_KC_GR20",
            "BNA_KC_GR20_Fried"
        };
        magazines[] =
        {
            "12thFleet_Mag_DC17",
            "BNA_KC_Mag_GR20"
        };
        ammo[] = {};
    };
};