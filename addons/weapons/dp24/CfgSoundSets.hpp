class CfgSoundSets {
    class CLASS(SoundSet_WeaponShot_Base);
    class CLASS(SoundSet_DP24Shot): CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_DP24Shot)};
    };
};
