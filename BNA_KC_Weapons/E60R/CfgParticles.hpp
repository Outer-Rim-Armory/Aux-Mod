class Aux12thFleet_Particle_E60_Fly
{
    class Sparks
    {
        simulation = "particles";
        type = "Aux12thFleet_Cloudlet_E60R_Sparks";
        position[] = {0, 0, 0};
        qualityLevel = 2;
    };
    class Smoke
    {
        simulation = "particles";
        type = "Aux12thFleet_Cloudlet_E60R_Smoke";
        position[] = {0, 0, 0};
        qualityLevel = -1;
    };
    class Light
    {
        type = "Aux12thFleet_Light_E60R";
        simulation = "light";
        position[] = {0, 0, 0};
    };
};


class CfgCloudlets
{
    class Default;
    class Aux12thFleet_Cloudlet_E60R_Sparks: Default
    {
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        color[] = {{1, 0.6, 0.4, -50}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        emissiveColor[] = {{10, 6, 4, 1}};
        interval = 0.0009;
        angleVar = 360;

        size[] = {0.12, 0};
        lifeTime = 2.5;
        lifeTimeVar = 5;
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

        bounceOnSurface = 0.1;
        bounceOnSurfaceVar = 0.1;
        blockAIVisibility = 0;
        timerPeriod = 3;
    };

    class Missile3;
    class Aux12thFleet_Cloudlet_E60R_Smoke: Missile3
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


class CfgLights
{
    class RocketLight;
    class Aux12thFleet_Light_E60R: RocketLight
    {
        color[] = {0.941, 0.443, 1};
        dayLight = 1;
        useFlare = 1;
        flareSize = 1.5;
        flareMaxDistance = 6000;
    };
};