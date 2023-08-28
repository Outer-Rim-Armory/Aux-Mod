class CfgPatches
{
    class BNA_KC_Weapons_BTX42
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3AS_BX42",
                // BTX-42 model, textures, etc.
            "WBK_PhoenixTreal_FlamethrowerMOD",
                // Flamethrower System
            "M2",
                // Base Flamethrower / Ammo
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_BTX42_Base",
            "BNA_KC_BTX42",
            "BNA_KC_BTX45_Heavy"
        };
        magazines[] =
        {
            "BNA_KC_Mag_300Rnd_BTX42",
            "BNA_KC_Mag_150Rnd_BTX42"
        };
        ammo[] = {};

        skipWhenMissingDependencies = 1;
    };
};