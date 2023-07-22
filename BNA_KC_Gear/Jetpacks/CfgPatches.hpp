class CfgPatches
{
    class BNA_KC_Gear_Jetpacks
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_Gear_Infantry",
                // Base Backpack
            "JLTS_jumppacks"
                // JLTS models/textures
        };
        units[] =
        {
            "BNA_KC_Jetpack_JT12"
        };
        weapons[] = {};
    };
};