class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC20YShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(SUBCOMPONENT\data\audio\Fire1.wss), 1, 1}
        };
    };
};
