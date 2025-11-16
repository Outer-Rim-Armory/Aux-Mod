class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_B2Blaster_Shot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {QPATHTOF(b2Blaster\data\audio\Fire1.wss), 1, 1}
        };
    };

    class CLASS(SoundShader_B2Rocket_Shot): CLASS(SoundShader_WeaponShot_Base) {
        range = 2200;
        samples[] = {
            {"A3\Sounds_F\weapons\Launcher\rocket_launcher_5",1,1}
        };
    };

    class CLASS(SoundShader_B2GL_Shot): CLASS(SoundShader_WeaponShot_Base) {
        range = 2000;
        samples[] = {
            {"\MRC\JLTS\weapons\E5\sounds\E5_fire.wss", 1, 1}
        };
    };
};
