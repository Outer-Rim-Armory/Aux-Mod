#include "CfgPatches.hpp"


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
};


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
    
    class LMG_Minigun;
    class LMG_Minigun_Transport: LMG_Minigun
    {
        class manual;
    };
    class BNA_KC_Mounted_MG: LMG_Minigun_Transport
    {
        displayName = "Machine Gun";
        drySound[] = { "MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10 };
        magazines[] = { "BNA_KC_100rnd_Coax_Mag", "BNA_KC_500rnd_Coax_Mag", "BNA_KC_1000rnd_Coax_Mag" };

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

    class BNA_KC_ATTE_Alarm: BNA_KC_Juggernaut_Alarm
    {
        drySound[] =
        {
            "BNA_KC_Vehicles\VehicleSounds\Data\Audio\ATTE\alarm.ogg",
            5,
            1,
            100
        };
    };
};