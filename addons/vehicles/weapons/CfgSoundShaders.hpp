class CfgSoundShaders {
    class CLASS(SoundShader_VehicleWeapon_Base) {
        range = 3500;
        volume = 1;
        samples[] = {};
    };

    class CLASS(SoundShader_Autocannon_Reek_Shot): CLASS(SoundShader_VehicleWeapon_Base) {
        rangeCurve = "CannonCloseShotCurve";
        samples[] = {
            {QPATHTOF(weapons\data\audio\reek\cannon\Fire1.wss), 1}
        };
    };

    class CLASS(SoundShader_Rocket_Hornet_Shot): CLASS(SoundShader_VehicleWeapon_Base) {
        rangeCurve = "CannonCloseShotCurve";
        samples[] = {
            {QPATHTOF(weapons\data\audio\hornet\rocket\Fire1.wss), 1}
        };
    };

    class CLASS(SoundShader_MachineGun_Hornet_Shot): CLASS(SoundShader_VehicleWeapon_Base) {
        samples[] = {
            {QPATHTOF(weapons\data\audio\hornet\mg\Fire1.wss), 1}
        };
    };
};
