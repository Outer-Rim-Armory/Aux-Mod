class O_APC_Wheeled_02_rcws_v2_F;
class BNA_KC_Hydra: O_APC_Wheeled_02_rcws_v2_F
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
