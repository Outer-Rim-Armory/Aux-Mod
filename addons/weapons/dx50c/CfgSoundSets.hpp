class CfgSoundSets {
    class CLASS(SoundSet_RocketShot);
    class CLASS(SoundSet_DX50CShot): CLASS(SoundSet_RocketShot) {
        soundShaders[] = {QCLASS(SoundShader_DX50CShot)};
    };
};
