class CfgSoundSets {
    class CLASS(SoundSet_WeaponShot_Base);
    class CLASS(SoundSet_E60RShot): CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_E60RShot)};
    };
};