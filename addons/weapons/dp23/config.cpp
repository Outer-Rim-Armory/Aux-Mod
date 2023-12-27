#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            "JLTS_weapons_DP23",
            "Aux501_Patch_Accessories",
            "JLTS_weapons_DC17SA",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] =
        {
            QGVAR(DP23_Base),
            QGVAR(DP23),
            QGVAR(DP23_Fried),
            QGVAR(DP23_RiotShield),
            QGVAR(DP23_RiotShield_Fried)
        };
        VERSION_CONFIG;
    };
};