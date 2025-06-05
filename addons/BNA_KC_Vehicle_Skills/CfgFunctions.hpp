class CfgFunctions
{
    class BNA_KC_vehicles
    {
        tag = "BNA_KC_vehicles";
        
        class VehicleSkills
        {
            file = "BNA_KC_Vehicle_Skills\functions\skills";

            class itemCheck
            {
                description = "Item Check";
            };
            class deployCCP
            {
                description = "Deploy CCP";
            };
            class deployVehShield
            {
                description = "Deploy Assault Vehicle Shield";
            };
            class deploySquadShield
            {
                description = "Deploy Squad Shield";
            };
            class deployModuleRepair
            {
                description = "Deploy Vehicle Repair";
            };
            class deployCitadelShield
            {
                description = "Deploy Citadel Shield";
            };
        };
        class DataPadGUI
        {
            file = "BNA_KC_Vehicle_Skills\functions\gui";

            class postInit
            {
               postInit = 1;
            };
            class guiDataPad
            {
                description = "Data Pad Map Display and Eventhandlers";
            };
            class accessDatapad
            {
                description = "Access Data Pad";
            };
        };
    };
};