class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_60Rnd_DC15A): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15A Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-15A";

        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue);
        count = 60;
        mass = 10;
    };

    class Aux12thFleet_Mag_DC15A: CLASS(Mag_60Rnd_DC15A)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-15A<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};