class CfgSoundShaders {
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_WestarCarbine_Shot): CLASS(SoundShader_WeaponShot_Base) {
        samples[] = {
            {"LF_Weapon_Unit\main\sounds\Westar_1.ogg",1,1,1800},
            {"LF_Weapon_Unit\main\sounds\Westar_2.ogg",1,1,1800}
        };
    };
};
