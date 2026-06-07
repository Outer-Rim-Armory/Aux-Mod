class CfgVehicles {
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
    class CLASS(Boat_Base): optre_catfish_unarmed_f {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Boats);


        displayName = "GAR Duna Assault Boat (Base)";
        crew = QCLASS(Unit_Phase1_Base);
        typicalCargo[] = {QCLASS(Unit_Phase1_Base)};
        model="OPTRE_Vehicles\catfish\optre_catfish";

        hiddenSelectionsTextures[]=
		{
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_boat_co.paa",
			"RD501_Vehicles\textures\republic_boats\rd501_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa"
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
		class MainTurret;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerName="Passenger (FFV - Left 01)";
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
				gunnerName="Passenger (FFV - Left 02)";
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
				gunnerName="Passenger (FFV - Right 01)";
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
				gunnerName="Passenger (FFV - Right 02)";
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
				gunnerName="Passenger (FFV - Rear)";
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
		};

        class VehicleTransport
        {
            class Cargo
            {
                parachuteClass			= "B_Parachute_02_F";	// type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit	= 40;					// minimal height above terrain when parachute is used.
                canBeTransported		= 1;					// 0 (false) / 1 (true)
                rotation = -90;
            };
        };
    };

    class CLASS(Boat_Medical): CLASS(Boat_Base) {
        SCOPE_PUBLIC;
        displayName = "GAR Duna Assault Boat (Medical)";

        class UserActions {
            VS_CCP
        };
    };

    class CLASS(Boat_Unarmed): CLASS(Boat_Base) {
        SCOPE_PUBLIC;
        displayName = "GAR Duna Assault Boat (Unarmed)";

        class UserActions {
            VS_REPAIRMODE
            VS_SQUADSHIELD
        };
    };

    class CLASS(Boat_Armed): CLASS(Boat_Base) {
        SCOPE_PUBLIC;
        displayName = "GAR Duna Assault Boat (Armed)";
        model="OPTRE_Vehicles\catfish\optre_catfish_mg";

		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerName="Passenger (FFV - Left 01)";
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
				gunnerName="Passenger (FFV - Left 02)";
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
				gunnerName="Passenger (FFV - Right 01)";
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
				gunnerName="Passenger (FFV - Right 02)";
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
				gunnerName="Passenger (FFV - Rear)";
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

        class UserActions {
            VS_ASSAULTSHIELD
            VS_SQUADSHIELD
        };
    };

    class CLASS(Boat_Armed_Engineer): CLASS(Boat_Armed) {
        SCOPE_PUBLIC;
        displayName = "GAR Duna Assault Boat (Combat Engineer)";

        class UserActions {
            VS_ASSAULTSHIELD
            VS_SQUADSHIELD
            VS_REPAIRMODE
        };
    };
    class CLASS(Boat_ATGM): CLASS(Boat_Base) {
        SCOPE_PUBLIC;
        editorPreview="\OPTRE_Misc\Image\OPTRE\Seacraft\optre_catfish_atgm_f.jpg";
		displayName="GAR Duna Assault Boat (ATGM)";
		model="OPTRE_Vehicles\catfish\optre_catfish_atgm";

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
			"\optre_vehicles\warthog\data\turrets\m12_turret_co.paa",
			"\optre_vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
    };

    class CLASS(Boat_AA): CLASS(Boat_Base) {
        SCOPE_PUBLIC;
        editorPreview="\OPTRE_Misc\Image\OPTRE\Seacraft\optre_catfish_atgm_f.jpg";
		displayName="GAR Duna Assault Boat (AA)";
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
			"\optre_vehicles\warthog\data\turrets\m12_turret_co.paa",
			"\optre_vehicles\warthog\data\turrets\m79_turret_co.paa"
		};

    };

    class CLASS(Boat_Gauss): CLASS(Boat_Base) {
        SCOPE_PUBLIC;
		editorPreview="\OPTRE_Misc\Image\OPTRE\Seacraft\optre_catfish_gauss_f.jpg";
		displayName="GAR Duna Assault Boat (GAUSS)";
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
			"\optre_vehicles\warthog\data\turrets\m68_turret_co.paa",
			"\optre_vehicles\warthog\data\turrets\m12_turret_co.paa"
		};
    };
};
