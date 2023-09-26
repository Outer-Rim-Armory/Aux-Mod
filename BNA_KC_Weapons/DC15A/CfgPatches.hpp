class CfgPatches
{
    class BNA_KC_Weapons_DC15A
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "A3_Weapons_F",
                // UGL_F
            "JLTS_weapons_DC15A",
                // DC-15A
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
            "BNA_KC_DC15A_Base",
            "BNA_KC_DC15A",
            "BNA_KC_DC15A_Fried",
            "BNA_KC_DC15A_UGL",
            "BNA_KC_DC15A_UGL_Fried"
        };
        magazines[] =
        {
            "Aux12thFleet_Mag_DC15A"
        };
        ammo[] = {};
    };
};