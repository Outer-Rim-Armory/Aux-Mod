class CfgSounds {
    #ifdef APRIL_FOOL
    class CLASS(Sound_LAAT_DoorsOpen);
    class CLASS(Sound_Horn_Wyvern): CLASS(Sound_LAAT_DoorsOpen) {
        sound[] = {QPATHTOF(data\audio\WyvernHorn.wss), 5, 1, 1000};
    };
    #endif
};