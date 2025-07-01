class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC15AShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(dc15a\data\audio\Fire1.wss), 1},
            {QPATHTOF(dc15a\data\audio\Fire2.wss), 1},
            {QPATHTOF(dc15a\data\audio\Fire3.wss), 1},
            {QPATHTOF(dc15a\data\audio\Fire4.wss), 1}
        };
    };
};
