class SmokeShellWhiteEffect;
class CLASS(Effect_GrenadeBacta): SmokeShellWhiteEffect
{
    class Smoke
    {
        type = QCLASS(Cloudlet_BactaSmoke);
        simulation = "particles";

        intensity = 1;
        interval = 1;
        position[] = {0, 0, 0};
    };
    class SmokeUW: Smoke
    {
        type = QCLASS(Cloudlet_BactaSmokeUW);
    };
};