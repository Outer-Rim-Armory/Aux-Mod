class CfgPatches
{
    class BNA_KC_Weapons_Core
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "JLTS_weapons_Core",
                // Base JLTS bullets
            "3AS_Weapons",
                // Westar bullet/mag
                // TODO: Rework westar mag/bullet
            "A3_Weapons_F"
                // Base UGL flare
        };
        units[] = {};
        weapons[] = {};
        magazines[] =
        {
            "12thFleet_Mag_StunShort",
            "12thFleet_Mag_StunLong",

            "BNA_KC_UGL_FlareBlue",
            "BNA_KC_3Rnd_UGL_FlareBlue"
        };
        ammo[] =
        {
            // TODO: Add base bullets
            "Aux_12thFleet_Ammo_Stun",

            "BNA_KC_Flare_Blue"
        };
    };
};