#include "CfgPatches.hpp"


class CfgWeapons
{
    class SWLW_DC15SA;
    class BNA_KC_DC15SA_Base: SWLW_DC15SA
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15SA (Base)";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] =
        {
            "Aux12thFleet_Mag_7Rnd_DC15SA"
        };
        magazineWell[] = {};

        canShootInWater = 1;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 1;
    };

    class BNA_KC_DC15SA: BNA_KC_DC15SA_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15SA";
    };
};


class CfgMagazines
{
    class SWLW_DC15SA_Mag;
    class Aux12thFleet_Mag_7Rnd_DC15SA: SWLW_DC15SA_Mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] DC-15SA Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 7<br/>Used In: DC-15SA";

        ammo = "Aux12thFleet_Ammo_Pistol_Blue";
        count = 7;

        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 1;
    };
    class Aux12thFleet_Mag_15Rnd_DC15SA: Aux12thFleet_Mag_7Rnd_DC15SA
    {
        displayName = "[12th Fleet] DC-15SA Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: DC-15SA";
        count = 15;
    };
    class Aux12thFleet_Mag_30Rnd_DC15SA: Aux12thFleet_Mag_7Rnd_DC15SA
    {
        displayName = "[12th Fleet] DC-15SA Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 30<br/>Used In: DC-15SA";
        count = 30;
    };
};