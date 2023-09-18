class CfgPatches
{
    class BNA_KC_Weapons_Valken38X
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "LF_Weapon_Unit_Valken38X",
                // Valken
            "BNA_KC_Weapons_DC15X",
                // Sniper mag
            "JLTS_weapons_DC17SA",
                // Flashlight
            "A3_Weapons_F_Acc",
                // Laser pointer
            "ace_laserpointer",
                // Green laser pointer
            "3AS_Weapons_DC15L"
                // Bipod
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_Valken38X_Base",
            "BNA_KC_Valken38X",
            "BNA_KC_Valken38X_Fried"
        };
        magazines[] =
        {
            "BNA_KC_Mag_Valken38X_AP"
        };
        ammo[] = {};
    };
};