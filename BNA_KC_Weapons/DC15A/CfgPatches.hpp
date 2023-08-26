class CfgPatches
{
    class BNA_KC_Weapons_DC15A
    {
        author = "SweMonkey and DartRuffian";
		addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Weapons_F",
                // UGL_F
            "JLTS_weapons_DC15A"
                // DC-15A
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_DC15A_Base",
            "BNA_KC_DC15A",
            "BNA_KC_DC15A_UGL"
        };
        magazines[] =
        {
            // "12thFleet_Mag_DC15A"
        };
        ammo[] = {};
    };
};