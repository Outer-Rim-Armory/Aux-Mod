class CfgPatches
{
    class BNA_KC_Weapons_DC15S
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "JLTS_weapons_DC15S",
                // DC-15A
            "JLTS_weapons_DC17SA",
                // Flashlight
            "Aux501_Patch_Accessories"
                // 501st Scopes/Sights
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_DC15S_Base",
            "BNA_KC_DC15S",
            "BNA_KC_DC15S_Fried",
            "BNA_KC_DC15S_RiotShield",
            "BNA_KC_DC15S_RiotShield_Fried"
        };
        magazines[] =
        {
            "12thFleet_Mag_DC15S"
        };
        ammo[] = {};
    };
};