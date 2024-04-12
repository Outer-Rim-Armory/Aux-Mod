class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_HI12Shot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(hi12\data\audio\Fire1.wss), 1}
        };
    };
};