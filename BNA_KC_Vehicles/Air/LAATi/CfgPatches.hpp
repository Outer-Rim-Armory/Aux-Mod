class CfgPatches
{
    class BNA_KC_Vehicles_LAATi
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "3AS_LAAT",
                // LAAT/i
            "ls_vehicles_weapons",
                // Weapons
                // Flares
            "A3_Weapons_F",
                // Hydras
                // Smoke Launcher
                // Laser Designator
            "BNA_KC_Gear_Aviation",
                // Pilot unit
            "BNA_KC_Vehicles_Sounds",
                // Impulse sounds
            "ls_functions"
                // Impulse script
        };
        units[] =
        {
            "BNA_KC_LAATi_Base",
            "BNA_KC_LAATi_MK1",
            "BNA_KC_LAATi_MK1_Lamps",
            "BNA_KC_LAATi_MK2",
            "BNA_KC_LAATi_MK2_Lamps"
        };
        weapons[] = {};
    };
};