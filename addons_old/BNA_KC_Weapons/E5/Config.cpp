#include "CfgPatches.hpp"


class CfgWeapons
{
    class arifle_MX_Base_F;
    class JLTS_DC15S: arifle_MX_Base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class BNA_KC_DC15S_Base: JLTS_DC15S
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };

        class Single: Single
        {
            class StandardSound;
        };
        class FullAuto: FullAuto
        {
            class StandardSound;
        };
    };
    class BNA_KC_E5_Base: BNA_KC_DC15S_Base
    {
        displayName = "[KC] E-5 (Base)";
        baseWeapon = "BNA_KC_E5_Base";

        muzzles[] = {"this"};
        magazines[] = {"Aux12thFleet_Mag_E5"};
        magazineWell[] = {};

        fireLightDiffuse[] = { 1, 0, 0 };

        model = "\MRC\JLTS\weapons\E5\E5.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\E5\data\E5_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\E5\anims\E5_handanim.rtm"};
        picture = "\MRC\JLTS\weapons\E5\data\ui\E5_ui_ca.paa";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[]  = {};
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[]  = {};
            };
            class UnderBarrelSlot;
        };

        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_E5"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_E5"};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_E5"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_E5"};
            };
        };
    };

    class BNA_KC_E5: BNA_KC_E5_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] E-5";
        baseWeapon = "BNA_KC_E5";
        JLTS_shieldedWeapon = "BNA_KC_E5_RiotShield";
        JLTS_friedItem = "BNA_KC_E5_Fried";
    };
    class BNA_KC_E5_Fried: BNA_KC_E5
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] E-5 (Fried)";
        baseWeapon = "BNA_KC_E5_Fried";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa";

        JLTS_shieldedWeapon = "BNA_KC_E5_RiotShield_Fried";
        JLTS_isFried = 1;
        magazines[] = {};
    };

    class BNA_KC_E5_RiotShield: BNA_KC_E5
    {
        // Scopes
        scope = 1;
        scopeArsenal = 0;

        baseWeapon = "BNA_KC_E5_RiotShield";

        JLTS_isShielded = 1;
        JLTS_friedItem = "BNA_KC_E5_RiotShield_Fried";
        JLTS_baseWeapon = "BNA_KC_E5";

        model = "\MRC\JLTS\weapons\E5\E5_shielded.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\E5\data\E5_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\E5\anims\E5_shielded_handanim.rtm"};

        // reloadAction = "GestureReload";
        // inertia = 0.80000001;
        recoil = "recoil_pdw";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {"JLTS_riot_shield_droid_attachment"};
            };
        };
    };
    class BNA_KC_E5_RiotShield_Fried: BNA_KC_E5_RiotShield
    {
        displayName = "[KC] E-5 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa";
        baseWeapon = "BNA_KC_E5_RiotShield_Fried";

        JLTS_baseWeapon = "BNA_KC_E5_Fried";
        JLTS_isFried = 1;
        magazines[] = {};
    };

    class BNA_KC_E5_Shielded: BNA_KC_E5_RiotShield
    {
        class LinkedItems
        {
            class LinkedItemsUnder
            {
                slot = "UnderBarrelSlot";
                item = "JLTS_riot_shield_droid_attachment";
            };
        };
    };
};


class CfgMagazines
{
    class JLTS_E5_mag;
    class Aux12thFleet_Mag_E5: JLTS_E5_mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] E-5 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 100<br/>Used In: E-5";
        ammo = "Aux12thFleet_Ammo_Carbine_Red";

        JLTS_hasEMPProtection = 1;
    };
};


class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_E5: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"3AS\3AS_Main\Sounds\E5\E51.ogg", 1},
            {"3AS\3AS_Main\Sounds\E5\E52.ogg", 1},
            {"3AS\3AS_Main\Sounds\E5\E53.ogg", 1}/*,
            {"3AS\3AS_Main\Sounds\E5\E54.ogg", 1}*/
            // Currently removed due to a *thud* sound in the file
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_E5: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_E5"};
    };
};