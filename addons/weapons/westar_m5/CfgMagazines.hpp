class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_99Rnd_WestarM5): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-M5 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 99<br/>Used In: Westar-M5";

        model = "\SWLW_clones\smgs\westar_m5\WestarM5_mag.p3d";
        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_mag_ui.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue);
        count = 99;
        initSpeed = 472;
        mass = 10;
    };

    class Aux12thFleet_Mag_WestarM5: CLASS(Mag_99Rnd_WestarM5) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 99<br/>Used In: Westar-M5<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};