class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC17MShot_Single): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {"\SWLW_clones_spec\sounds\DC17M_sniper_fire.wss", 1}
        };
    };

    class CLASS(SoundShader_DC17MShot_FullAuto): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(dc17m\data\audio\fullAuto\Fire1.wss), 1},
            {QPATHTOF(dc17m\data\audio\fullAuto\Fire2.wss), 1},
            {QPATHTOF(dc17m\data\audio\fullAuto\Fire3.wss), 1},
            {QPATHTOF(dc17m\data\audio\fullAuto\Fire4.wss), 1}
        };
    };
};