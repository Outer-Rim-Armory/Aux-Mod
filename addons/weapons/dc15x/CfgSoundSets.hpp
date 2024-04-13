class CfgSoundSets {
    class CLASS(SoundSet_WeaponShot_Base);
    class CLASS(SoundSet_DC15XShot): CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_DC15XShot)};
    };
};