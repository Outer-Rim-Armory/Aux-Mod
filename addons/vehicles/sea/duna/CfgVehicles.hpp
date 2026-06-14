class CfgVehicles {
    class UserActions;
 	class Ship;
	class Boat_F: Ship
	{
		class AnimationSources
		{
			class Gatling;
			class Gatling_flash;
		};
		class Eventhandlers;
		class HitPoints;
		class ViewPilot;
		class CargoTurret;
		class Turrets;
		class NewTurret;
		class ViewOptics;
	};
	class optre_catfish_unarmed_f: Boat_F
	{
		class AnimationSources: AnimationSources
		{
		};
		class Eventhandlers: Eventhandlers
		{
		};
		class HitPoints: HitPoints
		{
		};
		class ViewPilot: ViewPilot
		{
		};
		class ViewOptics: ViewOptics
		{
		};
	};
	class CLASS(Duna_Base): optre_catfish_unarmed_f {
        SCOPE_PRIVATE;
		displayName="Duna Assault Boat (Base)";
		model="OPTRE_Vehicles\catfish\optre_catfish_mg";
		side=1;
		faction=QFACTION(KC);
		editorSubcategory=QEDSUBCAT(Boats);
		textureList[]=
		{
			"Republic",
			1
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=1;
				material=50;
				name="karoserie";
				passThrough=1;
				explosionShielding=5;
			};
		};
		crew=QCLASS(Unit_Phase2_CT);
		simulation="shipx";
		maxSpeed=120;
		overSpeedBrakeCoef=0.80000001;
		enginePower=750;
		engineShiftY=0.050000001;
		waterLeakiness=1;
		turnCoef=1;
		thrustDelay=1.5;
		waterLinearDampingCoefY=4.5;
		waterLinearDampingCoefX=7.5;
		waterAngularDampingCoef=4.5;
		waterResistanceCoef=0.015;
		rudderForceCoef=0.175;
		rudderForceCoefAtMaxSpeed=0.0024999999;
		idleRpm=200;
		redRpm=1600;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-1,
				"N",
				0,
				"D1",
				2,
				"D2",
				1.75,
				"D3",
				1.5
			};
			TransmissionRatios[]=
			{
				"High",
				1
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		waterEffectSpeed=12;
		engineEffectSpeed=12;
		waterFastEffectSpeed=40;
		leftEngineEffect="LEngEffectsSmall";
		rightEngineEffect="REngEffectsSmall";
		leftFastWaterEffect="LFastWaterEffects";
		rightFastWaterEffect="RFastWaterEffects";
		memoryPointsLeftWaterEffect="waterEffectR";
		memoryPointsRightWaterEffect="waterEffectL";
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		getInAction="GetInLow";
		getOutAction="GetOutBoat";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutBoat"
		};
		driverAction="driver_mid01";
		driverLeftHandAnimName="drivingWheel";
		driverRightHandAnimName="drivingWheel";
		cargoAction[]=
		{
			"passenger_bench_1"
		};
		cargoIsCoDriver[]={0};
		ejectDeadDriver=0;
		ejectDeadCargo=0;
		transportSoldier=0;
		enableRadio=1;
		enableGPS=1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=6;
			};
		};
		brakeDistance=3;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		armor=300;
		armorStructural=4;
		damageResistance=0.050000001;
		class CargoTurret;
		class MainTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerName="Passenger (Left 01)";
				proxyIndex=1;
				isPersonTurret=1;
				maxElev=50;
				minElev=-5;
				maxTurn=45;
				minTurn=-45;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]=
					{
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerName="Passenger (Left 02)";
				proxyIndex=2;
				isPersonTurret=1;
				maxElev=50;
				minElev=-5;
				maxTurn=45;
				minTurn=-45;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]=
					{
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerName="Passenger (Right 01)";
				proxyIndex=3;
				isPersonTurret=1;
				maxElev=50;
				minElev=-5;
				maxTurn=45;
				minTurn=-45;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]=
					{
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_04: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerName="Passenger (Right 02)";
				proxyIndex=4;
				isPersonTurret=1;
				maxElev=50;
				minElev=-5;
				maxTurn=45;
				minTurn=-45;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]=
					{
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class CargoTurret_05: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerName="Passenger (Rear)";
				proxyIndex=5;
				isPersonTurret=1;
				allowLauncherIn=1;
				maxElev=50;
				minElev=-5;
				maxTurn=60;
				minTurn=-60;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]=
					{
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn
				{
				};
			};
			class MainTurret: NewTurret
			{
				body="mainTurret";
				gun="mainGun";
				animationsourcebody="mainTurret";
				animationSourceGun="mainGun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				LODTurnedOut=1100;
				LODTurnedIn=1100;
				LODOpticsIn=1100;
				LODOpticsOut=1100;
				ejectDeadGunner=0;
				minElev=-15;
				maxElev=30;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.75;
				maxVerticalRotSpeed=1.5;
				gunnerAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				hideWeaponsGunner=0;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				stabilizedInAxes=3;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				proxyIndex=1;
				commanding=1;
				primaryGunner=1;
				turretInfoType="RscWeaponZeroing";
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				memoryPointGun="machinegun";
				weapons[]=
				{
					"RD501_speedboat_blaster"
				};
				magazines[]=
				{
					"RD501_republic_speedboat_m41_charge_x1000_mag",
					"RD501_republic_speedboat_m41_charge_x1000_mag"
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerOpticsShowCursor=1;
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics=0;
				hasGunner=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200};
				discreteDistanceInitIndex=2;
				class ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
			};
		};
		attenuationEffectType="OpenCarAttenuation";
		insideSoundCoef=1;
		soundEngineOnInt[]=
		{
			"OPTRE_Vehicles\catfish\data\sounds\Startup",
			"db-5",
			1
		};
		soundEngineOnExt[]=
		{
			"OPTRE_Vehicles\catfish\data\sounds\Startup",
			"db-5",
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"OPTRE_Vehicles\catfish\data\sounds\Shutdown",
			"db-5",
			1
		};
		soundEngineOffExt[]=
		{
			"OPTRE_Vehicles\catfish\data\sounds\Shutdown",
			"db-5",
			1,
			300
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_01",
			"db0",
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_02",
			"db0",
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_03",
			"db0",
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_building_04",
			"db0",
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
			"db0",
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
			"db0",
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
			"db0",
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
			"db0",
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
			"db0",
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
			"db0",
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
			"db0",
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
			"db0",
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
			"db0",
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
			"db0",
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class IdleOut
			{
				sound[]=
				{
					"OPTRE_Vehicles\catfish\data\sounds\idle",
					"db-7",
					1,
					300
				};
				frequency="0.95 + ((rpm/1600) factor[(100/1600),(250/1600)])*0.15";
				volume="engineOn*(((rpm/1600) factor[(100/1600),(150/1600)])*((rpm/1600) factor[(300/1600),(200/1600)]))";
			};
			class Engine
			{
				sound[]=
				{
					"OPTRE_Vehicles\catfish\data\sounds\RPM_1",
					"db-4",
					1,
					350
				};
				frequency="0.85 + ((rpm/1600) factor[(200/1600),(480/1600)])*0.2";
				volume="engineOn*(((rpm/1600) factor[(270/1600),(320/1600)])*((rpm/1600) factor[(530/1600),(450/1600)]))";
			};
			class EngineMidOut
			{
				sound[]=
				{
					"OPTRE_Vehicles\catfish\data\sounds\RPM_2",
					"db-2",
					1,
					380
				};
				frequency="0.85 + ((rpm/1600) factor[(420/1600),(720/1600)])*0.2";
				volume="engineOn*(((rpm/1600) factor[(480/1600),(550/1600)])*((rpm/1600) factor[(720/1600),(650/1600)]))";
			};
			class EngineMaxOut2
			{
				sound[]=
				{
					"OPTRE_Vehicles\catfish\data\sounds\RPM_3",
					"db-1",
					1,
					440
				};
				frequency="0.86 + ((rpm/1600) factor[(680/1600),(1000/1600)])*0.2";
				volume="engineOn*(((rpm/1600) factor[(680/1600),(750/1600)])*((rpm/1600) factor[(1020/1600),(950/1600)]))";
			};
			class EngineMaxOut3
			{
				sound[]=
				{
					"OPTRE_Vehicles\catfish\data\sounds\RPM_4",
					"db0",
					1,
					500
				};
				frequency="0.85 + ((rpm/1600) factor[(900/1600),(1300/1600)])*0.2";
				volume="engineOn*(((rpm/1600) factor[(980/1600),(1050/1600)])*((rpm/1600) factor[(1550/1600),(1220/1600)]))";
			};
			class EngineMaxOut4
			{
				sound[]=
				{
					"OPTRE_Vehicles\catfish\data\sounds\RPM_5",
					"db2",
					1,
					550
				};
				frequency="0.85 + ((rpm/1600) factor[(1200/1600),(1600/1600)])*0.2";
				volume="engineOn*((rpm/1600) factor[(1200/1600),(1600/1600)])";
			};
			class WaternoiseOutW0
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
					"db-3",
					1,
					150
				};
				frequency="1";
				volume="(speed factor[4, 1])";
			};
			class WaternoiseOutW1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
					"db-2",
					1,
					250
				};
				frequency="1";
				volume="((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
					"db0",
					1,
					350
				};
				frequency="1";
				volume="(speed factor[3, 9])";
			};
		};
		class Reflectors
		{
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"OPTRE_Vehicles\Catfish\data\optre_catfish_boat.rvmat",
				"OPTRE_Vehicles\Catfish\data\optre_damaged_boat.rvmat",
				"OPTRE_Vehicles\Catfish\data\optre_destroyed_boat.rvmat"
			};
		};
		extCameraPosition[]={0,0.60000002,-10};
		class Eventhandlers: Eventhandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], nil] call bis_fnc_initVehicle;};";
			killed="if (local (_this select 0)) then {[(_this select 0), nil, [], false] call bis_fnc_initVehicle;};";
		};
		hiddenSelections[]=
		{
			"camo",
			"camoInterior",
			"camoSeat",
			"camoWindow",
			"Camo3",
			"camo_sight",
			"camo_turret_decal"
		};
		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_boat_co.paa",
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\optre_vehicles\warthog\data\turrets\sight_co.paa",
			""
		};
		class AnimationSources: AnimationSources
		{
			class Gatling
			{
				source="revolving";
				weapon="Aux501_Vehicle_Weapons_EWEB_Blaster_Red";
			};
			class Gatling_flash
			{
				source="";
				weapon="";
			};
		};
		class textureSources
		{
			class Republic
			{
				displayName="Republic";
				textures[]=
				{
					"RD501_Vehicles\textures\republic_boats\rd501_catfish_boat_co.paa",
					"RD501_Vehicles\textures\republic_boats\rd501_catfish_interior_co.paa",
					"\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa"
				};
			};
		};
	};
    class CLASS(Duna_Medical): CLASS(Duna_Base) {
        SCOPE_PUBLIC;
        displayName = "Duna Assault Boat (Medical)";
        faction=QFACTION(KC);
		editorSubcategory=QEDSUBCAT(Boats);
        model="OPTRE_Vehicles\catfish\optre_catfish";
        hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_boat_co.paa",
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa"
		};
        class CargoTurret;
		class Turrets: Turrets {
			class CargoTurret_01: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Left 01)";
				proxyIndex = 1;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class dynamicViewLimits {
					CargoTurret_02[]={-65,95};
				};
				class TurnIn {
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[] = {
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
			class CargoTurret_02: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Left 02)";
				proxyIndex = 2;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class TurnIn
				{
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]={
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
			class CargoTurret_03: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Right 01)";
				proxyIndex = 3;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class TurnIn {
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[] = {
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
			class CargoTurret_04: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Right 02)";
				proxyIndex = 4;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class TurnIn {
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[] = {
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
			class CargoTurret_05: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Rear)";
				proxyIndex = 5;
				isPersonTurret = 1;
				allowLauncherIn = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 60;
				minTurn = -60;
				class TurnIn {
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[] = {
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
		};
        class UserActions: UserActions {
            VS_CCP
        };
    };
    class CLASS(Duna_Unarmed): CLASS(Duna_Base) {
        SCOPE_PUBLIC;
        displayName = "Duna Assault Boat (Unarmed)";
        faction=QFACTION(KC);
		editorSubcategory=QEDSUBCAT(Boats);
        model="OPTRE_Vehicles\catfish\optre_catfish";
        hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_boat_co.paa",
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa"
		};
        class Turrets: Turrets {
			class CargoTurret_01: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Left 01)";
				proxyIndex = 1;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class dynamicViewLimits {
					CargoTurret_02[]={-65,95};
				};
				class TurnIn {
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[] = {
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
			class CargoTurret_02: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Left 02)";
				proxyIndex = 2;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class TurnIn
				{
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]={
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
			class CargoTurret_03: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Right 01)";
				proxyIndex = 3;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class TurnIn {
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[] = {
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
			class CargoTurret_04: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Right 02)";
				proxyIndex = 4;
				isPersonTurret = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 45;
				minTurn = -45;
				class TurnIn {
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[] = {
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
			class CargoTurret_05: CargoTurret {
				gunnerAction = "passenger_bench_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "Passenger (Rear)";
				proxyIndex = 5;
				isPersonTurret = 1;
				allowLauncherIn = 1;
				maxElev = 50;
				minElev = -5;
				maxTurn = 60;
				minTurn = -60;
				class TurnIn {
					limitsArrayTop[] = {
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[] = {
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class TurnOut: TurnIn {};
			};
		};
        class UserActions: UserActions {
            VS_REPAIRMODE
            VS_SQUADSHIELD
        };
    };
    class CLASS(Duna_Armed): CLASS(Duna_Base) {
        SCOPE_PUBLIC;
        displayName = "Duna Assault Boat (Armed)";
        class UserActions: UserActions {
            VS_ASSAULTSHIELD
            VS_SQUADSHIELD
        };
    };
    class CLASS(Duna_Armed_Engineer): CLASS(Duna_Base) {
        SCOPE_PUBLIC;
        displayName = "Duna Assault Boat (Combat Engineer)";
        class UserActions: UserActions {
            VS_ASSAULTSHIELD
            VS_SQUADSHIELD
            VS_REPAIRMODE
        };
    };
    class CLASS(Duna_ATGM): CLASS(Duna_Base) {
        SCOPE_PUBLIC;
        editorPreview="\OPTRE_Misc\Image\OPTRE\Seacraft\optre_catfish_atgm_f.jpg";
		displayName="Duna Assault Boat (ATGM)";
		model="OPTRE_Vehicles\catfish\optre_catfish_atgm";

        class UserActions: UserActions {
            VS_ASSAULTSHIELD
            VS_SQUADSHIELD
        };
        class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class MainTurret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				animationsourcebody="mainTurret";
				animationSourceGun="mainGun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				LODTurnedOut=1100;
				LODTurnedIn=1100;
				LODOpticsIn=1100;
				LODOpticsOut=1100;
				ejectDeadGunner=0;
				minElev=-15;
				maxElev=45;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.75;
				maxVerticalRotSpeed=1.5;
				gunnerAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				hideWeaponsGunner=0;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				stabilizedInAxes=3;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				proxyIndex=1;
				commanding=1;
				primaryGunner=1;
				turretInfoType="RscWeaponZeroing";
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				memoryPointGun="machinegun";
				weapons[]=
				{
					"OPTRE_102R_Turret"
				};
				magazines[]=
				{
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets",
					"OPTRE_3Rnd_102mm_rockets"
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerOpticsShowCursor=1;
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOutOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics=0;
				hasGunner=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200};
				discreteDistanceInitIndex=2;
				class ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
			};
		};
        class RenderTargets
		{
			class GunnerCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip_gunner_dir";
					renderQuality=4;
					renderVisionMode=0;
					fov=0.75;
				};
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camoInterior",
			"camoSeat",
			"camoWindow",
			"Camo3",
			"camo_turret",
			"camo_turret_decals"
		};
        hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_boat_co.paa",
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
    };
    class CLASS(Duna_AA): CLASS(Duna_Base) {
        SCOPE_PUBLIC;
        editorPreview="\OPTRE_Misc\Image\OPTRE\Seacraft\optre_catfish_atgm_f.jpg";
		displayName="Duna Assault Boat (AA)";
		model="OPTRE_Vehicles\catfish\optre_catfish_aa";

        class UserActions {
            VS_ASSAULTSHIELD
            VS_SQUADSHIELD
        };
        class AnimationSources: AnimationSources
		{
			class Missiles_revolving
			{
				source="revolving";
				weapon="OPTRE_M79_MLRS";
			};
			class Missiles_reloading: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class missiles_alternating
			{
				source="ammo";
				weapon="OPTRE_M79_MLRS";
			};
		};
		class EventHandlers: Eventhandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class MainTurret: MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				LODTurnedOut=1100;
				LODTurnedIn=1100;
				LODOpticsIn=1100;
				LODOpticsOut=1100;
				ejectDeadGunner=1;
				minElev=-5;
				maxElev=30;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.75;
				maxVerticalRotSpeed=1.5;
				gunnerAction="OPTRE_AA_Turret_Gunner";
				gunnerInAction="OPTRE_AA_Turret_Gunner";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				hideWeaponsGunner=1;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				stabilizedInAxes=3;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				proxyIndex=1;
				commanding=1;
				primaryGunner=1;
				turretInfoType="RscWeaponZeroing";
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				gunnerRightLegAnimName="leg_left";
				gunnerLeftLegAnimName="leg_right";
				memoryPointGun[]=
				{
					"Rocket_1",
					"Rocket_2"
				};
				weapons[]=
				{
					"OPTRE_M79_MLRS"
				};
				magazines[]=
				{
					"OPTRE_6Rnd_ASGM2_rockets",
					"OPTRE_6Rnd_ASGM2_rockets",
					"OPTRE_6Rnd_ASGM2_rockets",
					"OPTRE_6Rnd_ASGM2_rockets"
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunneroutview";
				gunnerOpticsShowCursor=1;
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOutOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics=0;
				hasGunner=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200};
				discreteDistanceInitIndex=2;
				class ViewOptics: ViewOptics
				{
					opticsZoomMin=0.25;
					opticsZoomMax=0.75;
					opticsZoomInit=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={5,6};
				};
				class ViewGunner: ViewOptics
				{
					initFov=0.75;
					minFov=0.375;
					maxFov=1.1;
				};
				memoryPointLMissile="Rocket_1";
				memoryPointRMissile="Rocket_2";
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camoInterior",
			"camoSeat",
			"camoWindow",
			"camoBase",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_boat_co.paa",
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\optre_vehicles\warthog\data\turrets\m79_turret_co.paa"
		};

    };

    class CLASS(Duna_Gauss): CLASS(Duna_Base) {
        SCOPE_PUBLIC;
		editorPreview="\OPTRE_Misc\Image\OPTRE\Seacraft\optre_catfish_gauss_f.jpg";
		displayName="Duna Assault Boat (GAUSS)";
        model="OPTRE_Vehicles\catfish\optre_catfish_gauss";

        class UserActions {
            VS_ASSAULTSHIELD
            VS_SQUADSHIELD
        };
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
			class MainTurret: MainTurret
			{
				body="mainTurret";
				gun="mainGun";
				animationsourcebody="mainTurret";
				animationSourceGun="mainGun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				LODTurnedOut=1100;
				LODTurnedIn=1100;
				LODOpticsIn=1100;
				LODOpticsOut=1100;
				ejectDeadGunner=0;
				minElev=-15;
				maxElev=15;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.75;
				maxVerticalRotSpeed=1.5;
				gunnerAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerInAction="OPTRE_Gunner_Gaus_Warthog";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				hideWeaponsGunner=0;
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				stabilizedInAxes=3;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				proxyIndex=1;
				commanding=1;
				primaryGunner=1;
				turretInfoType="OPTRE_RscOptics_Static_Turret_Gunner";
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1800,2100,2400,2700,3000,3500,4000,4500,5000};
				discreteDistanceInitIndex=0;
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="OtocHlaven";
				gunnerRightHandAnimName="OtocHlaven";
				memoryPointGun="machinegun";
				weapons[]=
				{
					"OPTRE_M68_GAUSS"
				};
				magazines[]=
				{
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs"
				};
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerOpticsShowCursor=1;
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				gunnerOutOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics=0;
				hasGunner=1;
				class ViewOptics: ViewOptics
				{
					minFov=0.025;
					opticsZoomMin=0.025;
					opticsZoomMax=0.75;
					opticsZoomInit=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner: ViewOptics
				{
					initFov=0.75;
					minFov=0.375;
					maxFov=1.1;
				};
			};
		};
		class RenderTargets
		{
			class GunnerCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip_gunner_dir";
					renderQuality=4;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class GunnerCam2
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip_gunner_dir";
					renderQuality=4;
					renderVisionMode=2;
					fov=0.75;
				};
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camoInterior",
			"camoSeat",
			"camoWindow",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_boat_co.paa",
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
		};
    };
};
