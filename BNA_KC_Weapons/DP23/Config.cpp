#include "CfgPatches.hpp"


class CfgWeapons
{
    class JLTS_DP23;
    class BNA_KC_DP23_Base: JLTS_DP23
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DP-23 (Base)";
        baseWeapon = "BNA_KC_DP23_Base";

        modes[] =
        {
            "Single"
        };
        muzzles[] =
        {
            "this"
        };
        magazines[] = {"Aux_12thFleet_Mag_DP23"};
        magazineWell[] = {};

        canShootInWater = 1;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;
    };

    class BNA_KC_DP23: BNA_KC_DP23_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DP-23";
        baseWeapon = "BNA_KC_DP23";

        JLTS_friedItem = "BNA_KC_DP23_Fried";
    };
    class BNA_KC_DP23_Fried: BNA_KC_DP23
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DP-23 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
        baseWeapon = "BNA_KC_DP23_Fried";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class JLTS_DP23_mag;
    class Aux_12thFleet_Mag_DP23: JLTS_DP23_mag
    {
        displayName = "[12th Fleet] DP-23 Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 30<br/>Used In: DP-23";
        // ammo = "12thFleet_Ammo_Scatter_Blue";
        count = 30;

        JLTS_hasEMPProtection = 1;
    };
};