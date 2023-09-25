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
            "A3_Weapons_F",
                // Base UGL flare
            "A3_Weapons_F_Enoch"
                // DP-23 Ammo
        };
        units[] = {};
        weapons[] = {};
        magazines[] =
        {
            "Aux12thFleet_Mag_StunShort",
            "Aux12thFleet_Mag_StunLong",

            "BNA_KC_UGL_FlareBlue",
            "BNA_KC_3Rnd_UGL_FlareBlue"
        };
        ammo[] =
        {
            // TODO: Add base bullets
            "Aux_12thFleet_Ammo_Rifle_Blue",
            "Aux_12thFleet_Ammo_Rifle_Red",
            "Aux_12thFleet_Ammo_AutoRifle_Blue",
            "Aux_12thFleet_Ammo_AutoRifle_Red",
            "Aux_12thFleet_Ammo_Carbine_Blue",
            "Aux_12thFleet_Ammo_Carbine_Red",
            "Aux_12thFleet_Ammo_Sniper_Blue",
            "Aux_12thFleet_Ammo_Pistol_Blue",
            "Aux_12thFleet_Ammo_Scatter_Blue",
            "Aux_12thFleet_Ammo_Scatter_HP_Blue",
            "Aux_12thFleet_Ammo_Stun",

            "BNA_KC_Flare_Blue"
        };
    };
};