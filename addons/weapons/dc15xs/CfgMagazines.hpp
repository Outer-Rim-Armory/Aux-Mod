class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_50Rnd_DC15XS): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15XS Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 50<br/>Used In: DC-15xs";

        model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Blue2);
        count = 50;
        mass = 10;
    };
};
