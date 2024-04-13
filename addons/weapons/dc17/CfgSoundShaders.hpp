class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC17Shot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(dc17\data\audio\Fire1.wss), 1}
        };
    };
};