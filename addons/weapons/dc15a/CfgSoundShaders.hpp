class CfgSoundShaders
{
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC15AShot): CLASS(SoundShader_WeaponShot_Base)
    {
        samples[] =
        {
            {QPATHTOF(data\audio\Fire1.wss), 1, 1},
            {QPATHTOF(data\audio\Fire2.wss), 1, 1},
            {QPATHTOF(data\audio\Fire3.wss), 1, 1},
            {QPATHTOF(data\audio\Fire4.wss), 1, 1}
        };
    };
};