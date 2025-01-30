class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_40Rnd_DP24): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DP-24 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 40<br/>Used In: DP-24";

        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaScatter_Blue);
        count = 40;
        mass = 10;
    };
    class CLASS(Mag_8Rnd_DP24_HE): CLASS(Mag_40Rnd_DP24) {
        displayName = "[KC] DP-24 Energy Cell (HE)";
        displayNameShort = "High Explosive";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 8<br/>Used In: DP-24";

        ammo = QCLASS(Bullet_Plasma40mm_AT);
        count = 8;
    };
    //class CLASS(Mag_4Rnd_DP24_Flame): CLASS(Mag_40Rnd_DP24) {
    //    displayName = "[KC] DP-24 Dragons Breath";
    //    displayNameShort = "Napalm Fueled";
    //    descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 4<br/>Used In: DP-24";

    //    ammo = QCLASS(Bullet_flamethrower);
    //    count = 4;
    //};
};