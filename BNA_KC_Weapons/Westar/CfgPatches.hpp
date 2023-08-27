class CfgPatches
{
    class BNA_KC_Weapons_Westar
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3AS_Weapons_WestarM5",
                // Westar
            "SWLW_clones",
                // Weapon picture
            "Aux501_Patch_Accessories",
                // 501st Scopes/Sights
            "A3_Weapons_F_Acc"
                // Flashlight/laser pointer
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_WestarM5_Base",
            "BNA_KC_WestarM5",
            "BNA_KC_WestarM5_UGL",
            "BNA_KC_WestarM5_Scope"
        };
        magazines[] =
        {
            "12thFleet_Mag_WestarM5"
        };
        ammo[] = {};
    };
};