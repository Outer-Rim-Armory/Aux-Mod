class CLASS(Effect_E60_Fly)
{
    class Sparks
    {
        simulation = "particles";
        type = QLCASS(Cloudlet_E60R_Sparks);
        position[] = {0, 0, 0};
        qualityLevel = 2;
    };
    class Smoke
    {
        simulation = "particles";
        type = QLCASS(Cloudlet_E60R_Smoke);
        position[] = {0, 0, 0};
        qualityLevel = -1;
    };
    class Light
    {
        simulation = "light";
        type = QLCASS(Light_E60R);
        position[] = {0, 0, 0};
    };
};