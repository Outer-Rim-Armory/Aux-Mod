class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_60rnd_B2Blaster): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Dual Wrist Blaster Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: Dual Wrist Blaster";

        model = "\ls\core\addons\weapons_eseries\e5\ls_magazine_e5.p3d";
        picture = "\ls\core\addons\weapons_eseries\data\ui\e5_mag_ui_ca.paa";

        initSpeed = 310;
        mass = 15;

        ammo = QCLASS(Bullet_PlasmaRifle_Red);
        count = 60;
    };

    class CLASS(Mag_3rnd_B2Blaster_rocket): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Wrist Rocket Launcher Pack";
        displayNameShort = "Wrist Rockets";
        descriptionShort = "Rocket Pack<br/>Rounds: 3<br/>Used In: Wrist Rocket Launcher";

        model = "\ls_weapons\tertiary\rps6\ls_magazine_rps6.p3d";
        picture = "\ls_weapons\_ui\RPS6_mag_ca.paa";

        initSpeed = 100;
        mass = 15;

        ammo = QCLASS(Rocket_B2Blaster);
        count = 3;
    };

    class CLASS(Mag_3rnd_B2Blaster_grenadeLauncher): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Wrist Grenade Launcher Pack";
        displayNameShort = "Grenade Launcher";
        descriptionShort = "Grenade Pack<br/>Rounds: 3<br/>Used In: Wrist Grenade Launcher";

        model = "\ls\core\addons\weapons_zseries\z6\ls_magazine_z6.p3d";
        modelSpecial = "\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
        modelSpecialIsProxy = TRUE;
        picture = "\ls\core\addons\weapons_zseries\data\ui\z6_mag_ui_ca.paa";

        nameSound = "";

        initSpeed = 80;
        mass = 15;
        deleteIfEmpty = FALSE;
        type = AMMO_USAGE_MINE;

        tracersEvery = 0;

        ammo = QCLASS(Grenade_B2Blaster);
        count = 3;
    };

    class CLASS(Mag_150rnd_B2Blaster_flamer): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Wrist Flamethrower Fuel Tank";
        descriptionShort = "Flamethrower Fuel Tank<br/>Burn Time: 2.5 minutes<br/>Used In: Wrist Mounted Flamethrower";

        initSpeed = 50;
        mass = 130;

        model = "\MRC\JLTS\contraband\Credits\icecream.p3d";
        picture = "\MRC\JLTS\contraband\Credits\data\ui\icecream_ui_ca.paa";

        ammo = QCLASS(Bullet_flamethrower);
        count = 150;
    };
};
