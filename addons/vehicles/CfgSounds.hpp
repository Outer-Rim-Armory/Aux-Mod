class CfgSounds {
    class CLASS(Deploy) {
        name = "Deploy";
        sound[] = {QPATHTOF(data\audio\Deploy.wss), 5, 1, 50};
        titles[] = {"Deployed"};
    };
    class CLASS(Undeploy) {
        name = "Undeploy";
        sound[] = {QPATHTOF(data\audio\Undeploy.wss), 5, 1, 50};
        titles[] = {"Undeployed"};
    };
    class CLASS(CCP_Heal_Loop) {
        name = "CCP Heal Loop";
        sound[] = {QPATHTOF(data\audio\Heal_Loop.wss), 5, 1, 50};
        titles[] = {};
    };
};