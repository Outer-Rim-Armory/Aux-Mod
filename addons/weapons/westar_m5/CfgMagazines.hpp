class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_100Rnd_WestarM5): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-M5 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 100<br/>Used In: Westar-M5";

        model = "\ls\core\addons\weapons_westar\westarM5\ls_magazine_westarM5.p3d";
        picture = "\ls\core\addons\weapons_westar\data\ui\westarM5_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Blue2);
        count = 100;
        initSpeed = 950;
        mass = 10;
    };
};
