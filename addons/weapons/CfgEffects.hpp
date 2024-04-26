class CLASS(Effect_GrenadeBase_Explosion) {
    class GrenadeBubbles {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "particles";
        type = "GrenadeBubbles1";
    };
    class GrenadeExp1 {
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
        position[] = {0,0,0};
        simulation = "particles";
        type = QCLASS(Cloudlet_GrenadeBase_Explosion);
    };
    class GrenadeSmoke1 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "particles";
        type = "GrenadeSmoke1";
    };
    class Light1 {
        intensity = 0.01;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "light";
        type = "GrenadeExploLight";
    };
    class MineWater1 {
        enabled = "distToWater interpolate [-5.0001,-5,-1,1]";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        simulation = "particles";
        type = "MineUnderwaterWaterPDM";
    };
    class MineWave {
        enabled = "(distToWater interpolate [-10.0001,-10,-1,1]) * (distToWater interpolate [0.1,0.10001,-1,1])";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "particles";
        type = "GrenadeWaveSmall";
    };
};