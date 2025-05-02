class 3AS_Saber_M1Recon;
class BNA_KC_TX130_M1_Recon: 3AS_Saber_M1Recon
{
    class EventHandlers
    {
        init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeployVehShield"", false,true];";
    };
    class UserActions
    {
        class DeployVehShield
        {
            displayName = "Deploy Assault Shield";
            displayNameDefault = "<img size='2' image='a3\missions_f_beta\data\img\portraitmptypedefense_ca.paa'/>";
            priority = 69;
            radius = 10;
            position = "camera";
            showWindow = 1;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeployVehShield"" == false && fuel this != 0;";
            statement = "call BNA_KC_vehicles_fnc_itemCheck;";
            // statement = "[this] call BNA_KC_vehicles_fnc_deployVehShield;";
            // statement = "this setVariable [""BNA_KC_vehicles_DeployVehShield"",true,true]; playSound3D [""BNA_KC_Vehicle_Skills\data\audio\Deploy.wss"", this];this call BNA_KC_vehicles_fnc_deployVehShield;";
        };
        class UnDeployVehShield
        {
            displayName = "Undeploy Assault Shield";
            displayNameDefault = "";
            priority = 69;
            radius = 10;
            position = "camera";
            showWindow = 0;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeployVehShield"" == true;";
            statement = "[this,'undeploy'] call BNA_KC_vehicles_fnc_deployVehShield;";
            // statement = "this setVariable [""BNA_KC_vehicles_DeployVehShield"",false,true]; playSound3D [""BNA_KC_Vehicle_Skills\data\audio\Undeploy.wss"", this];";
        };
    };
};
