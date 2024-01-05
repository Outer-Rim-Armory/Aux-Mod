class CfgSoundSets
{
    class BNA_KC_SoundSet_VehicleWeapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_VehicleWeapon_Base"};
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
};