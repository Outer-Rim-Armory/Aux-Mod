class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_LW38Shot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(lw38\data\audio\Fire1.wss), 1, 1}
        };
    };
};
