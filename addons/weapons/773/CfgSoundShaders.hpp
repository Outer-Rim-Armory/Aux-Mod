class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_773Shot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(773\data\audio\Fire1.wss), 1},
            {QPATHTOF(773\data\audio\Fire2.wss), 1},
            {QPATHTOF(773\data\audio\Fire3.wss), 1},
            {QPATHTOF(773\data\audio\Fire4.wss), 1}
        };
    };
};
