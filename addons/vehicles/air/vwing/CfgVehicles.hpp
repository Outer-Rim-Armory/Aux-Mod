class CfgVehicles {
    class 3as_Vwing_base;
    class CLASS(VWing): 3as_Vwing_base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);

        displayName = "V-Wing";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        vtol=4;
        VTOLPitchInfluence=2;
        VTOLRollInfluence=5;
        VTOLYawInfluence=12;
        airBrake=55;
        airBrakeFrictionCoef=2.5;
        flaps=0;
        flapsFrictionCoef=0.30000001;
        brakeDistance=500;
        wheelSteeringSensitivity=2.5;
        maxSpeed=1300;
        altFullForce=6000;
        altNoForce=12000;
        rudderInfluence=0.96599996;
        aileronSensitivity=1.1;
        elevatorSensitivity=1.2;
        elevatorControlsSensitivityCoef=4;
        aileronControlsSensitivityCoef=3.5;
        rudderControlsSensitivityCoef=2;
        elevatorCoef[]={0.40000001,0.60000002,0.76000005,0.51999998,0.59000003,0.56,0.53000003,0.5,0.44999999,0.40000001,0.34999999,0.28,0.27000001,0.25999999,0.25,0.25};
        aileronCoef[]={0.60000002,0.89999998,0.94999999,1,1.05,1,1,0.94999999,0.94999999,0.92500001,0.89999998,0.85000002,0.82499999,0.80000001,0.80000001,0.75};
        rudderCoef[]={0.5,1.8,2.5999999,2.75,2.8,2.8499999,2.9000001,2.95,2.98,3.01,2.7,1.1,0.89999998,0.69999999,0.5,0.30000001};
        angleOfIndicence=0.0024999999;
        draconicForceXCoef=6;
        draconicForceYCoef=5.5;
        draconicForceZCoef=6.5;
        draconicTorqueXCoef=2.0999999;
        draconicTorqueYCoef=0.1;
        envelope[]={0.2,1,2.5,4.8000002,6,7,7.5,7.5,7.5,7,6.4000001,5.5999999,4.0999999,3.7,3.3,3,2.5,2,1.5};
        thrustCoef[]={1.5,1.5,1.6,1.8,2,2.5,3,3.5,2.5,2,1.7,1.5,1.1,1,1,1};
        airFrictionCoefs0[]={0,0,0};
        airFrictionCoefs1[]={0.1,0.050000001,0.0066};
        airFrictionCoefs2[]={0.001,0.0049999999,6.4e-005};
        gunAimDown=0;
        landingSpeed=260;
        stallSpeed=210;
        stallWarningTreshold=0.15000001;
        acceleration=300;
        landingAoa=0.13089584;
        maxOmega=2000;

        cabinOpenSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 1.77828 , 1, 40};
        cabinOpenSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 10, 1, 40};
        cabinCloseSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 1.77828, 1, 40};
        cabinCloseSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 10, 1, 40};
    };
};
