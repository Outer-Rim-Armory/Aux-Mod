class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_40Rnd_DP24): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DP-24 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DP-24";

        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaScatter_Blue);
        count = 40;
        mass = 10;
    };
    class CLASS(Mag_20Rnd_DP24_HP): CLASS(Mag_40Rnd_DP24) {
        displayName = "[KC] DP-23 HP Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 20<br/>Used In: DP-24";

        ammo = QCLASS(Bullet_PlasmaScatterHP_Blue);
        count = 20;
    };
    class CLASS(Mag_4Rnd_DP24_Flame): CLASS(Mag_40Rnd_DP24) {
        displayName = "[KC] DP-24 Dragons Breath";
        displayNameShort = "Standard Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 4<br/>Used In: DP-24";

        ammo = QCLASS(Bullet_flamethrower);
        count = 4;
    };
};