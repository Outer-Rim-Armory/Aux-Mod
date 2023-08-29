class CfgPatches
{
    class BNA_KC_Weapons_DC15X
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "JLTS_weapons_DC15X",
                // DC-15X
            //"JLTS_weapons_DC17SA", // Looked odd when on the DC-15X
                // Flashlight
            //"A3_Weapons_F_Acc",
                // Laser pointer
            //"ace_laserpointer",
                // Green laser pointer
            "A3_Weapons_F_Mark_Acc"
                // Bipods
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
            "12thFleet_Mag_DC15X"
        };
        ammo[] = {};
    };
};