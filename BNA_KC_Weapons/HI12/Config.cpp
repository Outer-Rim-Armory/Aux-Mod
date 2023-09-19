#include "CfgPatches.hpp"


class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons
{
    class LFP_rifle_base;
    class LFP_hi12: LFP_rifle_base
    {
        class WeaponSlotsInfo;
        class Single;

        class OpticsModes
        {
            class hi12scope_sights;
            class hi12scope_scope;
        };
    };
    class BNA_KC_HI12_Base: LFP_hi12
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] HI-12 (Base)";
        baseWeapon = "BNA_KC_HI12_Base";
        picture = "\BNA_KC_Weapons\HI12\Data\Textures\UI\HI12_UI.paa";

        modes[] =
        {
            "Single",
            "Burst",
            "close",
            "short",
            "medium"
        };
        muzzles[] =
        {
            "this"
        };
        magazines[] =
        {
            "BNA_KC_Mag_HI12"
        };
        magazineWell[] = {};

        canShootInWater = 1;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class PointerSlot: PointerSlot
            {
                compatibleItems[] =
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "jlts_dc17sa_flashlight"
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] =
                {
                    "bipod_01_F_blk"
                };
            };
        };

        class Single: Single
        {
            class BaseSoundModeType
            {
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] =
                {
                    "BNA_KC_Weapons\HI12\Data\Audio\HI12_Fire1.wss",
                    3,
                    1,
                    1800
                };
                soundBegin[] =
                {
                    "begin1",
                    1
                };
            };
            dispersion = 0.00037815439999;
        };
        class Burst: Single
        {
            displayName = "Burst"
            textureType = "burst";
            burst = 3;
            reloadTime = 0.09; // Time inbetween each shot
        };

        class OpticsModes: OpticsModes
        {
            class hi12scope_sights: hi12scope_sights {};
            class hi12scope_scope: hi12scope_scope
            {
                visionMode[] = { "Normal", "NVG", "TI"};
                thermalMode[] = { 0 };
            };
        };
    };

    class BNA_KC_HI12: LFP_hi12
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] HI-12";
        baseWeapon = "BNA_KC_HI12";
        JLTS_friedItem = "BNA_KC_HI12_Fried";
    };

    class BNA_KC_HI12_Fried: BNA_KC_HI12
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] HI-12 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\BNA_KC_Weapons\HI12\Data\Textures\UI\HI12_Fried_UI.paa";
        baseWeapon = "BNA_KC_HI12_Fried";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class LFP_HI12_Mag;
    class BNA_KC_Mag_HI12: LFP_HI12_Mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[KC] HI-12 Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 30<br/>Used In: HI-12";
        count = 30;

        JLTS_hasEMPProtection = 1;
    };
};