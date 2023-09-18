#include "CfgPatches.hpp"


class Mode_SemiAuto;

class CfgWeapons
{
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class JLTS_DC15X: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };

        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
    };
    class BNA_KC_DC15X_Base: JLTS_DC15X
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15X (Base)";
        baseWeapon = "BNA_KC_DC15X_Base";

        modes[] =
        {
            "Single"
        };
        muzzles[] =
        {
            "this"
        };
        magazines[] = { "Aux_12thFleet_Mag_DC15X" };
        magazineWell[] = {};

        canShootInWater = 1;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] =
                {
                    "JLTS_DC15X_scope",
                    "Aux501_cows_lrps"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[]  =
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
                    "bipod_01_f_blk"
                };
            };
        };
        class Single: Single
        {
            maxRange = 450;
            maxRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;

            dispersion = 0.0003;
            reloadTime = 1.5;

            class StandardSound: StandardSound
            {
                begin1[] =
                {
                    "MRC\JLTS\weapons\DC15X\sounds\dc15x_fire.wss",
                    2.5,
                    1,
                    1800
                };
                soundBegin[] = {begin1, 1};
                soundBeginWater[] = {begin1, 1};
            };
        };
    };

    class BNA_KC_DC15X: BNA_KC_DC15X_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15X";
        baseWeapon = "BNA_KC_DC15X";
        JLTS_friedItem = "BNA_KC_DC15X_Fried";

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "JLTS_DC15X_scope";
            };
        };
    };
    class BNA_KC_DC15X_Fried: BNA_KC_DC15X
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15X (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
        baseWeapon = "BNA_KC_DC15X_Fried";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class JLTS_DC15X_mag;
    class Aux_12thFleet_Mag_DC15X: JLTS_DC15X_mag
    {
        displayName = "[12th Fleet] DC-15X Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 20<br/>Used In: DC-15X";
        ammo = "Aux_12thFleet_Ammo_Sniper_Blue";
        count = 20;

        JLTS_hasEMPProtection = 1;

        initSpeed = 1100;
        mass = 8;
    };
};