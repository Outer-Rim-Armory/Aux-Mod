class CfgCloudlets
{
    class Default;
    class CLASS(Cloudlet_E60R_Sparks): Default
    {
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        color[] = {{1, 0.6, 0.4, -50}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        emissiveColor[] = {{10, 6, 4, 1}};
        interval = 0.0009;
        angleVar = 360;

        size[] = {0.12, 0};
        sizeCoef = 1;
        sizeVar = 0;
        lifeTime = 2.5;
        lifeTimeVar = 5;
        position[] = {0, 0, 0};
        positionVar[] = {0.01, 0.01, 0.01};
        moveVelocityVar[] = {1, 3, 1};

        particleFSFrameCount = 2;
        particleFSIndex = 13;
        particleFSLoop = 0;
        particleFSNtieth = 16;
        animationSpeed[] = {1000};

        rubbing = 0.3;
        volume = 0.01;
        weight = 100;

        animationName = "";
        particleType = "Billboard";
        moveVelocity[] = {0, 0, 0};
        rotationVelocity = 1;
        rotationVelocityVar = 0;
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0;
        randomDirectionIntensityVar = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        bounceOnSurface = 0.1;
        bounceOnSurfaceVar = 0.1;
        blockAIVisibility = 0;
        timerPeriod = 3;

        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
    };

    class Missile3;
    class CLASS(Cloudlet_E60R_Smoke): Missile3
    {
        color[] =
        {
            {0, 0, 0, 0.5},
            {0.08, 0.08, 0.08, 0.3},
            {0.08, 0.08, 0.08, 0.3}
        };
        interval = 0.0005;
        size[] = {2, 4, 4};
        lifeTime = 3;
    };
};