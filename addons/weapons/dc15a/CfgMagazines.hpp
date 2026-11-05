class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_60Rnd_DC15A): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15A Energy Cell (Blue)";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-15A";

        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue);
        count = 60;
        mass = 10;
    };

    class CLASS(Mag_60Rnd_DC15A_Red): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15A Energy Cell (Red)";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-15A";

        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Red);
        count = 60;
        mass = 10;
    };
    class CLASS(Mag_35Rnd_DC15LE): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15LE Energy Cell (Blue)";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 35<br/>Used In: DC-15LE";

        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue3);
        count = 35;
        mass = 10;
    };

    class CLASS(Mag_35Rnd_DC15LE_Red): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15LE Energy Cell (Red)";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 35<br/>Used In: DC-15LE";

        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Red3);
        count = 35;
        mass = 10;
    };

    class Aux12thFleet_Mag_DC15A: CLASS(Mag_60Rnd_DC15A) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-15A<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};
