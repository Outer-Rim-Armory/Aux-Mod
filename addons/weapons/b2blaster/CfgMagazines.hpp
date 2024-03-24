class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_60rnd_B2Blaster): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Dual Wrist Blaster Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: Dual Wrist Blaster";

        model = "\SWLW_droids\smgs\e5\e5_mag.p3d";
        picture = "\SWLW_droids\smgs\e5\data\ui\e5_mag_ui.paa";

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

        model = "\SWLW_clones\machineguns\Z6\Z6_g_mag.p3d";
        modelSpecial = "\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
        modelSpecialIsProxy = TRUE;
        picture = "\SWLW_clones\machineguns\Z6\data\ui\Z6_g_mag_ui.paa";

        nameSound = "";

        initSpeed = 80;
        mass = 15;
        deleteIfEmpty = FALSE;
        type = AMMO_USAGE_MINE;

        tracersEvery = 0;

        ammo = QCLASS(Grenade_B2Blaster);
        count = 3;
    };
};