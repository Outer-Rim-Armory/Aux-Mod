class CfgPatches
{
    class BNA_KC_Vehicles_Blitz
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Armor_F_EPC_MBT_01"
                // Slammer
        };
        units[] =
        {
            "BNA_KC_Blitz",
            "BNA_KC_MBT_Slammer"
        };
        weapons[] = {};
    };
};