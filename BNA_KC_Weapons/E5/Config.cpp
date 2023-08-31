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

        muzzles[] = { "this" };
        magazines[] = { "12thFleet_Mag_E5" };
        magazineWell[] = {};

        fireLightDiffuse[] = { 1, 0, 0 };

        model = "\MRC\JLTS\weapons\E5\E5.p3d";
        hiddenSelections[] = { "camo1" };
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
                begin1[] = { "swlw_rework\sounds\e-series\E5_shot1.wss", 1, 1, 1800 };
                begin2[] = { "swlw_rework\sounds\e-series\E5_shot2.wss", 1, 1, 1800 };
                begin3[] = { "swlw_rework\sounds\e-series\E5_shot3.wss", 1, 1, 1800 };
                soundBegin[] = { "begin1", 0.33, "begin2", 0.33, "begin3", 0.34} ;
                soundBeginWater[] = { "begin1", 0.33, "begin2", 0.33, "begin3", 0.34 };
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                begin1[] = { "swlw_rework\sounds\e-series\E5_shot1.wss", 1, 1, 1800 };
                begin2[] = { "swlw_rework\sounds\e-series\E5_shot2.wss", 1, 1, 1800 };
                begin3[] = { "swlw_rework\sounds\e-series\E5_shot3.wss", 1, 1, 1800 };
                soundBegin[] = { "begin1", 0.33, "begin2", 0.33, "begin3", 0.34} ;
                soundBeginWater[] = { "begin1", 0.33, "begin2", 0.33, "begin3", 0.34 };
            };
        };
    };

    class BNA_KC_E5: BNA_KC_E5_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] E-5";
        JLTS_shieldedWeapon = "BNA_KC_E5_RiotShield";
        JLTS_friedItem = "BNA_KC_E5_Fried";
        baseWeapon = "BNA_KC_E5";
    };
    class BNA_KC_E5_Fried: BNA_KC_E5
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        baseWeapon = "BNA_KC_E5_Fried";

        displayName = "[KC] E-5 (Fried)";
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
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "\MRC\JLTS\weapons\E5\data\E5_co.paa" };
        handAnim[] = { "OFP2_ManSkeleton", "\MRC\JLTS\weapons\E5\anims\E5_shielded_handanim.rtm" };

        // reloadAction = "GestureReload";
        // inertia = 0.80000001;
        recoil = "recoil_pdw";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = { "JLTS_riot_shield_droid_attachment" };
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
};


class CfgMagazines
{
    class JLTS_E5_mag;
    class 12thFleet_Mag_E5: JLTS_E5_mag
    {
        displayName = "[12th Fleet] E-5 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 100<br/>Used In: E-5";
        ammo = "12thFleet_Ammo_Rifle_Red";
    };
};