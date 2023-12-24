class CfgMagazines
{
    class CLASS(Mag_60rnd_DC15S);
    class CLASS(Mag_40rnd_DC15C): CLASS(Mag_60rnd_DC15S)
    {
        displayName = "[KC] DC-15C Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 40<br/>Used In: DC-15C";
        count = 40;
    };

    class Aux12thFleet_Mag_DC15C: CLASS(Mag_40rnd_DC15C)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 40<br/>Used In: DC-15C<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};