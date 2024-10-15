class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_12Rnd_DP25): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DP-25 Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 30<br/>Used In: DP-23";

        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaScatter_Blue);
        count = 12;
        mass = 10;
    };

    class CLASS(Mag_12Rnd_DP25_SLUG): CLASS(Mag_12Rnd_DP25) {
        displayName = "[KC] DP-25 Slug Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 15<br/>Used In: DP-23";

        ammo = QCLASS(Bullet_PlasmaSniper_Blue);
        count = 12;
        mass = 10;

    };

    class CLASS(Mag_4Rnd_DP25_Flame): CLASS(Mag_12Rnd_DP25) {
        displayName = "[KC] DP-25 Dragons Breath";
        displayNameShort = "Standard Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 8<br/>Used In: DP-23";

        ammo = QCLASS(Bullet_flamethrower);
        count = 4;
        mass = 20;
    };
};