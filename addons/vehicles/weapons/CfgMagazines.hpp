class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_VehicleBase): CLASS(Mag_Base) {
        type = TYPE_DEFAULT;
        weaponPoolAvailable = FALSE;
        mass = 8;
    };

    class CLASS(Mag_20Rnd_Cannon_Blitz_HEAT): CLASS(Mag_VehicleBase) {
        SCOPE_PUBLIC;
        displayName = "HEAT";
        displayNameShort = "HEAT";
        ammo = QCLASS(Bullet_PlasmaBlitz_HEAT);
        count = 20;

        nameSound = "cannon";

        initSpeed = 1330;
        maxLeadSpeed = 25;
        weight = 126;
        muzzleImpulseFactor[] = {0.5, 3};
    };

    class CLASS(Mag_20Rnd_Cannon_Blitz_HE): CLASS(Mag_20Rnd_Cannon_Blitz_HEAT) {
        displayName = "HE";
        displayNameShort = "HE";
        ammo = QCLASS(Bullet_PlasmaBlitz_HE);

        initSpeed = 1410;
        muzzleImpulseFactor[] = {1, 6};
    };

    class CLASS(Mag_20Rnd_Cannon_Blitz_AT): CLASS(Mag_20Rnd_Cannon_Blitz_HEAT) {
        displayName = "AT";
        displayNameShort = "AT";
        ammo = QCLASS(Bullet_PlasmaBlitz_AT);
        initSpeed = 1750;
    };

    class CLASS(Mag_100Rnd_Coax): CLASS(Mag_VehicleBase) {
        SCOPE_PUBLIC;
        ammo = QCLASS(Bullet_PlasmaCoax_Blue);
        count = 100;

        nameSound = "mgun";

        initSpeed = 910;
        maxLeadSpeed = 36.1111;
        weight = 126;
        muzzleImpulseFactor[] = {0.05, 0.05};
    };
    class CLASS(Mag_500Rnd_Coax): CLASS(Mag_100Rnd_Coax) {
        count = 500;
    };
    class CLASS(Mag_1000Rnd_Coax): CLASS(Mag_100Rnd_Coax) {
        count = 1000;
    };

    class CLASS(Mag_9999Rnd_ATRT): CLASS(Mag_Base) {
        SCOPE_HIDDEN;
        displayName = "[KC] AT-RT Turret Battery Pack";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Used In AT-RT";
        ammo = QCLASS(Bullet_PlasmaATRT_Blue);
        count = 9999;

        picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";

        initSpeed = 400;
        mass = 10;
    };

    class CLASS(Mag_250Rnd_Hermitaur): CLASS(Mag_VehicleBase) {
        SCOPE_PUBLIC;
        displayName = "Hermitaur Cannon Shells";
        displayNameShort = "HE Rnd";
        descriptionShort = "Plasma Shells<br/>Used In Hermitaura";
        ammo = QCLASS(Bullet_Plasma_Medium_Cannon_Blue);
        count = 250;
        mass = 8;
        initSpeed = 1070;
    };

    class CLASS(Mag_6Rnd_Mortar_82mm_HE): CLASS(Mag_VehicleBase) {
        SCOPE_HIDDEN;
        displayName = "[KC] 6Rnd Mortar HE Shells";
        displayNameShort = "6Rnd HE";
        displayNameMFDFormat = "HE";
        ammo = QCLASS(Shell_PlasmaMortar_82mm_HE);
        count = 6;

        model = "\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
        nameSound = "heat";

        initSpeed = 200;
        muzzleImpulseFactor[] = {0, 0};
    };
    CSW_MAG_CONVERSION(CLASS(Mag_6Rnd_Mortar_82mm_HE));

    class CLASS(Mag_6Rnd_Mortar_SmokeWhite): CLASS(Mag_6Rnd_Mortar_82mm_HE) {
        displayName = "[KC] 6Rnd Mortar White Smoke Shells";
        displayNameShort = "6Rnd W Smoke";
        ammo = QCLASS(Shell_Mortar_SmokeWhite);

        model = "\z\ace\addons\mk6mortar\data\l16_ammo_smk_white.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_smk_white_ca.paa";
    };
    CSW_MAG_CONVERSION(CLASS(Mag_6Rnd_Mortar_SmokeWhite));

    class CLASS(Mag_6Rnd_Mortar_SmokeBlue): CLASS(Mag_6Rnd_Mortar_SmokeWhite) {
        displayName = "[KC] 6Rnd Mortar Blue Smoke Shells";
        displayNameShort = "6Rnd B Smoke";
        ammo = QCLASS(Shell_Mortar_SmokeBlue);
    };
    CSW_MAG_CONVERSION(CLASS(Mag_6Rnd_Mortar_SmokeBlue));

    class CLASS(Mag_6Rnd_Mortar_SmokeRed): CLASS(Mag_6Rnd_Mortar_SmokeWhite) {
        displayName = "[KC] 6Rnd Mortar Red Smoke Shells";
        displayNameShort = "6Rnd R Smoke";
        ammo = QCLASS(Shell_Mortar_SmokeRed);
    };
    CSW_MAG_CONVERSION(CLASS(Mag_6Rnd_Mortar_SmokeRed));
};
