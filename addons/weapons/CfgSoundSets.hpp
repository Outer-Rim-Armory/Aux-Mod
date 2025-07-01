class CfgSoundSets {
    class CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_WeaponShot_Base)};
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

    class CLASS(SoundSet_RocketShot): CLASS(SoundSet_WeaponShot_Base) {
        volumeFactor = 5;
        soundShaders[] = {QCLASS(SoundShader_RocketShot)};
    };

    class CLASS(SoundSet_flamethrowerStart): CLASS(SoundSet_WeaponShot_Base) {
        soundShaders[] = {QCLASS(SoundShader_flamethrowerStart)};
    };
};
