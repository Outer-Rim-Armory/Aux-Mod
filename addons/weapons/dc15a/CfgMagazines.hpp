class CfgMagazines
{
    class CLASS(Mag_60rnd_DC15A): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15A Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-15A";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue);
        count = 80;
    };

    class Aux12thFleet_Mag_DC15A: CLASS(Mag_60rnd_DC15A)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-15A<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};