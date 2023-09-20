class CfgPatches
{
    class BNA_KC_Rancorbuh
    {
        author = "SweMonkey";
        requiredVersion = 1.6;
        requiredAddons[] =
        {
            "WBK_ZombieCreatures",
                // Smasher unit and script
            "A3_Characters_F",
                // Base uniform
            "A3_Weapons_F_Items"
                // Uniform item info
        };
        units[] =
        {
            "BNA_KC_Smasher_Rancor"
        };
        weapons[]=
        {
            "BNA_KC_Uniform_Rancor"
        };

        skipWhenMissingDependencies = 1;
    };
};