class 3AS_PX10_F;
class BNA_KC_Hermitaur_Class_I: 3AS_PX10_F
{
    class EventHandlers
    {
        init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeploySquadShield"", false,true];";
    };
    class UserActions
    {
        class DeploySquadShield
        {
            displayName = "Deploy Squad Shield";
            displayNameDefault = "<img size='2' image='\a3\missions_f_beta\data\img\iconmptypedefense_ca.paa'/>";
            priority = 69;
            radius = 10;
            position = "camera";
            showWindow = 1;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeploySquadShield"" == false && fuel this != 0;";
            // statement = "[this] call BNA_KC_vehicles_fnc_deploySquadShield;";
            statement = "call BNA_KC_vehicles_fnc_itemCheck;";
        };
        class UnDeploySquadShield
        {
            displayName = "Undeploy Squad Shield";
            displayNameDefault = "";
            priority = 69;
            radius = 10;
            position = "camera";
            showWindow = 0;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeploySquadShield"" == true;";
            statement = "[this,'undeploy'] call BNA_KC_vehicles_fnc_deploySquadShield;";
        };
    };
};
class BNA_KC_Hermitaur_Class_E: BNA_KC_Hermitaur_Class_I
{
    class EventHandlers
    {
        init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeployVehShield"", false,true];(_this # 0) setVariable [""BNA_KC_vehicles_DeployModule"", false,true];";
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
            // statement = "[this] call BNA_KC_vehicles_fnc_deployVehShield;";
            statement = "call BNA_KC_vehicles_fnc_itemCheck;";
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
        };
        class DeployModule
        {
            displayName = "Deploy Repair Module";
            displayNameDefault = "<img size='2' image='\a3\ui_f_oldman\data\igui\cfg\holdactions\repair_ca.paa'/>";
            priority = 69;
            radius = 10;
            position = "camera";
            showWindow = 1;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeployModule"" == false && fuel this != 0;";
            // statement = "[this] call BNA_KC_vehicles_fnc_deployModuleRepair;";
            statement = "call BNA_KC_vehicles_fnc_itemCheck;";
        };
        class UnDeployModule
        {
            displayName = "Undeploy Repair Module";
            displayNameDefault = "";
            priority = 69;
            radius = 10;
            position = "camera";
            showWindow = 0;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeployModule"" == true;";
            statement = "[this,'undeploy'] call BNA_KC_vehicles_fnc_deployModuleRepair;";
        };
    };
};
class BNA_KC_Hermitaur_Class_M: BNA_KC_Hermitaur_Class_I
{
    class EventHandlers
    {
        init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeployCCP"", false,true];";
    };
    class UserActions
    {
        class DeployCCP
        {
            displayName = "Deploy CCP Option";
            displayNameDefault = "<img size='2' image='\a3\characters_f_orange\uniforms\data\c_paramedic_01_logo_co.paa'/>";
            priority = 69;
            radius = 10;
            position = "camera";
            showWindow = 1;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeployCCP"" == false && fuel this != 0;";
            // statement = "this setVariable [""BNA_KC_vehicles_DeployCCP"",true,true]; playSound3D [""BNA_KC_Vehicle_Skills\data\audio\Deploy.wss"", this]; this call BNA_KC_vehicles_fnc_deployCCP;";
            // statement = "[this] call BNA_KC_vehicles_fnc_deployCCP;";
            statement = "call BNA_KC_vehicles_fnc_itemCheck;";
        };
        class UnDeployCCP
        {
            displayName = "Undeploy CCP";
            displayNameDefault = "";
            priority = 69;
            radius = 10;
            position = "camera";
            showWindow = 0;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeployCCP"" == true;";
            // statement = "this setVariable [""BNA_KC_vehicles_DeployCCP"",false,true]; playSound3D [""BNA_KC_Vehicle_Skills\data\audio\Undeploy.wss"", this];";
            statement = "[this,'undeploy'] call BNA_KC_vehicles_fnc_deployCCP;";
        };
    };
};