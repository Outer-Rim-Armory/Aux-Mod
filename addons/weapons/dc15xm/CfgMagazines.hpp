class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_10Rnd_DC15XM): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15XM Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 10<br/>Used In: DC-15xm";

        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaSniper_Blue3);
        count = 10;
        mass = 10;
    };
};
