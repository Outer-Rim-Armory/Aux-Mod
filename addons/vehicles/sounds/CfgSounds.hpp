class CfgSounds {
    sounds[] = {};

    class CLASS(Sound_Base) {
        titles[] = {0, ""};
    };
    class CLASS(Sound_LAAT_DoorsOpen): CLASS(Sound_Base) {
        name = "LAAT Doors Opened";
        sound[] = {"\3AS\3as_Laat\sounds\LaatdoorOPEN.ogg", 1, 0.8, 100};
    };
    class CLASS(Sound_LAAT_DoorsClose): CLASS(Sound_Base) {
        name = "LAAT Doors Closed";
        sound[] = {"\3AS\3as_Laat\sounds\LaatdoorOPEN.ogg", 1, 1, 100};
    };
    class CLASS(Sound_LAAT_Ramp): CLASS(Sound_Base) {
        name = "LAAT Ramp Opened/Closed";
        sound[] = {"\ls_sounds\vehicles\laatSeries\LAAT_ramp.wss", 5, 1, 100};
    };
    class CLASS(Sound_ImpulseOn): CLASS(Sound_Base) {
        name = "LAAT Impulse On";
        sound[] = {QPATHTOF(sounds\data\audio\impulse\ImpulseOn.wss), 5, 1, 800};
    };
    class CLASS(Sound_ImpulseOff): CLASS(Sound_Base) {
        name = "LAAT Impulse Off";
        sound[] = {QPATHTOF(sounds\data\audio\impulse\ImpulseOff.wss), 5, 1, 800};
    };
    class CLASS(Sound_ARC170_SFoils_Toggle): CLASS(Sound_Base) {
        name = "S-Foils Opened/Closed";
        sound[] = {QPATHTOF(sounds\data\audio\arc170\SFoils_Toggle.wss), 5, 1, 100};
    };
    class CLASS(Sound_Horn_Wyvern): CLASS(Sound_Base) {
        name = "Wyvern Horn";
        sound[] = {QPATHTOF(sounds\data\audio\laati\WyvernHorn.wss), 5, 1, 1000};
    };
    class CLASS(Sound_Horn_Dogo): CLASS(Sound_Base) {
        name = "Dogo Horn";
        sound[] = {QPATHTOF(sounds\data\audio\laati\DogoHorn.wss), 5, 1, 1000};
    };
    class CLASS(Sound_Horn_Harry): CLASS(Sound_Base) {
        name = "Harry Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Harry_Horn.wss), 30, 1, 100};
    };
    class CLASS(Sound_Horn_Carnage): CLASS(Sound_Base) {
        name = "Carnage Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Carnage_Horn.wss), 30, 1, 100};
    };
    class CLASS(Sound_Horn_Goldie): CLASS(Sound_Base) {
        name = "Goldie Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Goldie_Horn.ogg), 30, 1, 100};
    };
    class CLASS(Sound_Horn_Cough): CLASS(Sound_Base) {
        name = "Cough Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Cough_Horn.wss), 30, 1, 100};
    };
    class CLASS(Sound_Horn_Jester): CLASS(Sound_Base) {
        name = "Jester Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\Jester_Horn.ogg), 30, 1, 100};
    };
    class CLASS(Sound_Horn_RDF): CLASS(Sound_Base) {
        name = "RDF Horn";
        sound[] = {QPATHTOF(sounds\data\audio\hornet\RDF_Horn.ogg), 30, 1, 100};
    };
    class CLASS(Sound_Horn_Dexus): CLASS(Sound_Base) {
        name = "Dexus Howl";
        sound[] = {QPATHTOF(sounds\data\audio\atte\Dexus_Howl.ogg), 50, 1, 4800};
    };
    class CLASS(Sound_Horn_Reekolith): CLASS(Sound_Base) {
        name = "Reekolith Roar";
        sound[] = {QPATHTOF(sounds\data\audio\atte\Reekolith_Roar.ogg), 50, 1, 4800};
    };
};
