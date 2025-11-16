class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_15Rnd_773): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] 773 Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: 773";

        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaSniper_Blue2);
        count = 15;
        mass = 10;
        initSpeed = 2000;
    };

    class CLASS(Mag_15Rnd_773_Red): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] 773 Energy Cell (Red)";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: 773";

        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaSniper_Red2);
        count = 15;
        mass = 10;
        initSpeed = 2000;
    };
};
