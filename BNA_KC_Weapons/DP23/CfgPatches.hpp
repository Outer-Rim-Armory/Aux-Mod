class CfgPatches
{
    class BNA_KC_Weapons_DP23
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "JLTS_weapons_DP23",
                // DP-23
            "JLTS_weapons_DC17SA",
                // Flashlight
            "Aux501_Patch_Accessories",
                // Scopes
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
            "BNA_KC_DP23_Fried"
        };
        magazines[] =
        {
            "Aux_12thFleet_Mag_DP23"
        };
        ammo[] = {};
    };
};