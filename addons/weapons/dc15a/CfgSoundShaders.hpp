class CfgSoundShaders
{
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC15AShot_Single): CLASS(SoundShader_WeaponShot_Base)
    {
        samples[] =
        {
            {QPATHTOF(data\audio\Fire1.wss), 1, 1},
            {QPATHTOF(data\audio\Fire2.wss), 1, 1},
            {QPATHTOF(data\audio\Fire3.wss), 1, 1},
            {QPATHTOF(data\audio\Fire4.wss), 1, 1}
        };
    };
    class CLASS(SoundShader_DC15AShot_FullAuto): CLASS(SoundShader_DC15AShot_Single)
    {
        samples[] =
        {
            {QPATHTOF(data\audio\Fire1.wss), 1, 1}
        };
    };
};