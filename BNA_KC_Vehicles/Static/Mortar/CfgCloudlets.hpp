class BNA_KC_ComplexEffects_SmokeShellBlueSmall
{
    class SmokeShellBlue
    {
        type = "BNA_KC_Cloudlet_SmokeShellBlueSmall";
        simulation = "particles";

        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
    };
};
class BNA_KC_ComplexEffects_SmokeShellRedSmall
{
    class SmokeShellRed
    {
        type = "BNA_KC_Cloudlet_SmokeShellRedSmall";
        simulation = "particles";

        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
    };
};


class CfgCloudlets
{
    class SmokeShellWhiteSmall;
    class BNA_KC_Cloudlet_SmokeShellBlueSmall: SmokeShellWhiteSmall
    {
        color[] =
        {
            {0.1183, 0.1867, 1, 1} // Base game blue smoke color
        };
    };
    class BNA_KC_Cloudlet_SmokeShellRedSmall: SmokeShellWhiteSmall
    {
        color[] =
        {
            {1, 0.1383, 0.1353, 1} // Base game red smoke color, red increased from 0.8438
        };
    };
};