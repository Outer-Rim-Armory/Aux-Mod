class CfgMagazines
{
    class CLASS(Mag_80Rnd_DC15S);
    class CLASS(Mag_40Rnd_DC15C): CLASS(Mag_80Rnd_DC15S)
    {
        displayName = "[KC] DC-15C Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 40<br/>Used In: DC-15C";
        count = 40;
        initSpeed = 417;
    };

    class Aux12thFleet_Mag_DC15C: CLASS(Mag_40Rnd_DC15C)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 40<br/>Used In: DC-15C<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};