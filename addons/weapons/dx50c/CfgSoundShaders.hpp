class CfgSoundShaders {
    class CLASS(SoundShader_RocketShot);
    class CLASS(SoundShader_DX50CShot): CLASS(SoundShader_RocketShot) {
        samples[] = {
            {QPATHTOF(valken38x\data\audio\Fire1.wss), 1},
            {QPATHTOF(valken38x\data\audio\Fire2.wss), 1},
            {QPATHTOF(valken38x\data\audio\Fire3.wss), 1},
            {QPATHTOF(valken38x\data\audio\Fire4.wss), 1}
        };
    };
};