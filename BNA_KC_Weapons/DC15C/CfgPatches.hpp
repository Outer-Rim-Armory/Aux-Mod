class CfgPatches
{
    class BNA_KC_Weapons_DC15C
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "3AS_Weapons_DC15C",
                // DC-15C
            "3AS_Main",
                // Reload animation
            "BNA_KC_Weapons_DC15S",
                // Magazine
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
            "BNA_KC_DC15C_Base",
            "BNA_KC_DC15C",
            "BNA_KC_DC15C_Fried"
        };
        magazines[] =
        {
            "Aux_12thFleet_Mag_DC15C"
        };
        ammo[] = {};
    };
};