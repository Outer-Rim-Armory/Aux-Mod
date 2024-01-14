class CfgPatches
{
    class BNA_KC_Weapons_DC15L
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "3AS_Weapons_DC15L",
                // DC-15L
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
            "BNA_KC_DC15L_Base",
            "BNA_KC_DC15L",
            "BNA_KC_DC15L_Fried"
        };
        magazines[] =
        {
            "Aux12thFleet_Mag_DC15L"
        };
        ammo[] = {};
    };
};