class CfgSoundSets
{
    class CLASS(SoundSet_VehicleWeapon_Base)
    {
        soundShaders[] = {QCLASS(SoundShader_VehicleWeapon_Base)};
        soundShadersLimit = 1;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";

        volumeCurve = "InverseSquare2Curve";
        volumeFactor = 1;

        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;

        spatial = 1;
        doppler = 0;
        loop = 0;
    };

    class CLASS(SoundSet_Autocannon_Badger_Shot): CLASS(SoundSet_VehicleWeapon_Base)
    {
        soundShaders[] = {QCLASS(SoundShader_Autocannon_Badger_Shot)};
        sound3DProcessingType = "ExplosionMedium3DProcessingType";

        volumeCurve = "InverseSquare1Curve";
        volumeFactor = 1;

        distanceFilter = "explosionDistanceFreqAttenuationFilter";
    };

    class CLASS(SoundSet_Cannon_105mm_Shot): CLASS(SoundSet_VehicleWeapon_Base)
    {
        soundShaders[] = {QCLASS(SoundShader_Cannon_105mm_Shot)};
        sound3DProcessingType = "ExplosionMedium3DProcessingType";

        volumeCurve = "InverseSquare1Curve";
        volumeFactor = 1.8;

        distanceFilter = "explosionDistanceFreqAttenuationFilter";
    };
};