class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_120Rnd_UMB36): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] UMB-36 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 120<br/>Used In: UMB-36";

        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Green);
        count = 60;
        mass = 10;
    };
};
