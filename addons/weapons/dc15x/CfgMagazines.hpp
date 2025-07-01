class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_15Rnd_DC15X): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15X Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: DC-15X";

        model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaSniper_Blue);
        count = 15;
        mass = 10;
    };

    class Aux12thFleet_Mag_DC15X: CLASS(Mag_15Rnd_DC15X) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: DC-15X<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};
