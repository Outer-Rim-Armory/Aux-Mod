class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_15Rnd_DP20): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DP-20 Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 15<br/>Used In: DP-20";

        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaScatter_Blue);
        count = 15;
        mass = 5;
    };
};