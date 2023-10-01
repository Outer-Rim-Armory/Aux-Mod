class CfgPatches
{
    class BNA_KC_Weapons_HI12
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "LF_Weapon_Unit_hi12",
                // HI-12 / magazine
            "JLTS_weapons_DC17SA",
                // Flashlight
            "A3_Weapons_F_Acc",
                // Laser pointer
            "ace_laserpointer",
                // Green laser pointer
            "A3_Weapons_F_Mark_Acc"
                // Bipod
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_HI12"
        };
        magazines[] =
        {
            "BNA_KC_Mag_HI12"
        };
        ammo[] = {};
    };
};