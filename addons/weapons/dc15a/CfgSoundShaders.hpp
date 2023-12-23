class CfgSoundShaders
{
    class CLASS(SoundShader_Weapon_Base);
    class CLASS(SoundShader_DC15A_Single): CLASS(SoundShader_Weapon_Base)
    {
        samples[] =
        {
            {QPATHTOF(data\audio\Fire1.wss), 1, 1},
            {QPATHTOF(data\audio\Fire2.wss), 1, 1},
            {QPATHTOF(data\audio\Fire3.wss), 1, 1},
            {QPATHTOF(data\audio\Fire4.wss), 1, 1}
        };
    };
    class CLASS(SoundShader_DC15A_FullAuto): CLASS(SoundShader_DC15A_Single)
    {
        samples[] =
        {
            {QPATHTOF(data\audio\Fire1.wss), 1, 1}
        };
    };
};