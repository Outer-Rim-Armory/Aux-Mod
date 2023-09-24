#include "CfgPatches.hpp"


class CfgWeapons
{
    class Rifle_Base_F;
    class 3AS_DC15L_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class 3AS_DC15L_F: 3AS_DC15L_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };
        class FullAuto;
    };
    class BNA_KC_DC15L_Base: 3AS_DC15L_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15L (Base)";
        descriptionShort = "Automatic Blaster Rifle";
        baseWeapon = "BNA_KC_DC15L_Base";
        picture = "\BNA_KC_Weapons\DC15L\Data\Textures\UI\DC15L_UI.paa";

        modes[] = {"FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {"Aux_12thFleet_Mag_DC15L"};
        magazineWell[] = {};

        drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};

        canShootInWater = 1;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        flashSize = 0.5;

        maxZeroing = 1000;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] =
                {
                    // Long
                    "Aux501_cows_DMS",
                    "Aux501_cows_DMS_2",
                    "Aux501_cows_DMS_3",
                    "Aux501_cows_DMS_4",
                    // Sights
                    "3as_optic_dc15l"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] =
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "jlts_dc17sa_flashlight"
                };
            };
        };

        class FullAuto: FullAuto
        {
            dispersion = 0.00075;
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_prone_mx";

            maxRange = 80;
            maxRangeProbab = 0.04;
            midRange = 30;
            midRangeProbab = 0.58;
            minRange = 1;
            minRangeProbab = 0.2;

            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_DC15L_FullAuto"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DC15L_FullAuto"};
            };
        };
    };

    class BNA_KC_DC15L: BNA_KC_DC15L_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15L";
        baseWeapon = "BNA_KC_DC15L";
        JLTS_friedItem = "BNA_KC_DC15L_Fried";
    };
    class BNA_KC_DC15L_Fried: BNA_KC_DC15L
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15L (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = "BNA_KC_DC15L_Fried";
        picture = "\BNA_KC_Weapons\DC15L\Data\Textures\UI\DC15L_Fried_UI.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class 3AS_200Rnd_EC40_Mag;
    class Aux_12thFleet_Mag_DC15L: 3AS_200Rnd_EC40_Mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] DC-15L Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 240<br/>Used In: DC-15L";
        ammo = "Aux_12thFleet_Ammo_AutoRifle_Blue";
        count = 240;
    };
};

class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_DC15L_FullAuto: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"BNA_KC_Weapons\DC15L\Data\Audio\DC15L_Fire1.wss", 1, 1}
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_DC15L_FullAuto: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_DC15L_FullAuto"};
    };
};