class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_100Rnd_WestarM5): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-M5 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 100<br/>Used In: Westar-M5";

        model = "\SWLW_clones\smgs\westar_m5\WestarM5_mag.p3d";
        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_mag_ui.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Blue2);
        count = 100;
        initSpeed = 950;
        mass = 10;
    };
};