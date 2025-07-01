class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_Valken38lShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(valken38l\data\audio\Fire1.wss), 1},
            {QPATHTOF(valken38l\data\audio\Fire2.wss), 1},
            {QPATHTOF(valken38l\data\audio\Fire3.wss), 1},
            {QPATHTOF(valken38l\data\audio\Fire4.wss), 1}
        };
    };
};
