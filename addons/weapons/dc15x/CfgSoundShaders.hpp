class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC15XShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {"\MRC\JLTS\weapons\DC15X\sounds\dc15x_fire.wss", 1}
        };
    };
    class CLASS(SoundShader_DC15XHShot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {"3AS\3AS_Main\Sounds\DLT19X\DLT19X_Shot_1.ogg",1,"3AS\3AS_Main\Sounds\DLT19X\DLT19X_Shot_2.ogg",1,"3AS\3AS_Main\Sounds\DLT19X\DLT19X_Shot_3.ogg",1,"3AS\3AS_Main\Sounds\DLT19X\DLT19X_Shot_4.ogg",1}
        };
    };
};
