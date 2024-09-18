class CfgSoundShaders {
    class CLASS(soundShader_weaponShot_base);
    class CLASS(soundShader_Z8_shot): CLASS(soundShader_weaponShot_base) {
        samples[] = {
            {"\3AS\3AS_Main\Sounds\Z6\Z61.ogg", 1, 1}
        };
        range = 2000;
    };
};