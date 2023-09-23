#include "CfgPatches.hpp"


class Mode_SemiAuto;
class Mode_FullAuto: Mode_SemiAuto
{
    class StandardSound;
};

class CfgWeapons
{
    class JLTS_E5C;
    class BNA_KC_E5C_Base: JLTS_E5C
    {
        displayName = "[KC] E-5C (Base)";
        baseWeapon = "BNA_KC_E5C_Base";
        descriptionShort = "Repeating Blaster";

        muzzles[] = {"this"};
        magazines[] = {"Aux_12thFleet_Mag_E5C"};
        magazineWell[] = {};

        fireLightDiffuse[] = {1, 0, 0};

        class Manual: Mode_FullAuto
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
};


class CfgMagazines
{
    class JLTS_E5C_mag;
    class Aux_12thFleet_Mag_E5C: JLTS_E5C_mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] E-5C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 150<br/>Used In: E-5C";
        ammo = "Aux_12thFleet_Ammo_Carbine_Red";

        JLTS_hasEMPProtection = 1;
    };
};