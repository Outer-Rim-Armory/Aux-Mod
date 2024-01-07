class CfgCloudlets
{
    class CLASS(Cloudlet_Flare1)
    {
        angle = 0;
        angleVar = 360;
        animationName = "";
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        blockAIVisibility = FALSE;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        color[] =
        {
            {0.22, 0.22, 0.22, 0.35},
            {0.25, 0.25, 0.25, 0.22},
            {0.25, 0.25, 0.25, 0.1},
            {0.25, 0.25, 0.25, 0.04},
            {0.25, 0.25, 0.25, 0.01}
        };
        colorCoef[] = {0.7, 0.7, 0.7, 0.7};
        colorVar[] = {0, 0, 0, 0};
        interval = 0.03;
        lifeTime = 5;
        lifeTimeVar = 0.5;
        moveVelocity[] = {0, 0, 0};
        MoveVelocityVar[] = {0.25, 0.25, 0.25};
        MoveVelocityVarConst[] = {0, 0, 0};
        onTimerScript = "";
        particleFSFrameCount = 8;
        particleFSIndex = 12;
        particleFSLoop = 0;
        particleFSNtieth = 16;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        particleType = "Billboard";
        position[] = {0, 0, 0};
        positionVar[] = {0.05, 0.05, 0.05};
        positionVarConst[] = {0, 0, 0};
        randomDirectionIntensity = 0.2;
        randomDirectionIntensityVar = 0;
        randomDirectionPeriod = 0.1;
        randomDirectionPeriodVar = 0;
        rotationVelocity = 0;
        rotationVelocityVar = 0;
        rubbing = 0.5;
        size[] = {0.15, 1.8, 2.8};
        sizeCoef = 1;
        sizeVar = 0.3;
        timerPeriod = 1;
        volume = 1;
        weight = 1.278;
    };

    class CLASS(Cloudlet_ATRT_Smoke): CLASS(Cloudlet_Flare1)
    {
        colorCoef[] = {0.3, 0.3, 0.3, 1};
        lifeTime = 4;
        sizeCoef = 0.9;
    };
};