#include "CfgPatches.hpp"


class CfgWeapons
{
    // ┌──────────────────────────────────┐
    // │       Custom Weapons       │
    // └──────────────────────────────────┘
    class CowsSlot;
    class Rifle_Base_F;
    class 3AS_WestarM5_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class 3AS_WestarM5_F: 3AS_WestarM5_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };
    class BNA_KC_Westar_M5_Base: 3AS_WestarM5_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = 
                {
                    "3AS_Optic_Scope_WestarM5",
                    "optic_arco_ak_blk_f",
                    "optic_Hamr",
                    "optic_MRCO",
                    "optic_Nightstalker",
                    "optic_tws",
                    "optic_DMS",
                    "optic_LRPS",
                    "optic_ico_01_black_f"
                };
            };
        };
    };


    // ┌────────────────────────────────────────┐
    // │       Pre-Defined Weapons       │
    // └────────────────────────────────────────┘
    class 3AS_DC15S_F;
    class 3AS_DC15C_F;

    class BNA_KC_DC15S_Predef: 3AS_DC15S_F
    {
        // Scopes
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;


        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item = "3AS_optic_reflex_DC15C";
                slot = "CowsSlot";
            };

            class LinkedItemsUnder
            {
                item = "";
                slot = "UnderBarrelSlot";
            };

            class LinkedItemsAcc
            {
                item = "";
                slot = "PointerSlot";
            };

            class LinkedItemsMuzzle
            {
                item = "";
                slot = "MuzzleSlot";
            };
        };
    };
    class BNA_KC_DC15C_Predef: 3AS_DC15C_F
    {
        // Scopes
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;

        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item = "3AS_optic_reflex_DC15C";
                slot = "CowsSlot";
            };

            class LinkedItemsUnder
            {
                item = "";
                slot = "UnderBarrelSlot";
            };

            class LinkedItemsAcc
            {
                item = "";
                slot = "PointerSlot";
            };

            class LinkedItemsMuzzle
            {
                item = "";
                slot = "MuzzleSlot";
            };
        };
    };
};