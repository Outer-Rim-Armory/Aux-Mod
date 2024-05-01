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
};