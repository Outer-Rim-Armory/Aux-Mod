class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_20Rnd_DC17): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17 Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 20<br/>Used In: DC-17";

        model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaPistol_Blue);
        count = 20;
        mass = 2;
        initSpeed = 430;
    };

    class CLASS(Mag_40Rnd_DC17_dual): CLASS(Mag_20Rnd_DC17) {
        displayName = "[KC] DC-17 Dual Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 40<br/>Used In: Dual DC-17";

        count = 40;
        mass = 2;
    };

    class CLASS(Mag_60Rnd_DC17_dualHP): CLASS(Mag_40Rnd_DC17_dual) {
        displayName = "[KC] DC-17 HP Dual Energy Cell";
        displayNameShort = "Medium Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: Commander/ARC Dual DC-17";

        ammo = QCLASS(Bullet_Plasma_DC17Dual_Blue);
        count = 60;
        mass = 2;
        initSpeed = 430;
    };

    class Aux12thFleet_Mag_DC17: CLASS(Mag_20Rnd_DC17) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 20<br/>Used In: DC-17<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};
