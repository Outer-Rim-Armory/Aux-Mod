class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC15SAShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(dc15sa\data\audio\Fire1.wss), 1},
            {QPATHTOF(dc15sa\data\audio\Fire2.wss), 1},
            {QPATHTOF(dc15sa\data\audio\Fire3.wss), 1},
            {QPATHTOF(dc15sa\data\audio\Fire4.wss), 1}
        };
    };
};
