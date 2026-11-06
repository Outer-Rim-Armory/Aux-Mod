class CfgSounds {
    class CLASS(Sound_LAAT_DoorsOpen) {
        name = "LAAT Doors Opened";
        sound[] = {"\3AS\3as_Laat\sounds\LaatdoorOPEN.ogg", 1, 0.8, 100};
        titles[] = {0, ""};
    };
    class CLASS(Sound_LAAT_DoorsClose): CLASS(Sound_LAAT_DoorsOpen) {
        name = "LAAT Doors Closed";
        sound[] = {"\3AS\3as_Laat\sounds\LaatdoorOPEN.ogg", 1, 1, 100};
    };

    class CLASS(Sound_LAAT_Ramp): CLASS(Sound_LAAT_DoorsOpen) {
        name = "LAAT Ramp Opened/Closed";
        sound[] = {"\ls_sounds\vehicles\laatSeries\LAAT_ramp.wss", 5, 1, 100};
    };

    class CLASS(Sound_ARC170_SFoils_Toggle): CLASS(Sound_LAAT_DoorsOpen) {
        name = "S-Foils Opened/Closed";
        sound[] = {QPATHTOF(sounds\data\audio\arc170\SFoils_Toggle.wss), 5, 1, 100};
    };

    class CLASS(Sound_ImpulseOn): CLASS(Sound_LAAT_DoorsOpen) {
        name = "LAAT Impulse On";
        sound[] = {QPATHTOF(sounds\data\audio\impulse\ImpulseOn.wss), 5, 1, 800};
    };
    class CLASS(Sound_ImpulseOff): CLASS(Sound_LAAT_DoorsOpen) {
        name = "LAAT Impulse Off";
        sound[] = {QPATHTOF(sounds\data\audio\impulse\ImpulseOff.wss), 5, 1, 800};
    };
    class CLASS(Sound_Horn_Wyvern): CLASS(Sound_LAAT_DoorsOpen) {
        name = "Wyvern Horn";
        sound[] = {QPATHTOF(sounds\data\audio\laati\WyvernHorn.wss), 5, 1, 1000};
    };
        class CLASS(Sound_Horn_Dogo): CLASS(Sound_Horn_Wyvern) {
        name = "Dogo Horn";
        sound[] = {QPATHTOF(sounds\data\audio\laati\DogoHorn.wss), 5, 1, 1000};
    };
    class CLASS(Sound_Horn_Harry): CLASS(Sound_Horn_Wyvern) {
        name = "Harry Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Harry_Horn.wss), 30, 1, 100};
    };
    class CLASS(Sound_Horn_Carnage): CLASS(Sound_Horn_Wyvern) {
        name = "Carnage Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Carnage_Horn.wss), 30, 1, 100};
    };

    class CLASS(Sound_Horn_Goldie): CLASS(Sound_Horn_Wyvern) {
        name = "Goldie Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Goldie_Horn.ogg), 30, 1, 100};
    };
    class CLASS(Sound_Horn_Cough): CLASS(Sound_Horn_Wyvern) {
        name = "Cough Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Cough_Horn.wss), 30, 1, 100};
    };
    class CLASS(Sound_Horn_Jester): CLASS(Sound_Horn_Wyvern) {
        name = "Jester Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Jester_Horn.ogg), 30, 1, 100};
    };
    class CLASS(Sound_Horn_RDF): CLASS(Sound_Horn_Wyvern) {
        name = "RDF Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\RDF_Horn.ogg), 30, 1, 100};
    };
    class CLASS(Sound_Horn_Dexus): CLASS(Sound_Horn_Wyvern) {
        name = "Dexus Howl";
        sound[] = {QPATHTOF(sounds\data\audio\atte\Dexus_Howl.ogg), 50, 1, 4800};
    };
    class CLASS(Sound_Horn_Reekolith): CLASS(Sound_Horn_Wyvern) {
        name = "Reekolith Roar";
        sound[] = {QPATHTOF(sounds\data\audio\atte\Reekolith_Roar.ogg), 50, 1, 4800};
    };
};
