class CfgWeapons
{
    class CannonCore;
    class cannon_120mm: CannonCore
    {
        class player;
    };
    class CLASS(Cannon_Blitz): cannon_120mm
    {
        displayName = "Main Cannon";
        magazines[] =
        {
            QCLASS(Mag_20Rnd_Cannon_Blitz_HEAT),
            QCLASS(Mag_20Rnd_Cannon_Blitz_HE),
            QCLASS(Mag_20Rnd_Cannon_Blitz_AT)
        };
        class player: player
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_Cannon_Blitz_Shot)};
            };
        };
    };

    class autocannon_Base_F;
    class autocannon_40mm_CTWS: autocannon_Base_F
    {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };
    class CLASS(Autocannon_Reek): autocannon_40mm_CTWS
    {
        muzzles[] = {"HE", "AP"};
        class HE: autocannon_Base_F
        {
            displayName = "$STR_A3_autocannon_40mm_CTWS0";
            magazines[] =
            {
                "60Rnd_40mm_GPR_shells",
                "60Rnd_40mm_GPR_Tracer_Red_shells",
                "60Rnd_40mm_GPR_Tracer_Green_shells",
                "60Rnd_40mm_GPR_Tracer_Yellow_shells"
            };
            class player: player
            {
                dispersion = 0.0015;
                class StandardSound
                {
                    soundSetShot[] = {QCLASS(SoundSet_Autocannon_Reek_Shot)};
                };
            };
            class close: player
            {
                aiBurstTerminable = TRUE;
                showToPlayer = FALSE;
                burst = 3;
                burstRangeMax = 6;
                aiRateOfFire = 1;
                aiRateOfFireDispersion = 2;
                aiRateOfFireDistance = 200;
                minRange = 0;
                minRangeProbab = 0.1;
                midRange = 400;
                midRangeProbab = 0.69999999;
                maxRange = 800;
                maxRangeProbab = 0.80000001;
            };
            class short: close
            {
                aiBurstTerminable = TRUE;
                showToPlayer = FALSE;
                burst = 1;
                burstRangeMax = 5;
                aiRateOfFire = 2;
                aiRateOfFireDispersion = 2;
                aiRateOfFireDistance = 600;
                minRange = 600;
                minRangeProbab = 0.75;
                midRange = 800;
                midRangeProbab = 0.80000001;
                maxRange = 1200;
                maxRangeProbab = 0.80000001;
            };
            class medium: close
            {
                aiBurstTerminable = TRUE;
                showToPlayer = FALSE;
                burst = 1;
                burstRangeMax = 3;
                aiRateOfFire = 2;
                aiRateOfFireDispersion = 3;
                aiRateOfFireDistance = 1000;
                minRange = 1000;
                minRangeProbab = 0.80000001;
                midRange = 1500;
                midRangeProbab = 0.80000001;
                maxRange = 2000;
                maxRangeProbab = 0.69999999;
            };
            class far: close
            {
                aiBurstTerminable = TRUE;
                showToPlayer = FALSE;
                burst = 1;
                burstRangeMax = 1;
                aiRateOfFire = 2;
                aiRateOfFireDispersion = 4;
                aiRateOfFireDistance = 1800;
                minRange = 1800;
                minRangeProbab = 0.74000001;
                midRange=2400;
                midRangeProbab=0.64999998;
                maxRange = 3000;
                maxRangeProbab = 0.050000001;
            };
        };
        class AP: autocannon_Base_F
        {
            displayName = "$STR_A3_autocannon_40mm_CTWS0";
            magazines[] =
            {
                "40Rnd_40mm_APFSDS_shells",
                "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                "40Rnd_40mm_APFSDS_Tracer_Green_shells",
                "40Rnd_40mm_APFSDS_Tracer_Yellow_shells"
            };
            class player: player
            {
                dispersion = 0.00089999998;
                class StandardSound
                {
                    soundSetShot[] = {QCLASS(SoundSet_Autocannon_Reek_Shot)};
                };
            };
            class close: player
            {
                aiBurstTerminable = 1;
                showToPlayer = 0;
                burst = 3;
                burstRangeMax = 6;
                aiRateOfFire = 1;
                aiRateOfFireDispersion = 2;
                aiRateOfFireDistance = 200;
                minRange = 0;
                minRangeProbab = 0.1;
                midRange = 400;
                midRangeProbab = 0.69999999;
                maxRange = 800;
                maxRangeProbab = 0.80000001;
            };
            class short: close
            {
                aiBurstTerminable = TRUE;
                showToPlayer = FALSE;
                burst = 1;
                burstRangeMax = 5;
                aiRateOfFire = 2;
                aiRateOfFireDispersion = 2;
                aiRateOfFireDistance = 600;
                minRange = 600;
                minRangeProbab = 0.75;
                midRange = 800;
                midRangeProbab = 0.80000001;
                maxRange = 1200;
                maxRangeProbab = 0.80000001;
            };
            class medium: close
            {
                aiBurstTerminable = TRUE;
                showToPlayer = FALSE;
                burst = 1;
                burstRangeMax = 3;
                aiRateOfFire = 2;
                aiRateOfFireDispersion = 3;
                aiRateOfFireDistance = 1000;
                minRange = 1000;
                minRangeProbab = 0.80000001;
                midRange = 1500;
                midRangeProbab = 0.80000001;
                maxRange = 2000;
                maxRangeProbab = 0.69999999;
            };
            class far: close
            {
                aiBurstTerminable = TRUE;
                showToPlayer = FALSE;
                burst = 1;
                burstRangeMax = 1;
                aiRateOfFire = 2;
                aiRateOfFireDispersion = 4;
                aiRateOfFireDistance = 1800;
                minRange = 1800;
                minRangeProbab = 0.74000001;
                midRange = 2400;
                midRangeProbab = 0.64999998;
                maxRange = 3000;
                maxRangeProbab = 0.050000001;
            };
        };
    };


    class LMG_RCWS;
    class LMG_coax: LMG_RCWS
    {
        class manual;
    };
    class CLASS(Coax_Reek): LMG_coax
    {
        displayName = "Co-Axial";
        magazines[] =
        {
            QCLASS(Mag_100Rnd_Coax),
            QCLASS(Mag_500Rnd_Coax),
            QCLASS(Mag_1000Rnd_Coax)
        };
        drySound[] = {"\MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};

        class GunParticles {};

        class manual: manual
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_DC15AShot)};
            };
        };
    };

    class LMG_Minigun;
    class LMG_Minigun_Transport: LMG_Minigun
    {
        class manual;
    };
    class CLASS(MachineGun_Hornet): LMG_Minigun_Transport
    {
        displayName = "Machine Gun";
        drySound[] = {"\MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};
        magazines[] =
        {
            QCLASS(Mag_100Rnd_Coax),
            QCLASS(Mag_500Rnd_Coax),
            QCLASS(Mag_1000Rnd_Coax)
        };

        class GunParticles {};

        class manual: manual
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_MachineGun_Hornet_Shot)};

                closure1[] = {"\A3\sounds_f\weapons\gatling\gatling_rotation_short_2", 0.316228, 1, 20};
                closure2[] = {"\A3\sounds_f\weapons\gatling\gatling_rotation_short_3", 0.316228, 1, 20};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };
        };
    };

    class missiles_Vorona;
    class CLASS(Launcher_Hornet): missiles_Vorona
    {
        displayName = "Missile Launcher";
        drySound[] = {"", 1, 1};

        class StandardSound
        {
            soundSetShot[] = {QCLASS(SoundSet_Rocket_Hornet_Shot)};
        };
    };

    class HMG_127_APC;
    class HMG_127_MBT: HMG_127_APC
    {
        class manual;
    };
    class CLASS(Coax_Commander): HMG_127_MBT
    {
        displayName = "Commander Gun";
        magazines[] =
        {
            QCLASS(Mag_100Rnd_Coax)
        };
        class manual: manual
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_DC15AShot)};
            };
        };
    };

    class gatling_20mm_VTOL_01;
    class CLASS(Gatling_Galaxy): gatling_20mm_VTOL_01
    {
        displayName = "Blaster Cannon";
        magazines[] =
        {
            QCLASS(Mag_4000Rnd_Gatling_Galaxy)
        };
    };
    class cannon_105mm;
    class cannon_105mm_VTOL_01: cannon_105mm
    {
        class player;
    };
    class CLASS(Cannon_Galaxy): cannon_105mm_VTOL_01
    {
        displayName = "Heavy Energy Cannon";
        magazines[] =
        {
            QCLASS(Mag_100Rnd_Cannon_Galaxy)
        };
        class player: player
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_Cannon_Galaxy_Shot)};
            };
        };

    };
    class autocannon_40mm_CTWS;
    class autocannon_40mm_VTOL_01: autocannon_40mm_CTWS
    {
        class HE;
        class AP;
    };
    class CLASS(Autocannon_Galaxy): autocannon_40mm_VTOL_01
    {
        displayName = "Autocannon";
        class HE: HE
        {
            displayName = "Autocannon";
            magazines[] =
            {
                QCLASS(Mag_240Rnd_Autocannon_Galaxy_GPR)
            };
        };
        class AP: AP
        {
            displayName = "Autocannon";
            magazines[] =
            {
                QCLASS(Mag_160Rnd_Autocannon_Galaxy_APFSDS)
            };
        };
    };

    class 3AS_Mass_Driver_Cannon;
    class CLASS(Cannon_ATTE_MassDriver): 3AS_Mass_Driver_Cannon
    {
        displayName = "Mass Driver Cannon";
        magazines[] =
        {
            "3AS_30Rnd_Mass_Driver_shells",
            "3AS_10Rnd_Siege_Cannon_HHE_shells"
        };
    };

    class 3AS_ATTE_Turret;
    class CLASS(Turret_ATTE): 3AS_ATTE_Turret
    {
        displayName = "Point Defense Turret";
    };

    class Cannon_30mm_Plane_CAS_02_F;
    class 3AS_ARC_Light_Canon: Cannon_30mm_Plane_CAS_02_F
    {
        class LowROF;
    };
    class CLASS(Cannon_ARC): 3AS_ARC_Light_Canon
    {
        displayName = "Medium Energy Blaster Cannon";

        class LowROF: LowROF
        {
            class StandardSound
            {
                soundSetShot[] = {"3AS_StarfighterBlaster_SoundSet"};
            };
        };
    };

    class 3as_ARC_Heavy_Canon;
    class CLASS(Cannon_ARC_Heavy): 3as_ARC_Heavy_Canon
    {
        displayName = "Heavy Energy Blaster Cannon";
    };

    class 3as_ARC_Light_Canon_Rear;
    class CLASS(Cannon_ARC_Light): 3as_ARC_Light_Canon_Rear
    {
        displayName = "Light Energy Blaster Cannon";
    };

    class CLASS(Cannon_YWing): CLASS(Cannon_ARC)
    {
        displayName = "Heavy Energy Blaster Cannon";
        magazines[] = {"3AS_BTLB_450Rnd_Heavy_Shells"};
        burst = 2;
        reloadTime = 0.12;

        class LowROF: LowROF
        {
            class StandardSound
            {
                soundSetShot[] = {"3AS_YwingBlaster_SoundSet"};
            };
        };
    };

    class 3AS_ATRT_Weapon_F;
    class CLASS(Turret_ATRT): 3AS_ATRT_Weapon_F {
        SCOPE_HIDDEN;
        author = AUTHOR;

        displayName = "AT-RT Turret";
        descriptionShort = "";
        picture = QPATHTOF(weapons\data\ui\ATRT_Turret_ca.paa);

        magazines[] = {QCLASS(Mag_9999Rnd_ATRT)};
        magazineWell[] = {};

        class OpticsModes {
            class Zoom {
                cameraDir = "";
                distanceZoomMax = 200;
                distanceZoomMin = 200;
                memoryPointCamera = "ATRT_Optics1";
                opticsDisablePeripherialVision = 0;
                opticsFlare = 0;
                opticsID = 1;
                opticsPPEffects[] = {"Default"};
                opticsZoomInit = 0.75;
                opticsZoomMax = 1.25;
                opticsZoomMin = 0.25;
                useModelOptics = 0;
                visionMode[] = {};
            };
        };
    };

    class 3AS_BARC_Repeater: CannonCore
    {
        class manual;
        class short;
        class close;
        class medium;
        class far;
    };
    class CLASS(Turret_BARC): 3AS_BARC_Repeater
    {
        author = AUTHOR;

        class manual: manual
        {
            reloadTime = 0.2;
        };
        class short: short
        {
            reloadTime = 0.2;
        };
        class close: close
        {
            reloadTime = 0.2;
        };
        class medium: medium
        {
            reloadTime = 0.2;
        };
        class far: far
        {
            reloadTime = 0.2;
        };
    };

    class CarHorn;
    class CLASS(Horn_Juggernaut): CarHorn
    {
        displayName = "Juggernaut Horn";
        drySound[] =
        {
            QPATHTOF(sounds\data\audio\juggernaut\Horn0.ogg),
            5,
            1,
            500
        };
    };

    class CLASS(Alarm_Juggernaut): CarHorn
    {
        displayName = "Alarm";
        drySound[] =
        {
            QPATHTOF(sounds\data\audio\atte\Alarm.ogg),
            5,
            1,
            400
        };
    };

    class CLASS(Horn_Glavenus): CarHorn
    {
        drySound[] =
        {
            QPATHTOF(sounds\data\audio\glavenus\Horn.wss),
            3,
            1,
            100
        };
    };

    class CLASS(Horn_Gammoth): CarHorn
    {
        drySound[] =
        {
            QPATHTOF(sounds\data\audio\gammoth\Horn.wss),
            5,
            1,
            100
        };
    };

    class 3AS_Mortar_82mm: CannonCore
    {
        class Single1;
        class Burst1;
    };
    class CLASS(Mortar_Turret_Base): 3AS_Mortar_82mm
    {
        SCOPE_PRIVATE;
        MORTAR_SOUND_FIRE;

        class Single1: Single1
        {
            artilleryCharge = 0.35;
            MORTAR_SOUND_FIRE;
        };
        class Single2: Single1
        {
            displayName = "$STR_A3_mortar_82mm_Burst20";
            artilleryCharge = 0.7;
        };
        class Single3: Single1
        {
            displayName = "$STR_A3_mortar_82mm_Single30";
            artilleryCharge = 1;
        };

        class Burst1: Burst1
        {
            MORTAR_SOUND_FIRE;
        };
        class Burst2: Burst1
        {
            displayName = "$STR_A3_mortar_82mm_Burst20";
            artilleryCharge = 0.7;
        };
        class Burst3: Burst1
        {
            displayName = "$STR_A3_mortar_82mm_Single30";
            artilleryCharge = 1;
        };
    };
    class CLASS(Mortar_M190_Turret): CLASS(Mortar_Turret_Base)
    {
        SCOPE_PUBLIC;
        displayName = "M-190 Mortar System";
        magazines[] =
        {
            QCLASS(Mag_6Rnd_Mortar_82mm_HE),
            QCLASS(Mag_6Rnd_Mortar_SmokeWhite),
            QCLASS(Mag_6Rnd_Mortar_SmokeBlue),
            QCLASS(Mag_6Rnd_Mortar_SmokeRed)
        };

        class Single1: Single1
        {
            artilleryCharge = M190_RANGE_SMALL;
            reloadTime = 4;
        };
        class Single2: Single2
        {
            artilleryCharge = M190_RANGE_MEDIUM;
            showToPlayer = FALSE;
            reloadTime = 4;
        };
        class Single3: Single3
        {
            artilleryCharge = M190_RANGE_FAR;
            reloadTime = 4;
        };

        class Burst1: Burst1
        {
            artilleryCharge = M190_RANGE_SMALL;
            reloadTime = 4;
        };
        class Burst2: Burst2
        {
            artilleryCharge = M190_RANGE_MEDIUM;
            reloadTime = 4;
        };
        class Burst3: Burst3
        {
            artilleryCharge = M190_RANGE_FAR;
            reloadTime = 4;
        };
    };
};