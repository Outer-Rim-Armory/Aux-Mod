class CfgUnitInsignia {
    class CLASS(Insignia_KaminoCloner) {
        author = AUTHOR;
        displayName = "[KC] Kaminoan Cloner";
        texture = QPATHTOF(data\insignias\KaminoCloner_ca.paa);
    };

    class CLASS(Insignia_KaminoTrainer): CLASS(Insignia_KaminoCloner) {
        displayName = "[KC] Kaminoan Trainer";
        texture = QPATHTOF(data\insignias\KaminoTrainer_ca.paa);
    };

    class CLASS(Insignia_CloneForce99): CLASS(Insignia_KaminoCloner) {
        displayName = "[KC] Clone Force 99";
        texture = QPATHTOF(data\insignias\CF99_ca.paa);
    };
};