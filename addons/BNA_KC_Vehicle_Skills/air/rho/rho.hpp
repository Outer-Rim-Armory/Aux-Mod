class 3AS_Rho_REP_F;
class BNA_KC_Rho: 3AS_Rho_REP_F
{
    class EventHandlers
    {
        init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeployCitadelShield"", false,true];";
    };
    class UserActions
    {
        class DeployCitadel
        {
            displayName = "Deploy Citadel Shield";
            displayNameDefault = "<img size='2' image='\a3\missions_f_beta\data\img\iconmptypedefense_ca.paa'/>";
            priority = 69;
            radius = 15;
            position = "camera";
            showWindow = 1;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeployCitadelShield"" == false && fuel this != 0 && isEngineOn this == false";
            statement = "call BNA_KC_vehicles_fnc_itemCheck;";
        };
        class UnDeployCitadel
        {
            displayName = "Undeploy Citadel Shield";
            displayNameDefault = "";
            priority = 69;
            radius = 15;
            position = "camera";
            showWindow = 0;
            hideOnUse = 1;
            onlyForPlayer = 0;
            shortcut = "";
            condition = "this getVariable ""BNA_KC_vehicles_DeployCitadelShield"" == true;";
            statement = "[this,'undeploy'] call BNA_KC_vehicles_fnc_deployCitadelShield;";
        };
    };
};
class BNA_KC_Rho_medical: BNA_KC_Rho
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