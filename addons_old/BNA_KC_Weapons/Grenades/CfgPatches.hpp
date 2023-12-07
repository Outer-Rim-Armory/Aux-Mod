class CfgPatches
{
    class BNA_KC_Weapons_Grenades
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Weapons_F",
                // Throw
                // Base grenade
                // Smoke grenade
            "ls_weapons",
                // EMP model
            "ls_weapons",
                // EMP "fuse" sound
            "JLTS_weapons_Core",
                // EMP explosion effect
            "3AS_Equipment"
                // Bacta model
        };
        units[] = {};
        weapons[] = {};
        magazines[] =
        {
            "BNA_KC_Grenade_DroidPopper",
            "BNA_KC_Grenade_BactaBomb"
        };
        ammo[] =
        {
            "BNA_KC_Grenade_DroidPopper_Ammo",
            "BNA_KC_Grenade_BactaBomb_Ammo",
        };
    };
};