class CfgWeapons
{
    class ItemCore;
    class CBA_MiscItem: ItemCore
    {
        class ItemInfo;
    };
    class BNA_Assault_Module: CBA_MiscItem
    {
        scope = 2;
        author = "JRY";
        picture = "\A3\Weapons_F\Items\data\UI\gear_Medikit_CA.paa";
        model = "\A3\Weapons_F\Items\Medikit";
        displayName = "Vehicle Skill: Assault";
        descriptionShort = "Vehicle Skill: Assault";
       
        class ItemInfo: ItemInfo {};
    };
    class BNA_Shield_Module: CBA_MiscItem
    {
        scope = 2;
        author = "JRY";
        picture = "\A3\Weapons_F\Items\data\UI\gear_Medikit_CA.paa";
        model = "\A3\Weapons_F\Items\Medikit";
        displayName = "Vehicle Skill: Shield";
        descriptionShort = "Vehicle Skill: Shield";

        class ItemInfo: ItemInfo {};
    };
    class BNA_Medical_Module: CBA_MiscItem
    {
        scope = 2;
        author = "JRY";
        picture = "\A3\Weapons_F\Items\data\UI\gear_Medikit_CA.paa";
        model = "\A3\Weapons_F\Items\Medikit";
        displayName = "Vehicle Skill: Medical";
        descriptionShort = "Vehicle Skill: Medical";

        class ItemInfo: ItemInfo {};
    };
    class BNA_Repair_Module: CBA_MiscItem
    {
        scope = 2;
        author = "JRY";
        picture = "\A3\Weapons_F\Items\data\UI\gear_Medikit_CA.paa";
        model = "\A3\Weapons_F\Items\Medikit";
        displayName = "Vehicle Skill: Repair";
        descriptionShort = "Vehicle Skill: Repair";

        class ItemInfo: ItemInfo {};
    };
    class BNA_Citadel_Module: CBA_MiscItem
    {
        scope = 2;
        author = "JRY";
        picture = "\A3\Weapons_F\Items\data\UI\gear_Medikit_CA.paa";
        model = "\A3\Weapons_F\Items\Medikit";
        displayName = "Vehicle Skill: Citadel";
        descriptionShort = "Vehicle Skill: Citadel";

        class ItemInfo: ItemInfo {};
    };

    class Launcher;
    class Launcher_Base_F: Launcher
    {
        class WeaponSlotsInfo;
    };
    class BNA_KC_Launcher_Datapad_Base: Launcher_Base_F
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
        handAnim[] = {"OFP2_ManSkeleton","3as\3AS_Weapons\Roleplay\anim\datapadhandrifle.rtm"};
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
    };
	class BNA_KC_Launcher_Datapad: BNA_KC_Launcher_Datapad_Base
	{
	    scope = 2;
	    magazines[] = {"BNA_KC_Datapad_Mag_MortarStrike","BNA_KC_Datapad_Mag_AV7AStrike"};
	    // magazineWell[] = {"BNA_KC_DataPad_Magazines"};
	    displayName = "[KC] Data Pad";
	    model = "\3AS\3AS_Weapons\Roleplay\RepublicDatapadrifle.p3d";
	    picture = "\3AS\3AS_Weapons\Roleplay\data\UI\3as_datapad.paa";
	    weaponInfoType = "RscWeaponZeroing";
	    class WeaponSlotsInfo;
	};
};