class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_400Rnd_Z5): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-5 GMG Case";
        displayNameShort = "HE Grenade Belt";
        descriptionShort = "Grenade Belt Pack<br/>Rounds: 400<br/>Used In: Z-5";

        model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
        picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";

        ammo = "G_40mm_HE";
        count = 400;
        initSpeed = 920;
        mass = 9;
    };
};
