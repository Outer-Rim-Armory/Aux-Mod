class CfgWeapons
{
    class Launcher;
    class Launcher_Base_F: Launcher
    {
        class WeaponSlotsInfo;
    };

    // class 3AS_RepublicDatapadPistol;
    class CLASS(Launcher_Datapad_Base): Launcher_Base_F
    {
        author = "JRY";
        displayName = "";
        magazines[] = {};
        magazineWell[] = {};
        reloadAction = "";
        magazineReloadSwitchPhase = 0.4;
        discreteDistanceInitIndex = 0;
        recoil = "none";
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        inertia = 0.5;
        dexterity = 1.5;
        initSpeed = -1;
        maxZeroing = 100;
        class GunParticles;
        class WeaponSlotsInfo;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.25;
        opticsZoomInit = 0.75;
        distanceZoomMin = 400;
        distanceZoomMax = 400;
        descriptionShort = "";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Roleplay\anim\datapadhandpistol.rtm"
		};
        selectionFireAnim = "zasleh";
        fireLightDiffuse[] = {7,110,176};
        fireLightIntensity = 0.02;
        flash = "gunfire";
        flashSize = 0.1;
        modes[] = {"Single"};
        class Single;
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        caseless[] = {"",1,1,1};
        soundBullet[] = {"caseless",1};
        drySound[] = {"",1,1};
        reloadMagazineSound[] = {"",1,1};
        ace_overheating_mrbs = 3000;
        ace_overheating_slowdownFactor = 1;
        ace_overheating_allowSwapBarrel = 0;
        ace_overheating_dispersion = 0.75;
        burst = 0;
        laser = 1;
    };
	class CLASS(Launcher_Datapad): CLASS(Launcher_Datapad_Base)
	{
	    scope = 2;
	    magazines[] = {
            "BNA_KC_Datapad_Mag_MortarStrike",
            "BNA_KC_Datapad_Mag_AV7AStrike",
            QCLASS(Datapad_Mag_TurboLaserV),
            QCLASS(Datapad_Mag_Resupply)
            //,"BNA_KC_Datapad_Mag_104thTest"
            };
	    // magazineWell[] = {"BNA_KC_DataPad_Magazines"};
	    displayName = "[KC] Data Pad";
	    model = "\3AS\3AS_Weapons\Roleplay\RepublicDatapadrifle.p3d";
	    picture = "\3AS\3AS_Weapons\Roleplay\data\UI\3as_datapad.paa";
	    weaponInfoType = "RscWeaponZeroing";
	    class WeaponSlotsInfo;
        laser = 1;
	};
};
