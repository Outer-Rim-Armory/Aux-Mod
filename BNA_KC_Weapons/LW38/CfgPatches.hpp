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
            "BNA_KC_Weapons_DC15A",
                // DC-15A
            "A3_Anims_F_Config_Sdr",
                // Reload action
            "LF_Weapon_Unit_Westar45"
                // Reload sound
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_LW38_Base",
            "BNA_KC_LW38",
            "BNA_KC_LW38_Fried",
            "BNA_KC_LW38_Green",
            "BNA_KC_LW38_Green_Fried",
            "BNA_KC_LW38_Green_Scoped"
        };
        magazines[] =
        {
            "BNA_KC_Mag_LW38"
        };
        ammo[] = {};
    };
};