class CfgPatches
{
    class BNA_KC_jetpacks
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
            "BNA_KC_armor",
        };
        units[] =
        {
            "BNA_KC_Jetpack_JT12",
            "BNA_KC_Jetpack_JT12_LR",
            "BNA_KC_Jetpack_CDV19",
            "BNA_KC_Jetpack_CDV19_LR",
            "BNA_KC_Jetpack_CDV21",
            "BNA_KC_Jetpack_CDV21_LR",

            "BNA_KC_Jetpack_Droid",
            "BNA_KC_Jetpack_Droid_Rocket"
        };
        weapons[] =
        {
            "BNA_KC_Jetpack_FuelCan_Empty",
            "BNA_KC_Jetpack_FuelCan_Mag"
        };
    };
};