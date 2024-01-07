class CfgWeapons
{
    class CannonCore;
    class cannon_120mm: CannonCore
    {
        class player;
    };
    class BNA_KC_120_Tankgun: cannon_120mm
    {
        displayName = "Main Cannon";
        magazines[] =
        {
            "BNA_KC_120_AT_Mag",
            "BNA_KC_120_HEAT_Mag",
            "BNA_KC_120_HE_Mag"
        };
        class player: player
        {
            class StandardSound
            {
                begin1[] =
                {
                    "BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankShotDistant",
                    10,
                    1,
                    1800
                };
                soundBegin[] =
                {
                    "begin1",
                    1
                };
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
    class CLASS(Autocannon_Badger): autocannon_40mm_CTWS
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
                    soundSetShot[] = {QCLASS(SoundSet_Autocannon_Badger_Shot)};
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
                    soundSetShot[] = {QCLASS(SoundSet_Autocannon_Badger_Shot)};
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
    class CLASS(Coax_Badger): LMG_coax
    {
        displayName = "Co-Axial";
        magazines[] =
        {
            QCLASS(Mag_100rnd_Coax),
            QCLASS(Mag_500rnd_Coax),
            QCLASS(Mag_1000rnd_Coax)
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
    class BNA_KC_Mounted_MG: LMG_Minigun_Transport
    {
        displayName = "Machine Gun";
        drySound[] = { "MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10 };
        magazines[] =
        {
            QCLASS(Mag_100rnd_Coax),
            QCLASS(Mag_500rnd_Coax),
            QCLASS(Mag_1000rnd_Coax)
        };

        // Removes the smoke effect from the gun
        class GunParticles {};

        class manual: manual
        {
            sounds[] =  { "StandardSound" };
            class StandardSound
            {
                weaponSoundEffect = "";
                begin1[] = { "BNA_KC_Vehicles\VehicleSounds\Data\Audio\Hornet\Hornet_MG_Fire.wss", 3, 1, 1800 };
                soundBegin[] = { "begin1", 1 };

                closure1[] = { "A3\sounds_f\weapons\gatling\gatling_rotation_short_2", 0.316228, 1, 20 };
                closure2[] = { "A3\sounds_f\weapons\gatling\gatling_rotation_short_3", 0.316228, 1, 20 };
                soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            };
        };
    };

    class missiles_Vorona;
    class BNA_KC_Mounted_MissileLauncher: missiles_Vorona
    {
        displayName = "Missile Launcher";
        drySound[] = { "", 1, 1 };

        class StandardSound
        {
            begin1[] = { "BNA_KC_Vehicles\VehicleSounds\Data\Audio\Hornet\Hornet_AT_Fire.wss", 5, 1, 1100 };
            soundBegin[] = { "begin1", 1 };
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
            QCLASS(Mag_100rnd_Coax)
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
    class CLASS(Gatling_20mm): gatling_20mm_VTOL_01
    {
        displayName = "Blaster Cannon";
        magazines[] =
        {
            QCLASS(Mag_4000rnd_Gatling_20mm)
        };
    };
    class cannon_105mm;
    class cannon_105mm_VTOL_01: cannon_105mm
    {
        class player;
    };
    class CLASS(Cannon_105mm): cannon_105mm_VTOL_01
    {
        displayName = "Heavy Energy Cannon";
        magazines[] =
        {
            QCLASS(Mag_100rnd_Cannon_105mm)
        };
        class player: player
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_Cannon_105mm_Shot)};
            };
        };

    };
    class autocannon_40mm_CTWS;
    class autocannon_40mm_VTOL_01: autocannon_40mm_CTWS
    {
        class HE;
        class AP;
    };
    class CLASS(Autocannon_40mm): autocannon_40mm_VTOL_01
    {
        displayName = "Autocannon";
        class HE: HE
        {
            displayName = "Autocannon";
            magazines[] =
            {
                QCLASS(Mag_240Rnd_Autocannon_GPR)
            };
        };
        class AP: AP
        {
            displayName = "Autocannon";
            magazines[] =
            {
                QCLASS(Mag_160Rnd_Autocannon_APFSDS)
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
    class BNA_KC_ATRT_Turret: 3AS_ATRT_Weapon_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "Keeli Company Aux Team";

        displayName = "AT-RT Turret";
        descriptionShort = "";
        picture = QPATHTOF(weapons\data\ui\ATRT_Turret_ca.paa);

        magazines[] = {"BNA_KC_9999Rnd_ATRT_Turret_Magazine"};
        magazineWell[] = {};
    };

    // Horns & Alarms
    class CarHorn;
    class BNA_KC_Juggernaut_Horn: CarHorn
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

    class BNA_KC_Juggernaut_Alarm: CarHorn
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

    class BNA_KC_Glavenus_Horn: CarHorn
    {
        drySound[] =
        {
            QPATHTOF(sounds\data\audio\glavenus\Horn.wss),
            3,
            1,
            100
        };
    };

    class BNA_KC_Gammoth_Horn: CarHorn
    {
        drySound[] =
        {
            QPATHTOF(sounds\data\audio\gammoth\Horn.wss),
            5,
            1,
            100
        };
    };
};