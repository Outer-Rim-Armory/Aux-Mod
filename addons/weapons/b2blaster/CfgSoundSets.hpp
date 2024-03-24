class CfgSoundSets {
    class CLASS(SoundSet_WeaponShot_Base);
    class CLASS(SoundSet_B2Blaster_Shot): CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_B2Blaster_Shot)};
    };
    class CLASS(SoundSet_B2Rocket_Shot): CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_B2Rocket_Shot)};
    };
    class CLASS(SoundSet_B2GL_Shot): CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_B2GL_Shot)};
    };
};