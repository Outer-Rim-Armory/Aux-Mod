class CfgSoundShaders
{
    class CLASS(SoundShader_VehicleWeapon_Base)
    {
        range = 3500;
        volume = 1;
        samples[] = {};
    };

    class CLASS(SoundShader_Autocannon_Badger_Shot): CLASS(SoundShader_VehicleWeapon_Base)
    {
        rangeCurve = "CannonCloseShotCurve";
        samples[] =
        {
            {QPATHTOF(weapons\data\audio\apc\cannon\Fire1.wss), 1}
        };
    };

    class CLASS(SoundShader_Cannon_Galaxy_Shot): CLASS(SoundShader_VehicleWeapon_Base)
    {
        rangeCurve = "CannonCloseShotCurve";
        samples[] =
        {
            {"\3AS\3as_static\XX10\data\SFX\GatCannon.wss", 1}
        };
    };

    class CLASS(SoundShader_Cannon_Blitz_Shot): CLASS(SoundShader_VehicleWeapon_Base)
    {
        rangeCurve = "CannonCloseShotCurve";
        samples[] =
        {
            {QPATHTOF(weapons\data\audio\tank\cannon\Fire1.wss), 1}
        };
    };
};