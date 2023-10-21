#include "CfgPatches.hpp"


class CfgWeapons
{
    class SWLW_DC17M;
    class BNA_KC_DC17M_Base: SWLW_DC17M
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-17M (Base)";

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this"};
        magazines[] = {"Aux12thFleet_Mag_60Rnd_DC17M", "Aux12thFleet_Mag_90Rnd_DC17M", "SWLW_DC17M_Sniper_Mag", "SWLW_DC17M_AT_Mag"};
        magazineWell[] = {};

        canShootInWater = 1;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 1;
    };

    class BNA_KC_DC17M: BNA_KC_DC17M_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-17M";
    };
};


class CfgMagazines
{
    class SWLW_DC17M_Blaster_Mag;
    class Aux12thFleet_Mag_60Rnd_DC17M: SWLW_DC17M_Blaster_Mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[KC] DC-17M Energy Cell";
        displayNameShort = "Medium Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-17M";

        model = "\SWLW_clones_spec\DC17M_magazine_blaster.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\SWLW_clones_spec\data\DC17M_co.paa"};
        picture = "\SWLW_clones_spec\data\ui\DC17M_mag_blaster_ui_ca.paa";

        modelSpecial = "\SWLW_clones_spec\DC17M_magazine_blaster.p3d";
        modelSpecialIsProxy = 1;
        tracersEvery = 1;

        ammo = "Aux12thFleet_Ammo_Rifle_Blue";
        count = 60; // 6 rounds per 1 mass
        mass = 10;

        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 1;
    };
    class Aux12thFleet_Mag_90Rnd_DC17M: Aux12thFleet_Mag_60Rnd_DC17M
    {
        descriptionShort = "Energy Cell Pack<br/>Rounds: 90<br/>Used In: DC-17M";
        count = 90;
        mass = 15;
    };
};