class CfgPatches
{
    class BNA_KC_Weapons_DC15X
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "JLTS_weapons_DC15X",
                // DC-15X
            "Aux501_Patch_Accessories",
                // 501st Scopes/Sights
            "A3_Weapons_F_Items",
                // Scope item class
            "JLTS_weapons_DC17SA",
                // Flashlight
            "A3_Weapons_F_Acc",
                // Laser pointer
            "ace_laserpointer",
                // Green laser pointer
            "A3_Weapons_F_Acc",
                // DC-15X scope base
            "A3_Weapons_F_Mark_Acc"
                // Bipod
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_DC15X_Base",
            "BNA_KC_DC15X",
            "BNA_KC_DC15X_Fried"
        };
        magazines[] =
        {
            "Aux12thFleet_Mag_DC15X"
        };
        ammo[] = {};
    };
};