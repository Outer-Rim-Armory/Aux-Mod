class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC17_shot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(dc17\data\audio\Fire1.wss), 1}
        };
    };

    class CLASS(SoundShader_dualDC17_shot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(dc17\data\audio\dualFire1.wss), 1}
        };
    };
};