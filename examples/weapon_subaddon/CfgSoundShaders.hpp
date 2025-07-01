class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_WeaponNameShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(subAddonName\data\audio\Fire1.wss), 1, 1},
            {QPATHTOF(subAddonName\data\audio\Fire2.wss), 1, 1},
            {QPATHTOF(subAddonName\data\audio\Fire3.wss), 1, 1},
            {QPATHTOF(subAddonName\data\audio\Fire4.wss), 1, 1}
        };
    };
};
