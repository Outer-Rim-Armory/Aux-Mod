class CfgCloudlets {
    class CLASS(Cloudlet_Flare1) {
        angle = 0;
        angleVar = 360;
        animationName = "";
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        blockAIVisibility = FALSE;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        color[] = {
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

    class CLASS(Cloudlet_ATRT_Smoke): CLASS(Cloudlet_Flare1) {
        colorCoef[] = {0.3, 0.3, 0.3, 1};
        lifeTime = 4;
        sizeCoef = 0.9;
    };

    class Default;
    class CLASS(Cloudlet_E60R_Sparks): Default {
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

    class CLASS(Cloudlet_B2Blaster_rocket_Sparks): Default {
        interval = 0.0009;
        lifeTime = 2.5;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 13;
        particleFSFrameCount = 2;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        moveVelocity[] = {0, 0, 0};
        rotationVelocity = 1;
        weight = 100;
        volume = 0.01;
        rubbing = 0.3;
        size[] = {0.12,0};
        sizeCoef = 1;
        color[] = {{1, 0.6, 0.4, -50}};
        colorCoef[] = {1, 1, 1, 1};
        emissiveColor[] = {{10, 6, 4, 1}};
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        bounceOnSurface = 0.1;
        bounceOnSurfaceVar = 0.1;
        lifeTimeVar = 5;
        position[] = {0, 0, 0};
        positionVar[] = {0.01, 0.01, 0.01};
        moveVelocityVar[] = {1, 3, 1};
        rotationVelocityVar = 0;
        sizeVar = 0;
        colorVar[] = {0.05, 0.05, 0.05, 5};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };

    class Missile3;
    class CLASS(Cloudlet_E60R_Smoke): Missile3 {
        color[] = {
            {0, 0, 0, 0.5},
            {0.08, 0.08, 0.08, 0.3},
            {0.08, 0.08, 0.08, 0.3}
        };
        interval = 0.0005;
        size[] = {2, 4, 4};
        lifeTime = 3;
    };

    class CLASS(Cloudlet_B2Blaster_rocket_Smoke): Missile3 {
        color[] = {
            {0, 0, 0, 0.5},
            {120, 120, 120, 1},
            {120, 120, 120, 1}
        };
        size[] = {0.3, 0.5, 0.5};
        lifeTime = 1;
        interval = 0.0005;
    };

    class SmokeShellWhiteSmall;
    class CLASS(Cloudlet_Mortar_SmokeShellBlue): SmokeShellWhiteSmall {
        color[] = {{0.1183, 0.1867, 1, 1}};
    };
    class CLASS(Cloudlet_Mortar_SmokeShellRed): SmokeShellWhiteSmall {
        color[] = {{1, 0.1383, 0.1353, 1}};
    };
};