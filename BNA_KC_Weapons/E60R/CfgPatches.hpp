class CfgPatches
{
    class BNA_KC_Weapons_E60R
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Sound Set/Shader
            "JLTS_weapons_E60R",
                // E-60R
            "LS_weapon_core",
                // Firing sound
            "A3_Weapons_F"
                // Base Missile Magazines
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_E60R_Base",
            "BNA_KC_E60R",
            "BNA_KC_E60R_Fried"
        };
        magazines[] = {};
        ammo[] = {};
    };
};