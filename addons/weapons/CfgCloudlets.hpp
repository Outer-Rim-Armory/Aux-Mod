class CfgCloudlets {
    // Prevent mods like Blastcore from breaking other modded explosion effects
    class CLASS(Cloudlet_GrenadeBase_Explosion) {
        angle = 0;
        angleVar = 1;
        animationName = "";
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        color[] = {
            {1, 1, 1, -6},
            {1, 1, 1, 0}
        };
        colorCoef[] = {1, 1, 1, 1};
        colorVar[] = {0, 0, 0, 0};
        interval = 0.03;
        lifeTime = 0.3;
        lifeTimeVar = 0;
        moveVelocity[] = {0, 1, 0};
        MoveVelocityVar[] = {0.2, 0.5, 0.2};
        MoveVelocityVarConst[] = {0, 0, 0};
        onTimerScript = "";
        particleFSFrameCount = 32;
        particleFSIndex = 0;
        particleFSLoop = 0;
        particleFSNtieth = 16;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleType = "Billboard";
        position[] = {0, 0, 0};
        positionVar[] = {0.4, 0.1, 0.4};
        positionVarConst[] = {0, 0, 0};
        randomDirectionIntensity = 0.2;
        randomDirectionIntensityVar = 0;
        randomDirectionPeriod = 0.2;
        randomDirectionPeriodVar = 0;
        rotationVelocity = 0;
        rotationVelocityVar = 90;
        rubbing = 0.1;
        size[] = {"0.0125 * intensity + 4", "0.0125 * intensity + 1"};
        sizeCoef = 1;
        sizeVar = 0.5;
        timerPeriod = 1;
        volume = 7.9;
        weight = 10;
    };
};
