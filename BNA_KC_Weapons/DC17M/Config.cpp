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
        magazines[] = {"SWLW_DC17M_Blaster_Mag", "SWLW_DC17M_Sniper_Mag", "SWLW_DC17M_AT_Mag"};
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