class CfgPatches
{
    class BNA_KC_Vehicles_Gammoth
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Vehicles",
                // Core config
            "BNA_KC_Gear_Infantry",
                // Unit
            "A3_Soft_F_EPC_Truck_03"
                // Typhoon trucks
        };
        units[] =
        {
            "BNA_KC_Gammoth_Base",
            "BNA_KC_Gammoth_Transport",
            "BNA_KC_Gammoth_Covered",
            "BNA_KC_Gammoth_Ammo",
            "BNA_KC_Gammoth_Medical",
            "BNA_KC_Gammoth_Repair",
            "BNA_KC_Gammoth_Refuel"
        };
        weapons[] = {};
    };
};