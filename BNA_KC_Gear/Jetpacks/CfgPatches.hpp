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
                // Base Backpacks
            "JLTS_jumppacks",
                // JLTS models/textures
            "A3_Data_F_ParticleEffects"
                // Particle Effects
        };
        units[] =
        {
            "BNA_KC_Jetpack_JT12",
            "BNA_KC_Jetpack_JT12_LR",
            "BNA_KC_Jetpack_CDV19",
            "BNA_KC_Jetpack_CDV21"
        };
        weapons[] = {};
    };
};