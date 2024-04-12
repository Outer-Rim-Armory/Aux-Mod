class CLASS(Effect_GrenadeBase_Explosion) {
    class GrenadeExp1;
};
class CLASS(Effect_GrenadeEMP_Explosion): CLASS(Effect_GrenadeBase_Explosion) {
    class GrenadeExp1: GrenadeExp1 {
        type = QCLASS(Cloudlet_EMP_Explosion);
    };
};

class SmokeShellWhiteEffect;
class CLASS(Effect_GrenadeBacta): SmokeShellWhiteEffect {
    class Smoke {
        type = QCLASS(Cloudlet_BactaSmoke);
        simulation = "particles";

        intensity = 1;
        interval = 1;
        position[] = {0, 0, 0};
    };
    class SmokeUW: Smoke {
        type = QCLASS(Cloudlet_BactaSmokeUW);
    };
};