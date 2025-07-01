class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_25rnd_SBB3): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] SB-B3 Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 25<br/>Used In: SB-B3";

        model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
        picture = "\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaScatter_Red);
        count = 25;
        mass = 10;
    };
};
