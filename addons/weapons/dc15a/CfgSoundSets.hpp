class CfgSoundSets
{
    class CLASS(SoundSet_Weapon_Base);
    class CLASS(SoundSet_DC15A_Single): CLASS(SoundSet_Weapon_Base)
    {
        soundShaders[] = {QCLASS(SoundShader_DC15A_Single)};
    };
    class CLASS(SoundSet_DC15A_FullAuto): CLASS(SoundSet_DC15A_Single)
    {
        soundShaders[] = {QCLASS(SoundShader_DC15A_FullAuto)};
    };
};