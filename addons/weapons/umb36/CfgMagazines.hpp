class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_120Rnd_UMB36): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15A Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-15A";

        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Green);
        count = 60;
        mass = 10;
    };
};