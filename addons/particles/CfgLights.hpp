class CfgLights {
    class RocketLight;
    class CLASS(Light_E60R): RocketLight {
        color[] = {0.941, 0.443, 1};
        intensity = 1e8;
        dayLight = TRUE;
        useFlare = TRUE;
        flareSize = 1.5;
        flareMaxDistance = 6000;
    };

    class CLASS(Light_B2Blaster_rocket): RocketLight {
        color[] = {0.831, 0.831, 0.251, 1};
        intensity = 1000;
        dayLight = 1;
        useFlare = 1;
        flareSize = 1.5;
        flareMaxDistance = 6000;
    };
};
