class CfgPatches
{
    class BNA_KC_Weapons_DC15S
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "JLTS_weapons_DC15S",
                // DC-15S
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
            "BNA_KC_DC15S_Base",
            "BNA_KC_DC15S",
            "BNA_KC_DC15S_Fried",
            "BNA_KC_DC15S_RiotShield",
            "BNA_KC_DC15S_RiotShield_Fried"
        };
        magazines[] =
        {
            "12thFleet_Mag_DC15S"
        };
        ammo[] = {};
    };
};