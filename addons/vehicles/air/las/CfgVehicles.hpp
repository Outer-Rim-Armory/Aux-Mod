class ls_impulsor_base;

SENSORTEMPLATES;

class CfgVehicles {
    class Helicopter_Base_F;
    class Helicopter_Base_H: Helicopter_Base_F{
        class Components;
    };
    class 3AS_LAS_Base_F: Helicopter_Base_H {};
    class 3AS_LAS_Z6_Base_F: 3AS_LAS_Base_F {
        class pilotCamera;
        class ACE_SelfActions;
    };
    class CLASS(LAS_Z6): 3AS_LAS_Z6_Base_F {
        class LS_Impulsor: ls_impulsor_base{
            enabled = 1; // 0-Disabled, 1-Enabled
            speed = 400; // Speed in km/h
            fuelDrain = 0; // Percent of fuel used every 1/2 seconds
            overchargeSpeed = 1000; // Same but for overcharge
            overchargeFuelDrain = 0; // Same but for overcharge
            // Time in seconds before overcharge can be used after turning it off
            overchargeCooldown = 05;
        };

        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);
        side = BLUFOR;

        displayName = "LAS 1/A (Z6)";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};
        fuelCapacity = 1500;
        fuelConsumptionRate = 0.12;
        mass = 6000;
        weapons[] = {
            "3AS_LAS_Energy_Cannons",
            "ls_weapon_laati_turret_50mm_he",
            "ls_weapon_laati_turret_50mm_ap",
            "CMFlareLauncher",
            "Laserdesignator_pilotCamera"
        };
        magazines[] = {
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_HE_green",
            "ls_magazine_50mm_200Rnd_APFSDS_green",
            "ls_magazine_50mm_200Rnd_APFSDS_green",
            "Laserbatteries",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "3AS_LAS_30mm_MP_shells",
			"3AS_LAS_30mm_MP_shells",
			"3AS_LAS_30mm_MP_shells"
        };

        hiddenSelectionsTextures[]=
		{
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Exterior_co.paa",
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Interior_co.paa",
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Wings_co.paa"
		};

        textureList[] = {
            "Republic", 1,
            "Imperial", 0
        };
		class TextureSources
		{
			class Republic
			{
				displayName="Republic";
				author="$STR_3AS_Studio";
				textures[]=
				{
					"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Exterior_co.paa",
					"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Interior_co.paa",
					"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Wings_co.paa"
				};
			};
            class Imperial: Republic {
                displayName = "Imperial";
                textures[] = {
                "\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Exterior_Imp_co.paa",
                "\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Interior_co.paa",
                "\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Wings_Imp_co.paa"
                };
            };
		};

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
            AI_CREW_SPAWNER;
        };

        class VehicleTransport {
            class Cargo
            {
                parachuteClass			= "";	// type of parachute used when dropped in air. When empty then parachute is not used.
                parachuteHeightLimit	= 9999;					// minimal height above terrain when parachute is used.
                canBeTransported		= 1;					// 0 (false) / 1 (true)
            };
        };


/*         class pilotCamera: pilotCamera {
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
            initTurn = 0;
            initElev = -10;
            maxTurn = 180;
            minTurn = -180;
            maxElev = 180;
            minElev = -180;

            maxXRotSpeed = 0.3;
            maxYRotSpeed = 0.3;
            controllable = TRUE;
            ace_missileguidance_usePilotCameraForTargeting = TRUE;
        }; */

class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = -10;
					maxAngleX = 90;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
					initFov = 0.42500001;
					minFov = 0.42500001;
					maxFov = 0.42500001;
					directionStabilized = 1;
					thermalMode[] = {0,1};
					visionMode[] =
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] =
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class zoomx4: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (0.425/4);
					minFov = (0.425/4);
					maxFov = (0.425/4);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (0.42/8);
					minFov = (0.42/8);
					maxFov = (0.42/8);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (0.42/20);
					minFov = (0.42/20);
					maxFov = (0.42/20);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (0.42/50);
					minFov = (0.42/50);
					maxFov = (0.42/50);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName = "NFOV";
					initFov =(0.42/70);
					minFov =(0.42/70);
					maxFov =(0.42/70);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = -10;
			maxXRotSpeed = 0.30000001;
			maxYRotSpeed = 0.30000001;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
        radarTargetSize = 0.5;
        reportOwnPosition = TRUE;
        reportRemoteTargets = TRUE;
        receiveRemoteTargets = TRUE;
        showcrewAim = 4;

		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
                        class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
                        class GroundTarget
						{
							minRange=1000;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal = 270;
						angleRangeVertical = 270;
					};
                    class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
                        class GroundTarget
						{
							minRange=1000;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal = 270;
						angleRangeVertical = 270;
					};
                    class ManSensorComponent: SensorTemplateMan
                    {
						class GroundTarget
						{
							minRange=1000;
							maxRange=1000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
                        angleRangeHorizontal = 360;
						angleRangeVertical = 360;
                    };
                    class DataLinkSensorComponent: SensorTemplateDataLink
                    {
						class AirTarget
						{
							minRange=2500;
							maxRange=2500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=2500;
							maxRange=2500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
                        angleRangeHorizontal = 360;
						angleRangeVertical = 360;
                    };
                };
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
                defaultDisplay="SensorDisplay";
				class Components: Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
/* 					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
                    class VehicleSecondaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="SecondaryGunner";
					}; */
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,1000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};

    };
};
