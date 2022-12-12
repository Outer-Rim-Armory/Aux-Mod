#include "cfgPatches.hpp"




class CfgAmmo
{
	class Sh_120mm_APFSDS_Tracer_Red;
	class Sh_120mm_HEAT_MP_T_Red;
	class Sh_120mm_HE_Tracer_Red;
	
	class BNA_KC_120_AT_Ammo: Sh_120mm_APFSDS_Tracer_Red
	{
		//simulation = "shotShell";
		model="swlw_main\Effects\laser_red.p3d";
		effectfly="SWLW_plasma_red";
	};
	class BNA_KC_120_HEAT_Ammo: Sh_120mm_HEAT_MP_T_Red
	{
		//simulation = "shotShell";
		model="swlw_main\Effects\laser_red.p3d";
		effectfly="SWLW_plasma_red";
	};
	class BNA_KC_120_HE_Ammo: Sh_120mm_HE_Tracer_Red
	{
		//simulation = "shotShell";
		model="swlw_main\Effects\laser_red.p3d";
		effectfly="SWLW_plasma_red";
	};
	
	class B_127x99_Ball;
	
	class BNA_KC_Coax_Ammo: B_127x99_Ball
	{
		model="ls_weapons_core\Effects\laser_blue.p3d";
		effectfly="ls_plasma_blue";
	};
};
class CfgMagazines
{
	class 20Rnd_120mm_APFSDS_shells_Tracer_Red;
	class 20Rnd_120mm_HEAT_MP_T_Red;
	class 30Rnd_120mm_HE_shells_Tracer_Red;
	
	class BNA_KC_120_AT_Mag: 20Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		displayName = "AP Ammunition";
		displayNameShort = "AP";
		descriptionShort = "AP";
		ammo = "BNA_KC_120_AT_Ammo";
	};
	class BNA_KC_120_HEAT_Mag: 20Rnd_120mm_HEAT_MP_T_Red
	{
		displayName = "HEAT Ammunition";
		displayNameShort = "HEAT";
		descriptionShort = "HEAT";
		ammo = "BNA_KC_120_HEAT_Ammo";
	};
	class BNA_KC_120_HE_Mag: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		displayName = "HE Ammunition";
		displayNameShort = "HE";
		descriptionShort = "HE";
		count = 20;
		ammo = "BNA_KC_120_HE_Ammo";
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
};
class CfgWeapons
{
	class CannonCore;
	class cannon_120mm: CannonCore
	{
		class player;
	};
	class BNA_KC_120_Tankgun: cannon_120mm
	{
		displayName="Main Cannon";
		magazines[]=
		{
			"BNA_KC_120_AT_Mag",
			"BNA_KC_120_HEAT_Mag",
			"BNA_KC_120_HE_Mag"
		};
		class player: player
		{
			class StandardSound
			{
				begin1[]=
				{
					"BNA_KC_Vehicles\Data\Audio\TankShotDistant",
					10,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
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
		displayName="Co-Axial";
		magazines[]=
		{
			"BNA_KC_100rnd_Coax_Mag"
		};
		class manual: manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	
	
	class HMG_127_MBT: LMG_RCWS
	{
		class manual;
	};
	class BNA_KC_CommanderGun: HMG_127_MBT
	{
		displayName="Commander Gun";
		magazines[]=
		{
			"BNA_KC_100rnd_Coax_Mag"
		};
		class manual: manual
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
};

class CfgSoundShaders
{
	
	class MBT_01_Engine_RPM0_EXT_SoundShader;
	class MBT_01_Engine_RPM1_EXT_SoundShader;
	class MBT_01_Engine_RPM2_EXT_SoundShader;
	class MBT_01_Engine_RPM3_EXT_SoundShader;
	class MBT_01_Engine_RPM4_EXT_SoundShader;
	class MBT_01_Engine_RPM5_EXT_SoundShader;
	class MBT_01_Engine_RPM6_EXT_SoundShader;
	class MBT_01_Engine_RPM0_INT_SoundShader;
	class MBT_01_Engine_RPM1_INT_SoundShader;
	class MBT_01_Engine_RPM2_INT_SoundShader;
	class MBT_01_Engine_RPM3_INT_SoundShader;
	class MBT_01_Engine_RPM4_INT_SoundShader;
	class MBT_01_Engine_RPM5_INT_SoundShader;
	class MBT_01_Engine_RPM6_INT_SoundShader;
	
	class BNA_KC_Engine_RPM0_EXT_SoundShader: MBT_01_Engine_RPM0_EXT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineExt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - 0))";
		volume="engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,	3000]) + 0.2*thrust) * (rpm factor [0.15 *1400, (0.15 *1400 + 0.1 *(1400-0.15 *1400))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2000 - 1400)/(3000 - 1400) - (((2000 - 1400)/(3000 - 1400) - 0) - (1.2 * ((2000 - 1400)/(3000 - 1400) - 0)))/2, 0])";
		range="6*210";
	};
	class BNA_KC_Engine_RPM1_EXT_SoundShader: MBT_01_Engine_RPM1_EXT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineExt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2000 - 1400)/(3000 - 1400)))";
		volume="engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,	3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[0, (2000 - 1400)/(3000 - 1400) - (((2000 - 1400)/(3000 - 1400) - 0) - (1.2 * ((2000 - 1400)/(3000 - 1400) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2200 - 1400)/(3000 - 1400) - (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2, (2000 - 1400)/(3000 - 1400) + (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2])";
		range="6*215";
	};
	class BNA_KC_Engine_RPM2_EXT_SoundShader: MBT_01_Engine_RPM2_EXT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineExt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2200 - 1400)/(3000 - 1400)))";
		volume="engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,	3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2000 - 1400)/(3000 - 1400) + (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2, (2200 - 1400)/(3000 - 1400) - (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2400 - 1400)/(3000 - 1400) - (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2, (2200 - 1400)/(3000 - 1400) + (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2])";
		range="6*220";
	};
	class BNA_KC_Engine_RPM3_EXT_SoundShader: MBT_01_Engine_RPM3_EXT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineExt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2400 - 1400)/(3000 - 1400)))";
		volume="engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,	3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2200 - 1400)/(3000 - 1400) + (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2, (2400 - 1400)/(3000 - 1400) - (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2600 - 1400)/(3000 - 1400) - (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2, (2400 - 1400)/(3000 - 1400) + (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2])";
		range="6*225";
	};
	class BNA_KC_Engine_RPM4_EXT_SoundShader: MBT_01_Engine_RPM4_EXT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineExt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2600 - 1400)/(3000 - 1400)))";
		volume="engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,	3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2400 - 1400)/(3000 - 1400) + (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2, (2600 - 1400)/(3000 - 1400) - (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2800 - 1400)/(3000 - 1400) - (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2, (2600 - 1400)/(3000 - 1400) + (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2])";
		range="6*230";
	};
	class BNA_KC_Engine_RPM5_EXT_SoundShader: MBT_01_Engine_RPM5_EXT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineExt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2800 - 1400)/(3000 - 1400)))";
		volume="engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,	3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2600 - 1400)/(3000 - 1400) + (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2, (2800 - 1400)/(3000 - 1400) - (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(3000 - 1400)/(3000 - 1400) - (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2, (2800 - 1400)/(3000 - 1400) + (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2])";
		range="6*235";
	};
	class BNA_KC_Engine_RPM6_EXT_SoundShader: MBT_01_Engine_RPM6_EXT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineExt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (3000 - 1400)/(3000 - 1400)))";
		volume="engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,	3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2800 - 1400)/(3000 - 1400) + (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2, (3000 - 1400)/(3000 - 1400) - (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2])";
		range="6*240";
	};
	class BNA_KC_Engine_RPM0_INT_SoundShader: MBT_01_Engine_RPM0_INT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineInt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - 0))";
		volume="engineOn * 1 * 1.2 * (rpm factor [0.15 *1400, (0.15 *1400 + 0.1 *(1400-0.15 *1400))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2000 - 1400)/(3000 - 1400) - (((2000 - 1400)/(3000 - 1400) - 0) - (1.2 * ((2000 - 1400)/(3000 - 1400) - 0)))/2, 0])";
		range="6*210";
	};
	class BNA_KC_Engine_RPM1_INT_SoundShader: MBT_01_Engine_RPM1_INT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineInt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2000 - 1400)/(3000 - 1400)))";
		volume="engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[0, (2000 - 1400)/(3000 - 1400) - (((2000 - 1400)/(3000 - 1400) - 0) - (1.2 * ((2000 - 1400)/(3000 - 1400) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2200 - 1400)/(3000 - 1400) - (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2, (2000 - 1400)/(3000 - 1400) + (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2])";
		range="6*215";
	};
	class BNA_KC_Engine_RPM2_INT_SoundShader: MBT_01_Engine_RPM2_INT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineInt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2200 - 1400)/(3000 - 1400)))";
		volume="engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2000 - 1400)/(3000 - 1400) + (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2, (2200 - 1400)/(3000 - 1400) - (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2400 - 1400)/(3000 - 1400) - (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2, (2200 - 1400)/(3000 - 1400) + (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2])";
		range="6*220";
	};
	class BNA_KC_Engine_RPM3_INT_SoundShader: MBT_01_Engine_RPM3_INT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineInt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2400 - 1400)/(3000 - 1400)))";
		volume="engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2200 - 1400)/(3000 - 1400) + (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2, (2400 - 1400)/(3000 - 1400) - (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2600 - 1400)/(3000 - 1400) - (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2, (2400 - 1400)/(3000 - 1400) + (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2])";
		range="6*225";
	};
	class BNA_KC_Engine_RPM4_INT_SoundShader: MBT_01_Engine_RPM4_INT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineInt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2600 - 1400)/(3000 - 1400)))";
		volume="engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2400 - 1400)/(3000 - 1400) + (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2, (2600 - 1400)/(3000 - 1400) - (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(2800 - 1400)/(3000 - 1400) - (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2, (2600 - 1400)/(3000 - 1400) + (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2])";
		range="6*230";
	};
	class BNA_KC_Engine_RPM5_INT_SoundShader: MBT_01_Engine_RPM5_INT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineInt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (2800 - 1400)/(3000 - 1400)))";
		volume="engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2600 - 1400)/(3000 - 1400) + (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2, (2800 - 1400)/(3000 - 1400) - (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor [(3000 - 1400)/(3000 - 1400) - (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2, (2800 - 1400)/(3000 - 1400) + (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2])";
		range="6*235";
	};
	class BNA_KC_Engine_RPM6_INT_SoundShader: MBT_01_Engine_RPM6_INT_SoundShader
	{
		samples[]=
		{
			{
				"BNA_KC_Vehicles\Data\Audio\TankEngineInt",
				1
			}
		};
		frequency="1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) - (3000 - 1400)/(3000 - 1400)))";
		volume="engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,	3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,	3000])) factor[(2800 - 1400)/(3000 - 1400) + (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2, (3000 - 1400)/(3000 - 1400) - (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2])";
		range="6*240";
	};
};

class CfgSoundSets
{
	class MBT_01_Engine_RPM0_EXT_SoundSet;
	class MBT_01_Engine_RPM1_EXT_SoundSet;
	class MBT_01_Engine_RPM2_EXT_SoundSet;
	class MBT_01_Engine_RPM3_EXT_SoundSet;
	class MBT_01_Engine_RPM4_EXT_SoundSet;
	class MBT_01_Engine_RPM5_EXT_SoundSet;
	class MBT_01_Engine_RPM6_EXT_SoundSet;
	class MBT_01_Engine_RPM0_INT_SoundSet;
	class MBT_01_Engine_RPM1_INT_SoundSet;
	class MBT_01_Engine_RPM2_INT_SoundSet;
	class MBT_01_Engine_RPM3_INT_SoundSet;
	class MBT_01_Engine_RPM4_INT_SoundSet;
	class MBT_01_Engine_RPM5_INT_SoundSet;
	class MBT_01_Engine_RPM6_INT_SoundSet;
	
	class BNA_KC_Engine_RPM0_EXT_SoundSet: MBT_01_Engine_RPM0_EXT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM0_EXT_SoundShader"
		};
		sound3DProcessingType="VehicleExt_3DProcessingType";
		posOffset[]={0,0,-4};
		volumeFactor=0.85000002;
	};
	class BNA_KC_Engine_RPM1_EXT_SoundSet: MBT_01_Engine_RPM1_EXT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM1_EXT_SoundShader"
		};
		sound3DProcessingType="VehicleExt_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,-4};
		volumeFactor=0.94999999;
	};
	class BNA_KC_Engine_RPM2_EXT_SoundSet: MBT_01_Engine_RPM2_EXT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM2_EXT_SoundShader"
		};
		sound3DProcessingType="VehicleExt_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,-4};
		volumeFactor=1.05;
	};
	class BNA_KC_Engine_RPM3_EXT_SoundSet: MBT_01_Engine_RPM3_EXT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM3_EXT_SoundShader"
		};
		sound3DProcessingType="VehicleExt_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,-4};
		volumeFactor=1.1;
	};
	class BNA_KC_Engine_RPM4_EXT_SoundSet: MBT_01_Engine_RPM4_EXT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM4_EXT_SoundShader"
		};
		sound3DProcessingType="VehicleExt_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,-4};
		volumeFactor=1.15;
	};
	class BNA_KC_Engine_RPM5_EXT_SoundSet: MBT_01_Engine_RPM5_EXT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM5_EXT_SoundShader"
		};
		sound3DProcessingType="VehicleExt_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,-4};
		volumeFactor=1.2;
	};
	class BNA_KC_Engine_RPM6_EXT_SoundSet: MBT_01_Engine_RPM6_EXT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM6_EXT_SoundShader"
		};
		sound3DProcessingType="VehicleExt_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,-4};
		volumeFactor=1.3;
	};
	class BNA_KC_Engine_RPM0_INT_SoundSet: MBT_01_Engine_RPM0_INT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM0_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		posOffset[]={0,0,0};
		volumeFactor=0.85000002;
	};
	class BNA_KC_Engine_RPM1_INT_SoundSet: MBT_01_Engine_RPM1_INT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM1_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,0};
		volumeFactor=0.94999999;
	};
	class BNA_KC_Engine_RPM2_INT_SoundSet: MBT_01_Engine_RPM2_INT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM2_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,0};
		volumeFactor=1.05;
	};
	class BNA_KC_Engine_RPM3_INT_SoundSet: MBT_01_Engine_RPM3_INT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM3_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,0};
		volumeFactor=1.1;
	};
	class BNA_KC_Engine_RPM4_INT_SoundSet: MBT_01_Engine_RPM4_INT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM4_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,0};
		volumeFactor=1.15;
	};
	class BNA_KC_Engine_RPM5_INT_SoundSet: MBT_01_Engine_RPM5_INT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM5_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,0};
		volumeFactor=1.2;
	};
	class BNA_KC_Engine_RPM6_INT_SoundSet: MBT_01_Engine_RPM6_INT_SoundSet
	{
		soundShaders[]=
		{
			"BNA_KC_Engine_RPM6_INT_SoundShader"
		};
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
		volumeCurve="InverseSquare3Curve";
		posOffset[]={0,0,0};
		volumeFactor=1.3;
	};
};

class CfgVehicles
{
	//-----------------------------------------------------
	// LAATs
	//-----------------------------------------------------
	
	class lsd_heli_laati;
	class lsd_heli_laatc;
	class lsd_heli_laati_ab;
	class lsd_heli_laati_transport;
	
	// LAAT Gunship
	// Base
	class BNA_KC_Standard_laati: lsd_heli_laati
	{
		armor = 200;
		displayName = "[KC] Standard LAAT Gunship w/ Pylons";
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_LAATS";
		crew = "BNA_KC_Unit_Pilot";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Body1.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Body2.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Door1.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Door2.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Door3.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Wings.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Cockpits.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		textureList[] = {};
		weapons[] = 
		{
			"ls_laat_gun",
			"ls_laat_gun_2",
			"ls_laat_DAR",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[] = 
		{
			"200rnd_laat_he_mag",
			"200rnd_laat_he_mag",
			"200rnd_laat_apfsds_mag",
			"200rnd_laat_apfsds_mag",
			"12rnd_missiles",
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
	};
	
	// LAAT Transport
	// Base
	class BNA_KC_Standard_laati_transport: lsd_heli_laati_transport
	{
		armor = 200;
		displayName = "[KC] Standard LAAT Transport";
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_LAATS";
		crew = "BNA_KC_Unit_Pilot";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Body1.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Body2.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Door1.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Door2.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Door3.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Wings.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Standard\BNA_KC_LAAT_Standard_Cockpits.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		textureList[] = {};
	};
	
	// LAAT C
	// Base
	class BNA_KC_Standard_laatc: lsd_heli_laatc
	{
		displayName = "[KC] Standard LAAT/C";
		faction="BNA_KCFac";
		editorSubcategory="BNA_KCSub_LAATS";
		crew = "BNA_KC_Unit_Pilot";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Data\Textures\LAATC\BNA_KC_LAATC_Auxiliary.paa",
			"BNA_KC_Vehicles\Data\Textures\LAATC\BNA_KC_LAATC_Cockpit.paa",
			"lsd_vehicles_heli\laatc\data\glass_ca.paa",
			"BNA_KC_Vehicles\Data\Textures\LAATC\BNA_KC_LAATC_Hull.paa",
			"BNA_KC_Vehicles\Data\Textures\LAATC\BNA_KC_LAATC_Wings.paa"
		};
		textureList[] = {};
	};
	
	//-----------------------------------------------------
	// Custom LAATs
	//-----------------------------------------------------
	
	// Dexus
	// Pylons
	class BNA_KC_Dexus_laati: BNA_KC_Standard_laati
	{
		displayName = "[KC] Dexus LAAT Gunship w/ Pylons";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Body1.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Body2.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Door1.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Door2.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Door3.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Wings.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Cockpits.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
	};
	// Transport
	class BNA_KC_Dexus_laati_transport: BNA_KC_Standard_laati_transport
	{
		displayName = "[KC] Dexus LAAT Transport";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Body1.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Body2.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Door1.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Door2.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Door3.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Wings.paa",
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"BNA_KC_Vehicles\Data\Textures\LAAT\Customs\Dexus\BNA_KC_LAAT_Dexus_Cockpits.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
	};
	
	
	//-----------------------------------------------------
	// The scary zone
	//-----------------------------------------------------
	// BNA_KCFac
	// BNA_KCSub_LAATS
	// BNA_KCSub_GVics
	// ["All","AllVehicles","Land","LandVehicle","Tank","Tank_F","MBT_01_base_F","B_MBT_01_base_F","B_MBT_01_cannon_F"]
	// weapons[] = {"cannon_120mm","ACE_LMG_coax_MAG58_mem3"};
	// magazines[] = {"24Rnd_120mm_APFSDS_shells_Tracer_Red","12Rnd_120mm_HE_shells_Tracer_Red","12Rnd_120mm_HEAT_MP_T_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Red"};
	
	// weapons[] = {"3AS_ATTE_AT_Turret","SmokeLauncher"};
	// magazines[] = {"3AS_10rnd_ATTE_AT_Mag","3AS_10rnd_ATTE_AT_Mag","3AS_10rnd_ATTE_AT_Mag","3AS_10rnd_ATTE_HE_Mag","3AS_10rnd_ATTE_HE_Mag","3AS_10rnd_ATTE_HE_Mag","SmokeLauncherMag"};
	
	
	class Tank_F;
	class MBT_01_base_F: Tank_F
	{
		class Turrets;
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
		class AnimationSources;
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon;
			class muzzle_rot_cannon;
			class muzzle_rot_cmdr;
			class recoil_source;
			class commander_gun_recoil;
		};
	};
	class BNA_KC_MBT_Slammer: B_MBT_01_TUSK_F
	{
		faction = "BNA_KCFac";
		editorSubcategory = "BNA_KCSub_GVics";
		displayName = "[KC] Blitz Assault Tank";
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Data\Textures\Blitz\BNA_KC_Blitz_Body_CO.paa",
			"BNA_KC_Vehicles\Data\Textures\Blitz\BNA_KC_Blitz_tow_CO.paa",
			"BNA_KC_Vehicles\Data\Textures\Blitz\BNA_KC_Blitz_addons_CO.paa",
			"BNA_KC_Vehicles\Data\Textures\Blitz\BNA_KC_Blitz_Camonet_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"BNA_KC_CommanderGun",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"BNA_KC_100rnd_Coax_Mag",
							"BNA_KC_100rnd_Coax_Mag",
							"BNA_KC_100rnd_Coax_Mag",
							"BNA_KC_100rnd_Coax_Mag",
							"SmokeLauncherMag"
						};
					};
				};
				
				// gunBeg = "Usti hlavne";
				// gunEnd = "Konec hlavne";
				// memoryPointGun[] = {"usti hlavne3"};
				weapons[]=
				{
					"BNA_KC_120_Tankgun",
					"BNA_KC_Coax"
				};
				magazines[]=
				{
					"BNA_KC_120_AT_Mag",
					"BNA_KC_120_HEAT_Mag",
					"BNA_KC_120_HE_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon: muzzle_hide_cannon
			{
				source="reload";
				weapon="BNA_KC_120_Tankgun";
			};
			class muzzle_rot_cannon: muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="BNA_KC_120_Tankgun";
			};
			class muzzle_rot_cmdr: muzzle_rot_cmdr
			{
				source="ammorandom";
				weapon="HMG_127_MBT";
			};
			class recoil_source: recoil_source
			{
				source="reload";
				weapon="BNA_KC_120_Tankgun";
			};
			class commander_gun_recoil: commander_gun_recoil
			{
				source="reload";
				weapon="HMG_127_MBT";
			};
		};
		//soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\armor\MBT_01\MBT_01_Engine_Ext_Stop",6.30957,1,100};
		soundEngineOffExt[] = {"BNA_KC_Vehicles\Data\Audio\TankEngineShutdown",30,1,100};
		soundEngineOffInt[] = {"BNA_KC_Vehicles\Data\Audio\TankEngineShutdown",1,1};
		soundEngineOnExt[] = {"BNA_KC_Vehicles\Data\Audio\TankEngineStartup",30,1,100};
		soundEngineOnInt[] = {"BNA_KC_Vehicles\Data\Audio\TankEngineStartup",1,1};
		class Sounds
		{
			soundSetsInt[]=
			{
				"BNA_KC_Engine_RPM0_INT_SoundSet",
				"BNA_KC_Engine_RPM1_INT_SoundSet",
				"BNA_KC_Engine_RPM2_INT_SoundSet",
				"BNA_KC_Engine_RPM3_INT_SoundSet",
				"BNA_KC_Engine_RPM4_INT_SoundSet",
				"BNA_KC_Engine_RPM5_INT_SoundSet",
				"BNA_KC_Engine_RPM6_INT_SoundSet",
				//"MBT_01_Engine_INT_Burst_SoundSet",
				"MBT_01_Tracks_01_INT_SoundSet",
				"MBT_01_Tracks_02_INT_SoundSet",
				"MBT_01_Tracks_03_INT_SoundSet",
				"MBT_01_Tracks_04_INT_SoundSet",
				"MBT_01_Tracks_05_INT_SoundSet",
				"MBT_01_Tracks_06_INT_SoundSet",
				"MBT_01_Interior_Tone_Engine_Off_SoundSet",
				"MBT_01_Interior_Tone_Engine_On_SoundSet",
				"MBT_01_Rattling_INT_SoundSet",
				"MBT_01_Rain_INT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_INT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_INT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_INT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_INT_SoundSet",
				"MBT_01_Drive_Water_INT_SoundSet",
				"MBT_01_Drive_Dirt_INT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet",
				"Tank_General_Collision_Int_SoundSet"
			};
			soundSetsExt[]=
			{
				"BNA_KC_Engine_RPM0_EXT_SoundSet",
				"BNA_KC_Engine_RPM1_EXT_SoundSet",
				"BNA_KC_Engine_RPM2_EXT_SoundSet",
				"BNA_KC_Engine_RPM3_EXT_SoundSet",
				"BNA_KC_Engine_RPM4_EXT_SoundSet",
				"BNA_KC_Engine_RPM5_EXT_SoundSet",
				"BNA_KC_Engine_RPM6_EXT_SoundSet",
				//"MBT_01_Engine_EXT_Burst_SoundSet",
				"MBT_01_Tracks_01_EXT_SoundSet",
				"MBT_01_Tracks_02_EXT_SoundSet",
				"MBT_01_Tracks_03_EXT_SoundSet",
				"MBT_01_Tracks_04_EXT_SoundSet",
				"MBT_01_Tracks_05_EXT_SoundSet",
				"MBT_01_Tracks_06_EXT_SoundSet",
				"MBT_01_Rain_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_EXT_SoundSet",
				"MBT_01_Drive_Water_EXT_SoundSet",
				"MBT_01_Drive_Dirt_EXT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundShader"
			};
		};
	};
	
};