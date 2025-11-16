class Mode_SemiAuto;
class CfgWeapons
{
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };
    class JLTS_PLX1_AT: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot;
        };
        class Single: Mode_SemiAuto {
        };
    };

    class CLASS(PLX1_Base): JLTS_PLX1_AT
	{
		_generalMacro="launch_Titan_short_base";
		scope=0;
		displayName = "[KC] PLX-1 Guided Launcher (Base)";
        baseWeapon = QCLASS(PLX1_Base);
        mass = MASS_LAUNCHER;
		nameSound="aalauncher";
		weaponInfoType="RscOptics_titan";
		modelOptics="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		magazines[]={"3AS_JLTS_MK43_AT", "3AS_JLTS_MK44_HE", "3AS_JLTS_MK39_AA"};
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;
		cursor="missile";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\PLX1\anims\PLX1_handanim.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_titan_short";
		maxZeroing=2000;
		shotPos="muzzlePos2";
		shotEnd="muzzleEnd2";
		class GunParticles
		{
			class effect1
			{
				positionName="muzzleEnd2";
				directionName="muzzlePos2";
				effectName="RocketBackEffectsNLAWNT";
			};
		};
		modes[]=
		{
			"Single",
			"TopDown"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"3AS\3AS_Weapons\PLX1\Sounds\PLX_Fire.ogg",
					3.1622777,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_titan";
			aiRateOfFire=7;
			aiRateOfFireDistance=1500;
			minRange=70;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.80000001;
		};
		class TopDown: Single
		{
			textureType="topDown";
			displayName="Top-down Attack";
			aiRateOfFire=7;
			aiRateOfFireDistance=1500;
			minRange=150;
			minRangeProbab=0.80000001;
			midRange=500;
			midRangeProbab=0.94999999;
			maxRange=2000;
			maxRangeProbab=0.94999999;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Dry_Titan",
			0.15848932,
			1,
			18
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan",
			1,
			1,
			20
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
		value=20;
		canLock=2;
		lockAcquire=0;
		class Library
		{
			libTextDesc="$STR_A3_cfgWeapons_launch_MPRL_short_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_MPRL1";
		inertia=1.1;
		aimTransitionSpeed=0.69999999;
		dexterity=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
		};
		class ItemInfo
		{
			priority=3;
		};
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.2;
		ace_javelin_enabled=1;
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.083329998;
				opticsZoomMax=0.041669998;
				opticsZoomInit=0.083329998;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"Ti"
				};
				thermalMode[]={0,1};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.083329998,0.041669998};
				discreteInitIndex=0;
			};
		};
	};

    class CLASS(PLX1): CLASS(PLX1_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] PLX-1 Guided Launcher";
        baseWeapon = QCLASS(PLX1);
        JLTS_friedItem = QCLASS(PLX1_Fried);
    };

    class CLASS(PLX1_Fried): CLASS(PLX1) {
        SCOPE_HIDDEN;

        displayName = "[KC] PLX-1 Guided Launcher (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";
        baseWeapon = QCLASS(PLX1_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
