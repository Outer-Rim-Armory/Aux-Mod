class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC15LShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(dc15l\data\audio\Fire1.wss), 1}
        };
    };
};