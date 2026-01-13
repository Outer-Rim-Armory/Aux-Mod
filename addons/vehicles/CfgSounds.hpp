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
    class CLASS(Heal_Loop) {
        name = "CCP Heal Loop";
        sound[] = {QPATHTOF(data\audio\Heal_Loop.wss), 5, 1, 50};
        titles[] = {};
    };
    class CLASS(Repair_Loop){
        name = "Repair Loop";
        sound[] = {QPATHTOF(data\audio\Repair_Loop.wss), 5, 1, 50};
        titles[] = {};
    };
};

class CfgSFX {
    class CLASS(SFX_Repair_Loop) {
        sound[] = {QPATHTOF(data\audio\Repair_Loop.wss), 5, 1, 50};
    };
};
