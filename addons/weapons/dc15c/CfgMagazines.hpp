class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_70Rnd_DC15C): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 70<br/>Used In: DC-15C";

        model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Blue3);
        count = 70;
        mass = 10;
    };
};