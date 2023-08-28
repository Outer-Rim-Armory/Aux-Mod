class CfgPatches
{
    class BNA_KC_Weapons_HI12
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "LF_Weapon_Unit_hi12"
                // HI-12 / magazine
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