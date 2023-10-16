#include "CfgPatches.hpp"
#include "CfgSoundSets.hpp"


class CfgAmmo
{
    class Sh_120mm_APFSDS_Tracer_Red;
    class BNA_KC_120_AT_Ammo: Sh_120mm_APFSDS_Tracer_Red
    {
        //simulation = "shotShell";
        model = "swlw_main\Effects\laser_red.p3d";
        effectfly = "SWLW_plasma_red";
        coefgravity = 0;
    };

	class Sh_120mm_HE_Tracer_Red;
    class BNA_KC_120_HE_Ammo: Sh_120mm_HE_Tracer_Red
    {
        //simulation = "shotShell";
        model = "swlw_main\Effects\laser_red.p3d";
        effectfly = "SWLW_plasma_red";
        coefgravity = 0;
    };

    class Sh_120mm_HEAT_MP_T_Red;
    class BNA_KC_120_HEAT_Ammo: Sh_120mm_HEAT_MP_T_Red
    {
        //simulation = "shotShell";
        model = "swlw_main\Effects\laser_red.p3d";
        effectfly = "SWLW_plasma_red";
        coefgravity = 0;
    };

    class B_127x99_Ball;
    class BNA_KC_Coax_Ammo: B_127x99_Ball
    {
        model = "ls_weapons_core\Effects\laser_blue.p3d";
        effectfly = "ls_plasma_blue";
        coefgravity = 0;
    };

	class B_20mm_Tracer_Red;
	class BNA_KC_20mm_Ammo: B_20mm_Tracer_Red
	{
		model = "ls_weapons_core\Effects\laser_blue.p3d";
        effectfly = "ls_plasma_blue";
        coefgravity = 0;
	};
	class Sh_105mm_HEAT_MP;
	class BNA_KC_105mm_Ammo: Sh_105mm_HEAT_MP
	{
		model = "3as\3AS_Weapons\Data\tracer_shell_Green.p3d";
        coefgravity = 0;
	};
	class B_40mm_GPR_Tracer_Red;
	class BNA_KC_40mm_GPR_Ammo: B_40mm_GPR_Tracer_Red
	{
		model = "ls_weapons_core\Effects\laser_blue.p3d";
        effectfly = "ls_plasma_blue";
        coefgravity = 0;
	};
	class B_40mm_APFSDS_Tracer_Red;
	class BNA_KC_40mm_APFSDS_Ammo: B_40mm_APFSDS_Tracer_Red
	{
        model = "swlw_main\Effects\laser_red.p3d";
        effectfly = "SWLW_plasma_red";
        coefgravity = 0;
	};

    /*
    class 3AS_ATRT_bluePlasma;
    class BNA_KC_ATRT_Turret_Ammo: 3AS_ATRT_bluePlasma
    {
        caliber = 6; // How much geometry the bullet can pass through
        hit = 120;      // Damage when bullet speed is >= typicalSpeed
        typicalSpeed = 400;
        coefgravity = 0;

        model = "\MRC\JLTS\weapons\Core\effects\laser_blue.p3d";
        effectfly = "JLTS_plasma_blue";
    };
    */
};
// model = "3as\3AS_Weapons\Data\tracer_shell_Green.p3d";

class CfgMagazines
{
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

    class 100Rnd_127x99_mag_Tracer_Red;
    class BNA_KC_100rnd_Coax_Mag: 100Rnd_127x99_mag_Tracer_Red
    {
        ammo = "BNA_KC_Coax_Ammo";
        displayName = "100rnd Mag";
        displayNameShort = "100rnd Mag";
        descriptionShort = "100rnd Mag";
        tracersEvery=1;
    };
    class BNA_KC_500rnd_Coax_Mag: BNA_KC_100rnd_Coax_Mag
    {
        displayName = "500rnd Mag";
        displayNameShort = "500rnd Mag";
        descriptionShort = "500rnd Mag";

        count = 500;
    };
    class BNA_KC_1000rnd_Coax_Mag: BNA_KC_100rnd_Coax_Mag
    {
        displayName = "1000rnd Mag";
        displayNameShort = "1000rnd Mag";
        descriptionShort = "1000rnd Mag";

        count = 1000;
    };

	class 4000Rnd_20mm_Tracer_Red_shells;
	class BNA_KC_4000rnd_20mm: 4000Rnd_20mm_Tracer_Red_shells
	{
		ammo = "BNA_KC_20mm_Ammo";
		tracersEvery=1;
	};
	class 100Rnd_105mm_HEAT_MP;
	class BNA_KC_100rnd_105mm: 100Rnd_105mm_HEAT_MP
	{
		ammo = "BNA_KC_105mm_Ammo";
		tracersEvery=1;
	};
	class 240Rnd_40mm_GPR_Tracer_Red_shells;
	class BNA_KC_40mm_GPR_240rnd: 240Rnd_40mm_GPR_Tracer_Red_shells
	{
		ammo = "BNA_KC_40mm_GPR_Ammo";
		tracersEvery=1;
	};
	class 160Rnd_40mm_APFSDS_Tracer_Red_shells;
	class BNA_KC_40mm_APFSDS_160rnd: 160Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		ammo = "BNA_KC_40mm_APFSDS_Ammo";
		tracersEvery=1;
	};

    /*
    class 3AS_9999Rnd_ATRT_Mag;
    class BNA_KC_9999Rnd_ATRT_Turret_Magazine: 3AS_9999Rnd_ATRT_Mag
    {
        ammo = "BNA_KC_ATRT_Turret_Ammo";
        displayName = "[KC] AT-RT Turret Battery Pack";
        displayNameShort = "";
        descriptionShort = "Standard battery pack for the AT-RT";
    };
    */
};


class CfgWeapons
{
	class CannonCore;
	class cannon_120mm: CannonCore { class player; };
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
	class BNA_KC40mm_CTWS: autocannon_40mm_CTWS
	{
		muzzles[] =
		{
			"HE",
			"AP"
		};
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
				sounds[] =
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[] =
					{
						"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCCannon",
						1.9952624,
						1,
						1500
					};
					soundBegin[] =
					{
						"begin1",
						0.33000001
					};
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
				aiBurstTerminable = 1;
				showToPlayer = 0;
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
				aiBurstTerminable = 1;
				showToPlayer = 0;
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
				aiBurstTerminable = 1;
				showToPlayer = 0;
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
				sounds[] =
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[] =
					{
						"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCCannon",
						1.9952624,
						1,
						1500
					};
					soundBegin[] =
					{
						"begin1",
						0.33000001
					};
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
				aiBurstTerminable = 1;
				showToPlayer = 0;
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
				aiBurstTerminable = 1;
				showToPlayer = 0;
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
				aiBurstTerminable = 1;
				showToPlayer = 0;
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
	class BNA_KC_Coax: LMG_coax
	{
		displayName = "Co-Axial";
		magazines[] =
        {
            "BNA_KC_100rnd_Coax_Mag",
            "BNA_KC_500rnd_Coax_Mag",
            "BNA_KC_1000rnd_Coax_Mag"
        };

        class GunParticles {};

		class manual: manual
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"BNA_KC_Weapons\DC15A\Data\Audio\DC15A_Fire1.wss",
					1,
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
            "BNA_KC_100rnd_Coax_Mag",
            "BNA_KC_500rnd_Coax_Mag",
            "BNA_KC_1000rnd_Coax_Mag"
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
	class BNA_KC_CommanderGun: HMG_127_MBT
	{
		displayName = "Commander Gun";
		magazines[] =
		{
			"BNA_KC_100rnd_Coax_Mag"
		};
		class manual: manual
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
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

	class gatling_20mm_VTOL_01;
	class BNA_KC_Gatling_20mm: gatling_20mm_VTOL_01
	{
		magazines[]=
		{
			"BNA_KC_4000rnd_20mm"
		};
	};
	class cannon_105mm;
	class cannon_105mm_VTOL_01: cannon_105mm
	{
		class player;
	};
	class BNA_KC_105mm: cannon_105mm_VTOL_01
	{
		magazines[]=
		{
			"BNA_KC_100rnd_105mm"
		};
		class player: player
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
					0.316228,
					1,
					20
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",
					0.316228,
					1,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				begin2[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				begin3[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				begin4[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				begin5[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				begin6[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				begin7[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				begin8[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				begin9[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				begin10[]=
				{
					"3AS\3as_static\XX10\data\SFX\gatcannon",
					0.94999999,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1,
					"begin5",
					0.1,
					"begin6",
					0.1,
					"begin7",
					0.1,
					"begin8",
					0.1,
					"begin9",
					0.1,
					"begin10",
					0.1
				};
			};
		};

	};
	class autocannon_40mm_CTWS;
	class autocannon_40mm_VTOL_01: autocannon_40mm_CTWS
	{
		class HE;
		class AP;
	};
	class BNA_KC_40mm_VTOL: autocannon_40mm_VTOL_01
	{
		class HE: HE
		{
			magazines[]=
			{
				//"240Rnd_40mm_GPR_Tracer_Red_shells"
				"BNA_KC_40mm_GPR_240rnd"
			};
		};
		class AP: AP
		{
			magazines[]=
			{
				//"160Rnd_40mm_APFSDS_Tracer_Red_shells"
				"BNA_KC_40mm_APFSDS_160rnd"
			};
		};
	};


    /*
    class 3AS_ATRT_Weapon_F;
    class BNA_KC_ATRT_Turret: 3AS_ATRT_Weapon_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        displayName = "AT-RT Turret";
        descriptionShort = "";
        picture = "\BNA_KC_Vehicles\VehicleWeapons\Data\Texture\UI\Weapon_ATRT_UI.paa";

        magazines[] = {"BNA_KC_9999Rnd_ATRT_Turret_Magazine"};
        magazineWell[] = {};
    };
    */

    // Horns & Alarms
    class CarHorn;
    class BNA_KC_Juggernaut_Horn: CarHorn
    {
        // TODO: Random firing sound
        displayName = "Juggernaut Horn";
        drySound[] =
        {
            "BNA_KC_Vehicles\VehicleSounds\Data\Audio\Juggernaut\horn_0.ogg", // soundPath
            5,          // soundVolume
            1,          // soundPitch
            500         // maxDistance
        };
    };

    class BNA_KC_Juggernaut_Alarm: CarHorn
    {
        displayName = "Alarm";
        drySound[] =
        {
            "BNA_KC_Vehicles\VehicleSounds\Data\Audio\ATTE\alarm.ogg",
            5,
            1,
            400
        };
    };

    class BNA_KC_Glavenus_Horn: CarHorn
    {
        drySound[] =
        {
            "BNA_KC_Vehicles\VehicleSounds\Data\Audio\Glavenus\horn.wss",
            3,
            1,
            100
        };
    };

    class BNA_KC_Gammoth_Horn: CarHorn
    {
        drySound[] =
        {
            "BNA_KC_Vehicles\VehicleSounds\Data\Audio\Gammoth\horn.wss",
            5,
            1,
            100
        };
    };
};