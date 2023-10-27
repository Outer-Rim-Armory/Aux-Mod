class CfgPatches
{
    class BNA_KC_Vehicles_Conga
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core Config
            "OPTRE_Vehicles_Bison",
                // Bison
            "BNA_KC_Vehicles_Weapons",
                // Weapons
            "BNA_KC_Vehicles_Sounds"
                // Sounds
        };
        units[] =
        {
            "BNA_KC_Conga_IFV_Base",
            "BNA_KC_Conga_MGS_Base"
        };
        weapons[] = {};
    };
};