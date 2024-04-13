class CfgSoundSets {
    class CLASS(SoundSet_WeaponShot_Base);
    class CLASS(SoundSet_DC17Shot): CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_DC17Shot)};
    };
};