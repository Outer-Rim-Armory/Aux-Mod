class CfgCloudlets {
    class CLASS(Cloudlet_GrenadeBase_Explosion);
    class CLASS(Cloudlet_EMP_Explosion): CLASS(Cloudlet_GrenadeBase_Explosion) {
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        color[] = {{0,0,1,-6}, {0,0,1,0}};
    };

    class SmokeShellWhite;
    class CLASS(Cloudlet_BactaSmoke): SmokeShellWhite {
        interval = 0.01;
        ignoreWind = "true";
    };

    class SmokeShellWhiteUW;
    class CLASS(Cloudlet_BactaSmokeUW): SmokeShellWhiteUW {
        interval = 0.01;
        ignoreWind = "true";
    };
};
