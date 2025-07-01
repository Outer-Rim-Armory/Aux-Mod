class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_Valken38xShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(valken38x\data\audio\Fire1.wss), 1},
            {QPATHTOF(valken38x\data\audio\Fire2.wss), 1},
            {QPATHTOF(valken38x\data\audio\Fire3.wss), 1},
            {QPATHTOF(valken38x\data\audio\Fire4.wss), 1}
        };
    };
};
