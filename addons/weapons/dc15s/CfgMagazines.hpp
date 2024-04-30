class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_80Rnd_DC15S): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15S Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 80<br/>Used In: DC-15S";

        model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Blue);
        count = 80;
        mass = 10;
    };

    class Aux12thFleet_Mag_DC15S: CLASS(Mag_80Rnd_DC15S) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 80<br/>Used In: DC-15S<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};