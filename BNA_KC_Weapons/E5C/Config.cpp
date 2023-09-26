#include "CfgPatches.hpp"


class Mode_SemiAuto;
class Mode_FullAuto: Mode_SemiAuto
{
    class StandardSound;
};

class CfgWeapons
{
    class LMG_Mk200_F;
    class JLTS_E5C: LMG_Mk200_F
    {
        class WeaponSlotsInfo;
    };
    class BNA_KC_E5C_Base: JLTS_E5C
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] E-5C (Base)";
        baseWeapon = "BNA_KC_E5C_Base";
        descriptionShort = "Repeating Blaster";

        muzzles[] = {"this"};
        magazines[] = {"Aux12thFleet_Mag_E5C"};
        magazineWell[] = {};

        canShootInWater = 1;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        fireLightDiffuse[] = {1, 0, 0};

        class Manual: Mode_FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_E5"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_E5"};
            };
        };
    };

    class BNA_KC_E5C: BNA_KC_E5C_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] E-5C";
        JLTS_friedItem = "BNA_KC_E5C_Fried";
        baseWeapon = "BNA_KC_E5C";
    };
    class BNA_KC_E5C_Fried: BNA_KC_E5C
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        baseWeapon = "BNA_KC_E5C_Fried";

        displayName = "[KC] E-5C (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\E5C\data\ui\E5C_fried_ui_ca.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };

    class BNA_KC_E5C_Stock: BNA_KC_E5C_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] E-5C (Stock)";
        JLTS_friedItem = "BNA_KC_E5C_Stock_Fried";
        baseWeapon = "BNA_KC_E5C_Stock";

        model = "\MRC\JLTS\weapons\e5c\e5c_stock.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\e5c\anims\e5c_stock_handanim.rtm"};
        picture = "\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_ui_ca.paa";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 132;
        };
    };
    class BNA_KC_E5C_Stock_Fried: BNA_KC_E5C_Stock
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        baseWeapon = "BNA_KC_E5C_Stock_Fried";

        displayName = "[KC] E-5C (Stock, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_fried_ui_ca.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class JLTS_E5C_mag;
    class Aux12thFleet_Mag_E5C: JLTS_E5C_mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] E-5C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 150<br/>Used In: E-5C";
        ammo = "Aux_12thFleet_Ammo_Carbine_Red";

        JLTS_hasEMPProtection = 1;
    };
};