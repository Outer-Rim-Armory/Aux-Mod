#include "CfgPatches.hpp"


class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;

class CfgWeapons
{
    class LFP_rifle_base;
    class LFP_Valken38X: LFP_rifle_base
    {
        class WeaponSlotsInfo;
        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
        class OpticsModes
        {
            class DC15Xscope_sights;
            class DC15Xscope_scope;
        };
    };
    class BNA_KC_Valken38X_Base: LFP_Valken38X
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] Valken-38X (Base)";
        baseWeapon = "BNA_KC_Valken38X_Base";
        picture = "\BNA_KC_Weapons\Valken38X\Data\Textures\UI\Valken38X_UI.paa";

        modes[] =
        {
            "Single"
        };
        muzzles[] =
        {
            "this"
        };
        magazines[] = {"BNA_KC_Mag_Valken38X", "BNA_KC_Mag_Valken38X_AP"};
        magazineWell[] = {};

        canShootInWater = 1;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;

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
                    "3as_bipod_dc15l_f"
                };
            };
        };

        class Single: Single
        {
            dispersion = 0;
            reloadTime = 2;

            class StandardSound: StandardSound
            {
                begin1[] = {"LF_Weapon_Unit\main\sounds\Valken38x1.wss", 1, 1, 1800};
                begin2[] = {"LF_Weapon_Unit\main\sounds\Valken38x2.wss", 1, 1, 1800};
                begin3[] = {"LF_Weapon_Unit\main\sounds\Valken38x3.wss", 1, 1, 1800};
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
            };
        };

        class OpticsModes: OpticsModes
        {
            class DC15Xscope_sights: DC15Xscope_sights {};
            class DC15Xscope_scope: DC15Xscope_scope
            {
                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {0};
            };
        };

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;
    };

    class BNA_KC_Valken38X: BNA_KC_Valken38X_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Valken-38X";
        baseWeapon = "BNA_KC_Valken38X";
        JLTS_friedItem = "BNA_KC_Valken38X_Fried";
    };
    class BNA_KC_Valken38X_Fried: BNA_KC_Valken38X
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] Valken-38X (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\BNA_KC_Weapons\Valken38X\Data\Textures\UI\Valken38X_Fried_UI.paa";
        baseWeapon = "BNA_KC_Valken38X_Fried";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class 12thFleet_Mag_DC15X;
    class BNA_KC_Mag_Valken38X: 12thFleet_Mag_DC15X
    {
        displayName = "[KC] Valken-38X Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 25<br/>Used In: Valken-38X";
        ammo = "12thFleet_Ammo_Sniper_Blue";
        count = 25;

        modelSpecial = "\LF_Weapon_Unit\valken\valken_mag.p3d";
        modelSpecialIsProxy = 1;
    };

    class BNA_KC_Mag_Valken38X_AP: BNA_KC_Mag_Valken38X
    {
        displayName = "[KC] Valken-38X AP Energy Cell";
        displayNameShort = "High Energy AP";
        descriptionShort = "Armor Piercing Energy Cell Pack<br/>Rounds: 10<br/>Used In: Valken-38X";
        ammo = "BNA_KC_Ammo_Sniper_AP_Yellow";
        count = 10;

        initSpeed = 1300;
        mass = 15;

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\LF_Weapon_Unit\DC17SA\ui\dc17ammo_co.paa";
    };
};


class CfgAmmo
{
    class 12thFleet_Ammo_Sniper_Blue;
    class BNA_KC_Ammo_Sniper_AP_Yellow: 12thFleet_Ammo_Sniper_Blue
    {
        hit = 45;
        caliber = 15;
        ACE_caliber = 15;
        typicalSpeed = 700;
        ACE_bulletMass = 30;

        model = "\MRC\JLTS\weapons\Core\effects\laser_yellow.p3d";
        effectfly = "JLTS_plasma_yellow";
    };
};