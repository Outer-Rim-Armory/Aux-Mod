class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_30Rnd_DP23): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] DP-23 Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 30<br/>Used In: DP-23";

        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaScatter_Blue);
        count = 30;
        mass = 10;
    };

    class CLASS(Mag_15Rnd_DP23_HP): CLASS(Mag_30Rnd_DP23)
    {
        displayName = "[KC] DP-23 HP Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 15<br/>Used In: DP-23";

        ammo = QCLASS(Bullet_PlasmaScatterHP_Blue);
        count = 15;
    };

    class Aux12thFleet_Mag_DP23: CLASS(Mag_30Rnd_DP23)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 30<br/>Used In: DP-23<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
    class Aux12thFleet_Mag_DP23_HP: CLASS(Mag_15Rnd_DP23_HP)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 15<br/>Used In: DP-23<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};