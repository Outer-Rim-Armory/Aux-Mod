    class CfgVehicles {
    class Plane_Fighter_03_base_F;
    class 3AS_Gozanti_Base_F: Plane_Fighter_03_base_F
        {
        class Turrets
        {
            class MainTurret;
            class MainTurretRear;
            class MainTurretUnder;
        };
    };
    class 3AS_Gozanti_F: 3AS_Gozanti_Base_F {};
    class 3AS_Gozanti_Republic: 3AS_Gozanti_F {};
    class CLASS(Gozanti): 3AS_Gozanti_Republic {
        SCOPE_PUBLIC;
        displayName = "[Dogo] Gozanti";
		author = "KC Aux Team";
		faction = QFACTION(KC);
        editorsubcategory = QEDSUBCAT(Helicopters);
        weapons[] = {
            "CMFlareLauncher"
        };
        magazines[] = {
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine"
        };


        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
  				weapons[]=
				{
					"Gozanti_MassDrivercannon"
				};
				magazines[]=
				{
                    "Gozanti_100RNDMassDriverShells",
                    "Gozanti_100RNDMassDriverShells",
                    "Gozanti_100RNDMassDriverShells",
					"SmokeLauncherMag"
				};
              };
            class MainTurretRear: MainTurretRear {
                weapons[] = {
                    "3AS_RX_ParticleBeamCannon"
                    };
				magazines[] = {
                    "3AS_Laser_Battery_RX_F",
                    "3AS_Laser_Battery_RX_F",
                    "3AS_Laser_Battery_RX_F",
                    "3AS_Laser_Battery_RX_F"
                    };
                };
            class MainTurretUnder: MainTurretUnder {
            weapons[] = {
                "3AS_Gozanti_Cannon",
                "SmokeLauncher"
                };
            magazines[] = {
                "3AS_500Rnd_Gozanti_Shells",
                "3AS_500Rnd_Gozanti_Shells",
                "3AS_500Rnd_Gozanti_Shells",
                "SmokeLauncherMag"
                };
            };
        };

	    vtol=4;
		maxSpeed=600; //
		landingAoa="9*3.1415/180";
		landingSpeed=0;
		stallSpeed=10;
		stallWarningTreshold=0.2;
		wheelSteeringSensitivity=0.80000001;
		airBrake=1;
		airBrakeFrictionCoef=30;
		flaps=1;
		flapsFrictionCoef=0.5;
		angleOfIndicence="3*3.1415/180";
		envelope[]={0,0.050000001,0.30000001,1.2,3.4000001,3.8,4,4.0999999,4.1999998,4.3000002,4.3000002,4.0999999,3.8,1};
		altNoForce=12000;
		altFullForce=9000;
		throttleToThrustLogFactor=3;
		thrustCoef[]={1.55,1.635,1.60500015,1.575,1.53,1.485000015,1.41,1.27500003,0.75,0.0750000015,0,0,0};
		aileronSensitivity=1.65000003; //
		aileronCoef[]={0,1.5,2.09999997,2.40000003,2.66999997,2.84999997,3}; //
		elevatorSensitivity=3.75; //
		elevatorCoef[]={0,5.7,6.9,7.2000003,7.35,7.5,7.65}; //
		rudderInfluence=8.09999982; //
		rudderCoef[]={0,1.20000003,3,4.2,5.4,6,6.6,6.9,7.2000003,7.5,7.5,7.5,7.7999997}; //
		aileronControlsSensitivityCoef=2.55000006; //
		elevatorControlsSensitivityCoef=5.274;  //
		rudderControlsSensitivityCoef=2.69999994;//
		draconicForceXCoef=67.5; //
		draconicForceYCoef=1.5; //
		draconicForceZCoef=1.5; //
		draconicTorqueXCoef=27; //
		draconicTorqueYCoef[]={3,3.6,4.2,6,12,21,20.4000006,19.7999997,19.2000003,18.5999994,16.5,15,13.5,11.7000003,9,3}; //
		VTOLYawInfluence=30; //
		VTOLPitchInfluence=60.5; //
		VTOLRollInfluence=30; //
		type="VAir";
		driveOnComponent[]={};
		minGForce=0.30000001;
		maxGForce=10;
		gForceShakeAttenuation=0.5;
    };
};
