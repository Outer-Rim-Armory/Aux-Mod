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

    class 41_Flammenwerfer_02_F;
    class WeaponSlotsInfo;

    class BNA_KC_Flamer: 41_Flammenwerfer_02_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "Dexus and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Burn 'Em Redux Properties
		WBK_BurnEm_RequiredBackpack = ""; // Classname of required backpack to use, blank = None
		WBK_BurnEm_FlamethrowerParticlePos = [ [-0.32,0.3,-0.3], 'leftHand' ]; // Particle Position
		WBK_BurnEm_FlamethrowerDistance = 20; // Distance of flame in meters

        displayName = "[KC] BlasTech X-42 Flamethrower";
        // Change look to match the 3AS Flamer
        model = "3AS\3AS_Weapons\X42\BX42.p3d";
        picture = "3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
        handAnim[]=
        {
            "OFP2_ManSkeleton",
            "3AS\3AS_Weapons\Data\Anim\BX42.rtm"
        };
        // reloadAction = ""; // Custom reload animation would be set here

        // Custom Mags
        magazines[] = { "300Rnd_Flamer_Mag" };
    };

    class BNA_KC_Flamer_Heavy: BNA_KC_Flamer
    {
        // Burn 'Em Redux Properties
        WBK_BurnEm_FlamethrowerDistance = 40; // Distance of flame in meters
    
        displayName = "[KC] BlasTech X-42 Heavy Flamethrower";
        // Custom Mags
        magazines[] = { "150Rnd_Flamer_Mag" };
        class WeaponSlotsInfo: WeaponSlotsInfo { mass = 80; };
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


class CfgMagazines
{
    class M2_Fuel_Tank;

    class 300Rnd_Flamer_Mag: M2_Fuel_Tank
    {
        displayName = "BT X-42 Fuel Tank";
        // 3AS Ammo Picture
        picture="3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        UiPicture="3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        mass = 50;
    };

    class 150Rnd_Flamer_Mag: 300Rnd_Flamer_Mag
    {
        displayName = "BT X-42 Fuel Tank";
        count = 150;
        mass = 150;
    };
};