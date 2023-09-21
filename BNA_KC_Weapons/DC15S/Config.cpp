#include "CfgPatches.hpp"


class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons
{
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class JLTS_DC15S: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };

        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
        };
        class Stun;
    };
    class BNA_KC_DC15S_Base: JLTS_DC15S
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15S (Base)";

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this", "Stun"};
        magazines[] = {"12thFleet_Mag_DC15S"};
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
            class UnderBarrelSlot;
        };
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_DC15S_Single"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DC15S_Single"};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_DC15S_FullAuto"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DC15S_FullAuto"};
            };
        };
        class Stun: Stun
        {
            displayName = "Stun";
            magazines[] = {};
            magazineWell[] = {"BNA_KC_Stuns"};
        };
    };

    class BNA_KC_DC15S: BNA_KC_DC15S_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15S";
        JLTS_shieldedWeapon = "BNA_KC_DC15S_RiotShield";
        JLTS_friedItem = "BNA_KC_DC15S_Fried";
    };
    class BNA_KC_DC15S_Fried: BNA_KC_DC15S
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15S (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";

        JLTS_shieldedWeapon = "BNA_KC_DC15S_RiotShield_Fried";
        JLTS_isFried = 1;
        magazines[] = {};

        class Stun: Stun
        {
            displayName = "Stun (Fried)";
            magazines[] = {};
        };
    };

    class BNA_KC_DC15S_RiotShield: BNA_KC_DC15S
    {
        // Scopes
        scope = 1;
        scopeArsenal = 0;

        JLTS_isShielded = 1;
        JLTS_friedItem = "BNA_KC_DC15S_RiotShield_Fried";

        model = "\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa",
            "\MRC\JLTS\weapons\Shield\data\shield_co.paa"
        };
        handAnim[] =
        {
            "OFP2_ManSkeleton",
            "\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"
        };

        // reloadAction = "GestureReload";
        // inertia = 0.80000001;
        recoil = "recoil_pdw"; // More recoil since the gun is held in one hand

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {"JLTS_riot_shield_attachment"};
            };
        };
    };
    class BNA_KC_DC15S_RiotShield_Fried: BNA_KC_DC15S_RiotShield
    {
        displayName = "[KC] DC-15S (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";

        JLTS_baseWeapon = "BNA_KC_DC15S";
        JLTS_isFried = 1;
        magazines[] = {};

        class Stun: Stun
        {
            displayName = "Stun (Fried)";
            magazines[] = {};
        };
    };
};


class CfgMagazines
{
    class JLTS_DC15S_mag;
    class 12thFleet_Mag_DC15S: JLTS_DC15S_mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] DC-15S Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 80<br/>Used In: DC-15S";
        ammo = "Aux_12thFleet_Ammo_Carbine_Blue";

        JLTS_hasEMPProtection = 1;
    };
};


class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_DC15S_Single: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"BNA_KC_Weapons\DC15S\Data\Audio\DC15S_Fire1.wss", 1, 1},
            {"BNA_KC_Weapons\DC15S\Data\Audio\DC15S_Fire2.wss", 1, 1},
            {"BNA_KC_Weapons\DC15S\Data\Audio\DC15S_Fire3.wss", 1, 1},
            {"BNA_KC_Weapons\DC15S\Data\Audio\DC15S_Fire4.wss", 1, 1}
        };
    };
    class BNA_KC_SoundShader_DC15S_FullAuto: BNA_KC_SoundShader_DC15S_Single
    {
        samples[] =
        {
            {"BNA_KC_Weapons\DC15S\Data\Audio\DC15S_Fire1.wss", 1, 1}
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_DC15S_Single: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_DC15S_Single"};
    };
    class BNA_KC_SoundSet_DC15S_FullAuto: BNA_KC_SoundSet_DC15S_Single
    {
        soundShaders[] = {"BNA_KC_SoundShader_DC15S_FullAuto"};
    };
};