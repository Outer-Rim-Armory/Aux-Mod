class CfgCloudlets {
    class CLASS(cloudlet_flare1) {
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

    class CLASS(cloudlet_flare2): CLASS(cloudlet_flare1) {
        animationSpeed[] = {1000};
        color[] = {
            {1, 1, 1, -1.6},
            {1, 1, 1, -1.6},
            {1, 1, 1, -1.6},
            {1, 1, 1, 0}
        };
        interval = 0.0007;
        lifeTime = 0.05;
        lifeTimeVar = 0.01;
        moveVelocity[] = {0, 1.5, 0};
        moveVelocityVar[] = {1, 0.2, 1};
        particleFSFrameCount = 2;
        particleFSIndex = 3;
        positionVar[] = {0, 0, 0};
        randomDirectionIntensity = 0.1;
        size[] = {0.08, 0.07};
        sizeVar = 0;
        volume = 0.8;
        weight = 1;
    };

    class Default;
    class CLASS(cloudlet_airFireSparks): Default {
        angle = 0;
        angleVar = 360;
        animationName = "";
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        color[] = {
            {1, 0.3, 0.3, -6.5},
            {1, 0.3, 0.3, -6},
            {1, 0.3, 0.3, -5.5},
            {1, 0.3, 0.3, -4.5}
        };
        colorCoef[] = {1, 1, 1, 1};
        colorVar[] = {0, 0.15, 0.15, 0};
        destroyOnWaterSurface = 1;
        interval = 0.05;
        lifeTime = 3.5;
        lifeTimeVar = 2.5;
        moveVelocity[] = {0, 1.5, 0};
        MoveVelocityVar[] = {0.2, 1, 0.2};
        MoveVelocityVarConst[] = {0, 0, 0};
        onTimerScript = "";
        particleFSFrameCount = 2;
        particleFSIndex = 13;
        particleFSLoop = 0;
        particleFSNtieth = 16;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleType = "Billboard";
        position[] = {0,0,0};
        positionVar[] = {0,0.2,0};
        positionVarConst[] = {0,0,0};
        randomDirectionIntensity = 0.55;
        randomDirectionIntensityVar = 0.15;
        randomDirectionPeriod = 0.5;
        randomDirectionPeriodVar = 0.3;
        rotationVelocity = 1;
        rotationVelocityVar = 2;
        rubbing = 0.17;
        size[] = {0.1, 0.1, 0.1, 0.1, 0.1, 0.08, 0.08, 0.08, 0.08,0};
        sizeCoef = 1;
        sizeVar = 0.04;
        timerPeriod = 1;
        volume = 1;
        weight = 1.05;
    };

    class CLASS(cloudlet_mediumSmoke): Default {
        angle = 0;
        angleVar = 1;
        animationName = "";
        animationSpeed[] = {1.5, 0.5};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        color[] = {
            {0.1, 0.1, 0.1, 0.06},
            {0.2, 0.2, 0.2, 0.04},
            {0.2, 0.2, 0.2, 0.02},
            {0.3, 0.3, 0.3, 0.01},
            {0.4, 0.4, 0.4, 0.005}
        };
        colorCoef[] = {1.6, 1.6, 1.6, 1.8};
        colorVar[] = {0, 0, 0, 0};
        interval = 0.08;
        lifeTime = 15;
        lifeTimeVar = 4;
        moveVelocity[] = {0, 1.2, 0};
        MoveVelocityVar[] = {0.15, 0.2, 0.15};
        MoveVelocityVarConst[] = {0, 0, 0};
        onTimerScript = "";
        particleFSFrameCount = 48;
        particleFSIndex = 7;
        particleFSLoop = 1;
        particleFSNtieth = 16;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleType = "Billboard";
        position[] = {0, 0, 0};
        positionVar[] = {0.5, 0.3, 0.5};
        positionVarConst[] = {0, 0, 0};
        randomDirectionIntensity = 0.15;
        randomDirectionIntensityVar = 0.05;
        randomDirectionPeriod = 0.4;
        randomDirectionPeriodVar = 0.1;
        rotationVelocity = 0;
        rotationVelocityVar = 10;
        rubbing = 0.1;
        size[] = {1.2, 10};
        sizeCoef = 1;
        sizeVar = 0.1;
        timerPeriod = 1;
        volume = 0.04;
        weight = 0.05;
    };

    #include "configs\Jetpacks.hpp"

    class CLASS(Cloudlet_ATRT_Smoke): CLASS(cloudlet_flare1) {
        colorCoef[] = {0.3, 0.3, 0.3, 1};
        lifeTime = 4;
        sizeCoef = 0.9;
    };

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
