class CfgSoundSets {
    class CLASS(SoundSet_WeaponShot_Base);
    class CLASS(SoundSet_Valken38xShot): CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_Valken38xShot)};
    };
};