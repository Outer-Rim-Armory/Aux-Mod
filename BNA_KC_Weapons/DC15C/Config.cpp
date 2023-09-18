#include "CfgPatches.hpp"


class CfgWeapons
{
    class Rifle_Base_F;
    class 3AS_DC15C_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class 3AS_DC15C_F: 3AS_DC15C_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };
    };
    class BNA_KC_DC15C_Base: 3AS_DC15C_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15C (Base)";
        baseWeapon = "BNA_KC_DC15C_Base";
        // picture = "\BNA_KC_Weapons\DC15C\Data\Textures\UI\DC15C_UI.paa";

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this"};
        magazines[] = {"Aux_12thFleet_Mag_DC15C"};
        magazineWell[] = {};
        reloadAction = "3AS_GestureReloadDC15S";

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
                    // Short
                    "Aux501_cows_RCO",
                    "Aux501_cows_RCO_2",
                    "Aux501_cows_RCO_3",
                    // Medium
                    "Aux501_cows_MRCO",
                    "Aux501_cows_MRCO_2",
                    "Aux501_cows_MRCO_3",
                    // Sights
                    "Aux501_cows_Holosight",
                    "Aux501_cows_Holosight_2",
                    "Aux501_cows_Holosight_3",
                    "Aux501_cows_reflex_optic"
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
        };
    };

    class BNA_KC_DC15C: BNA_KC_DC15C_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15C";
        baseWeapon = "BNA_KC_DC15C";
        JLTS_friedItem = "BNA_KC_DC15C_Fried";
    };
    class BNA_KC_DC15C_Fried: BNA_KC_DC15C
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15C (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = "BNA_KC_DC15C_Fried";
        // picture = "\BNA_KC_Weapons\DC15C\Data\Textures\UI\DC15C_Fried_UI.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class 12thFleet_Mag_DC15S;
    class Aux_12thFleet_Mag_DC15C: 12thFleet_Mag_DC15S
    {
        displayName = "[12th Fleet] DC-15C Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 40<br/>Used In: DC-15C";
        count = 40;
    };
};