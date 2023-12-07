class SmokeShellWhiteEffect;
class BNA_KC_EffectsGroup_BactaSmoke: SmokeShellWhiteEffect
{
    // Set of particle effects, multiple effects for variance
    class Smoke
    {
        type = "BNA_KC_Effects_BactaSmoke"; // CfgCloudlets class
        simulation = "particles";

        intensity = 1;
        interval = 1;
        position[] = {0, 0, 0};
    };
    class SmokeUW: Smoke
    {
        type = "BNA_KC_Effects_BactaSmokeUW";
    };
};


class CfgCloudlets
{
    class SmokeShellWhite;
    class BNA_KC_Effects_BactaSmoke: SmokeShellWhite
    {
        interval = 0.01;
        ignoreWind = true;
    };

    // Underwater effects, easier to just inherit from the base underwater
    // particles than to change the same properties they do
    class SmokeShellWhiteUW;
    class BNA_KC_Effects_BactaSmokeUW: SmokeShellWhiteUW
    {
        interval = 0.01;
        ignoreWind = true;
    };
};