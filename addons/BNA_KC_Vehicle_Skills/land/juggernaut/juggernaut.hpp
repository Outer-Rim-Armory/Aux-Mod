class 3AS_Jug;
class BNA_KC_Juggernaut: 3AS_Jug
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
            condition = "this getVariable ""BNA_KC_vehicles_DeployCitadelShield"" == false && fuel this != 0;";
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