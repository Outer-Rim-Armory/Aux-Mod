class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_VehicleBase): CLASS(Mag_Base)
    {
        type = TYPE_DEFAULT;
        weaponPoolAvailable = FALSE;
        mass = 8;
    };

    class 30Rnd_120mm_HE_shells_Tracer_Red;
    class BNA_KC_120_HE_Mag: 30Rnd_120mm_HE_shells_Tracer_Red
    {
        displayName = "HE Ammunition";
        displayNameShort = "HE";
        descriptionShort = "HE";
        count = 20;
        ammo = "BNA_KC_120_HE_Ammo";
    };

    class 20Rnd_120mm_APFSDS_shells_Tracer_Red;
    class BNA_KC_120_AT_Mag: 20Rnd_120mm_APFSDS_shells_Tracer_Red
    {
        displayName = "AP Ammunition";
        displayNameShort = "AP";
        descriptionShort = "AP";
        ammo = "BNA_KC_120_AT_Ammo";
    };

    class 20Rnd_120mm_HEAT_MP_T_Red;
    class BNA_KC_120_HEAT_Mag: 20Rnd_120mm_HEAT_MP_T_Red
    {
        displayName = "HEAT Ammunition";
        displayNameShort = "HEAT";
        descriptionShort = "HEAT";
        ammo = "BNA_KC_120_HEAT_Ammo";
    };

    class CLASS(Mag_100rnd_Coax): CLASS(Mag_VehicleBase)
    {
        SCOPE_PUBLIC;
        ammo = QCLASS(Bullet_PlasmaCoax_Blue);
        count = 100;

        nameSound = "mgun";

        initSpeed = 910;
        maxLeadSpeed = 36.1111;
        weight = 126;
        muzzleImpulseFactor[] = {0.05, 0.05};
    };
    class CLASS(Mag_500rnd_Coax): CLASS(Mag_100rnd_Coax)
    {
        count = 500;
    };
    class CLASS(Mag_1000rnd_Coax): CLASS(Mag_100rnd_Coax)
    {
        count = 1000;
    };

    class CLASS(Mag_4000rnd_Gatling_20mm): CLASS(Mag_VehicleBase)
    {
        SCOPE_PUBLIC;
        displayNameShort = "High Energy";
        ammo = QCLASS(Bullet_PlasmaGatling_20mm_Blue);
        count = 4000;

        nameSound = "cannon";

        initSpeed = 1030;
        maxLeadSpeed = 83.3333;
        weight = 126;
    };

    class CLASS(Mag_100rnd_Cannon_Galaxy): CLASS(Mag_VehicleBase)
    {
        SCOPE_PUBLIC;
        displayNameShort = "High Energy";
        ammo = QCLASS(Bullet_PlasmaCannon_Galaxy_Green);
        count = 100;

        nameSound = "cannon";

        initSpeed = 1330;
        maxLeadSpeed = 25;
        muzzleImpulseFactor[] = {0.5, 3};
    };

    class CLASS(Mag_240Rnd_Autocannon_Galaxy_GPR): CLASS(Mag_VehicleBase)
    {
        SCOPE_PUBLIC;
        displayName = "GPR-T";
        displayNameShort = "GPR-T";
        displayNameMFDFormat = "GPR-T";
        ammo = QCLASS(Bullet_PlasmaAutocannon_Galaxy_GPR_Blue);
        count = 240;

        nameSound = "cannon";

        initSpeed = 1035;
        maxLeadSpeed = 83.3333;
        muzzleImpulseFactor[] = {1, 6};
    };

    class CLASS(Mag_160Rnd_Autocannon_Galaxy_APFSDS): CLASS(Mag_VehicleBase)
    {
        SCOPE_PUBLIC;
        displayName = "APFSDS-T";
        displayNameShort = "APFSDS-T";
        displayNameMFDFormat = "APFSDS-T";
        ammo = QCLASS(Bullet_PlasmaAutocannon_Galaxy_APFSDS_Red);
        count = 160;

        nameSound = "cannon";

        initSpeed = 1600;
        maxLeadSpeed = 83.3333;
        muzzleImpulseFactor[] = {0.5, 2};
    };

    class CLASS(Mag_9999Rnd_ATRT): CLASS(Mag_Base)
    {
        SCOPE_HIDDEN;
        displayName = "[KC] AT-RT Turret Battery Pack";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Used In AT-RT";
        ammo = QCLASS(Bullet_PlasmaATRT_Blue);

        picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";

        initSpeed = 400;
        mass = 10;
    };
};