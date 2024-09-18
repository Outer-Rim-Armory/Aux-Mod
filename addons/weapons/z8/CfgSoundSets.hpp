class CfgSoundSets {
    class CLASS(soundSet_weaponShot_Base);
    class CLASS(soundSet_Z8_shot): CLASS(soundSet_weaponShot_Base) {
        soundShaders[] = {QCLASS(soundShader_Z8_shot)};
    };
};