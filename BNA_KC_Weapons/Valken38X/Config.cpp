#include "CfgPatches.hpp"


class Mode_SemiAuto;

class CfgWeapons
{
    class LFP_rifle_base;
    class LFP_Valken38X: LFP_rifle_base
    {
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
        magazines[] = {"BNA_KC_Mag_Valken38X_AP"};
        magazineWell[] = {};

        canShootInWater = 1;

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
    class LFP_Valken38X_Mag;
    class BNA_KC_Mag_Valken38X_AP: LFP_Valken38X_Mag
    {
        displayName = "[KC] Valken-38X Energy Cell";
        displayNameShort = "High Energy AP";
        descriptionShort = "Armor Piercing Energy Cell Pack<br/>Rounds: 10<br/>Used In: Valken-38X";
        ammo = "12thFleet_Ammo_Sniper_Blue";
        count = 10;

        JLTS_hasEMPProtection = 1;
    };
};