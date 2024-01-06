class CfgSoundShaders
{
    class CLASS(SoundShader_VehicleWeapon_Base)
    {
        range = 3500;
        volume = 1;
        samples[] = {};
    };

    class CLASS(SoundShader_Cannon_105mm_Shot): CLASS(SoundShader_VehicleWeapon_Base)
    {
        rangeCurve = "CannonCloseShotCurve";
        samples[] =
        {
            {"\3AS\3as_static\XX10\data\SFX\GatCannon.wss", 1}
        };
    };
};