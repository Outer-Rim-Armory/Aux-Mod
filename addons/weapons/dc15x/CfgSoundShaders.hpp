class CfgSoundShaders
{
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DC15XShot): CLASS(SoundShader_DC15XShot_Base)
    {
        samples[] =
        {
            {"\MRC\JLTS\weapons\DC15X\sounds\dc15x_fire.wss", 1, 1}
        };
    };
};