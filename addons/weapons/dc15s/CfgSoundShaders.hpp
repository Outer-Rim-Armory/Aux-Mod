class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC15SShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(dc15s\data\audio\Fire1.wss), 1},
            {QPATHTOF(dc15s\data\audio\Fire2.wss), 1},
            {QPATHTOF(dc15s\data\audio\Fire3.wss), 1},
            {QPATHTOF(dc15s\data\audio\Fire4.wss), 1}
        };
    };
};