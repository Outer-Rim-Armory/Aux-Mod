class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_E5SShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {"\MRC\JLTS\weapons\E5\sounds\E5_fire.wss", 1, 0.9}
        };
    };
};
