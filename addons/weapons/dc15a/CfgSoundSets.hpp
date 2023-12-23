class CfgSoundSets
{
    class CLASS(SoundSet_WeaponShot_Base);
    class CLASS(SoundSet_DC15AShot_Single): CLASS(SoundSet_WeaponShot_Base)
    {
        soundShaders[] = {QCLASS(SoundShader_DC15A_Single)};
    };
    class CLASS(SoundSet_DC15AShot_FullAuto): CLASS(SoundSet_DC15AShot_Single)
    {
        soundShaders[] = {QCLASS(SoundShader_DC15A_FullAuto)};
    };
};