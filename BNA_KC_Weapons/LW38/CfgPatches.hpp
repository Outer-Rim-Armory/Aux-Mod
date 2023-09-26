class CfgPatches
{
    class BNA_KC_Weapons_LW38
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "LF_Weapon_Unit_lw38m",
                // LW-38 model / magazine
                // Scopes
            "BNA_KC_Weapons_DC15A"
                // DC-15A
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_LW38_Base",
            "BNA_KC_LW38",
            "BNA_KC_LW38_Fried",
        };
        magazines[] =
        {
            "BNA_KC_Mag_LW38"
        };
        ammo[] = {};
    };
};