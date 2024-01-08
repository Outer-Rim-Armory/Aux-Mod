class CfgWeapons
{
    class Launcher;
    class Launcher_Base_F: Launcher
    {
        class WeaponSlotsInfo;
    };
    class CLASS(Mortar_M190_Carry): Launcher_Base_F
    {
        SCOPE_PUBLIC;
        author = "Keeli Company Aux Team";

        displayName = "[KC] Model 190 Mortar System";
        picture = "\ls_weapons\_ui\rps6_ca.paa";
        drySound[] = {};

        model = "\ls_vehicles_ground\mortar\ls_ground_mortar_alternateCarry.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\ls_vehicles_ground\mortar\data\republic_co.paa"};

        mass = 300;
        class ACE_CSW
        {
            // See https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework.html#22-carryable-tripod
            deploy = QCLASS(Mortar_M190);
            type = "mount"; // Used for tripod (mortar)

            name = "[KC] M-190 Mortar System";

            deployTime = 1;
            pickupTime = 1;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot
            {
                iconScale = 0.1;
            };
        };
    };

    class CannonCore;
    class 3AS_Mortar_82mm: CannonCore
    {
        class Single1;
        class Burst1;
    };
    class CLASS(Mortar_M190_Turret): 3AS_Mortar_82mm
    {
        displayName = "Model 190 Mortar System";
        magazines[] =
        {
            QCLASS(Mag_3Rnd_M190_HE),
            QCLASS(Mag_3Rnd_M190_SmokeWhite),
            QCLASS(Mag_3Rnd_M190_SmokeBlue),
            QCLASS(Mag_3Rnd_M190_SmokeRed)
        };

        MORTAR_SOUND_FIRE;

        class Single1: Single1
        {
            displayName = "$STR_A3_mortar_82mm_Single10";
            artilleryCharge = MORTAR_RANGE_SMALL;
            reloadTime = 4;

            MORTAR_SOUND_FIRE;
        };
        class Single2: Single1
        {
            displayName = "$STR_A3_mortar_82mm_Single20";
            showToPlayer = FALSE;
            artilleryCharge = MORTAR_RANGE_MEDIUM;
        };
        class Single3: Single1
        {
            displayName = "$STR_A3_mortar_82mm_Single30";
            artilleryCharge = MORTAR_RANGE_FAR;
        };

        class Burst1: Burst1
        {
            displayName = "$STR_A3_mortar_82mm_Burst10";
            artilleryCharge = MORTAR_RANGE_SMALL;
            reloadTime = 4;

            MORTAR_SOUND_FIRE;
        };
        class Burst2: Burst1
        {
            displayName = "$STR_A3_mortar_82mm_Burst20";
            artilleryCharge = MORTAR_RANGE_MEDIUM;
        };
        class Burst3: Burst1
        {
            displayName = "$STR_A3_mortar_82mm_Single30";
            artilleryCharge = MORTAR_RANGE_FAR;
        };
    };
    class CLASS(Mortar_M190_ProxyWeapon): CLASS(Mortar_M190_Turret)
    {
        magazineReloadTime = 0.5;
    };
};
