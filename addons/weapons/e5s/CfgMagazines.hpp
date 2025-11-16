class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_20rnd_E5S): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] E-5S Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 20<br/>Used In: E-5S";

        model = "\MRC\JLTS\weapons\E5S\E5S_mag.p3d";
        picture = "\MRC\JLTS\weapons\E5S\data\ui\E5S_mag_ui_ca.paa";

        mass = 10;

        ammo = QCLASS(Bullet_PlasmaSniper_Red);
        count = 20;
    };
};
