class CfgCloudlets
{
    class SmokeShellWhite;
    class CLASS(Cloudlet_BactaSmoke): SmokeShellWhite
    {
        interval = 0.01;
        ignoreWind = "true";
    };

    class SmokeShellWhiteUW;
    class CLASS(Cloudlet_BactaSmokeUW): SmokeShellWhiteUW
    {
        interval = 0.01;
        ignoreWind = "true";
    };
};