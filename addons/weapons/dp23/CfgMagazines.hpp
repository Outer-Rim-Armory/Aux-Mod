class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_30Rnd_DP23): CLASS(Mag_Base) {
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
    class CLASS(Mag_8Rnd_DP23_Flame): CLASS(Mag_30Rnd_DP23) {
        displayName = "[KC] DP-23 Dragons Breath";
        displayNameShort = "Standard Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 8<br/>Used In: DP-23";

        ammo = QCLASS(Bullet_flamethrower);
        count = 8;
        mass = 20;
    };
};