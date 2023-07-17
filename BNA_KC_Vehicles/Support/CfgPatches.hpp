class CfgPatches
{
    class BNA_KC_Vehicles_Support
    {
        addonRootClass= "BNA_KC_Vehicles";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Gear",
                // Unit
            "A3_Soft_F_EPC_Truck_03"
                // Typhoon trucks
        };
        units[] =
        {
            "BNA_KC_Gammoth_Transport",
            "BNA_KC_Gammoth_Covered"
        };
        weapons[] = {};
    };
};