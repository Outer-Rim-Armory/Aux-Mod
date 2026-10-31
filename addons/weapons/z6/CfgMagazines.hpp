class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_400Rnd_Z6): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-6 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 400<br/>Used In: Z-6";

        model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
        picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaMachineGun_Blue);
        count = 400;
        initSpeed = 920;
        mass = 9;
    };

    class Aux12thFleet_Mag_Z6: CLASS(Mag_400Rnd_Z6) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 300<br/>Used In: Z-6<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };

    class CLASS(Mag_400Rnd_Z6_Red): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-6 Energy Cell (Red)";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 400<br/>Used In: Z-6";

        model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
        picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaMachineGun_Red);
        count = 400;
        initSpeed = 920;
        mass = 9;
    };

    class CLASS(Mag_400Rnd_Z6_Yellow): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-6 Energy Cell (Yellow)";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 400<br/>Used In: Z-6";

        model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
        picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaMachineGun_Yellow);
        count = 400;
        initSpeed = 920;
        mass = 9;
    };

    class CLASS(Mag_400Rnd_Z6H): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-6 Heavy Energy Cell (Green)";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 400<br/>Used In: Z-6";

        model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
        picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaMachineGun_Green);
        count = 400;
        initSpeed = 920;
        mass = 9;
    };
    class CLASS(Mag_40Rnd_HE): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-6 HE Energy Cell (Green)";
        displayNameShort = "HE Energy";
        descriptionShort = "High Explosive Energy Cell Pack<br/>Rounds: 40<br/>Used In: Z-6 Heavy Secondary";
        model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
        picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
        ammo = QCLASS(Bullet_PlasmaMachineGun_HE);
        count = 40;
        initSpeed = 920;
        mass = 12;
    };
};
