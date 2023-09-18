#include "CfgPatches.hpp"


class CfgWeapons
{
    class 3AS_DC15L_F;
    class BNA_KC_DC15L_Base: 3AS_DC15L_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15L (Base)";
        baseWeapon = "BNA_KC_DC15L_Base";
        // picture = "\BNA_KC_Weapons\DC15L\Data\Textures\UI\DC15L_UI.paa";

        modes[] = {"FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {"Aux_12thFleet_Mag_DC15L"};
        magazineWell[] = {};

        canShootInWater = 1;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;
    };

    class BNA_KC_DC15L: BNA_KC_DC15L_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15L";
        baseWeapon = "BNA_KC_DC15L";
        JLTS_friedItem = "BNA_KC_DC15L_Fried";
    };
    class BNA_KC_DC15L_Fried: BNA_KC_DC15L
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15L (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = "BNA_KC_DC15L_Fried";
        // picture = "\BNA_KC_Weapons\DC15L\Data\Textures\UI\DC15L_Fried_UI.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class 3AS_200Rnd_EC40_Mag;
    class Aux_12thFleet_Mag_DC15L: 3AS_200Rnd_EC40_Mag
    {
        displayName = "[12th Fleet] DC-15L Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 200<br/>Used In: DC-15L";
        ammo = "Aux_12thFleet_Ammo_Rifle_Blue";
    };
};