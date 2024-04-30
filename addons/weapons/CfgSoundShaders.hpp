class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base) {
        range = 1800;
        volume = 1;
        samples[] = {};
    };

    class CLASS(SoundShader_RocketShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(data\audio\rocketFire\Fire1.wss), 1, 1},
            {QPATHTOF(data\audio\rocketFire\Fire2.wss), 1, 1},
            {QPATHTOF(data\audio\rocketFire\Fire3.wss), 1, 1}
        };
    };

    class CLASS(SoundShader_flamethrowerStart): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(data\audio\flamethrower\Start.wss), 1, 1}
        };
    };
};