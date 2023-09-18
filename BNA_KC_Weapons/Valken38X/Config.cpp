#include "CfgPatches.hpp"


class Mode_SemiAuto;
class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons
{
    class LFP_rifle_base;
    class LFP_Valken38X: LFP_rifle_base
    {
        class WeaponSlotsInfo;
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
        // picture = "\BNA_KC_Weapons\Valken38X\Data\Textures\UI\Valken38X_Fried_UI.paa";
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
        ammo = "12thFleet_Ammo_Sniper_Blue";
        count = 10;

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\LF_Weapon_Unit\DC17SA\ui\dc17ammo_co.paa";
    };
};