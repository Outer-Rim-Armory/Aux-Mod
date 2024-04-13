#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(accessories),
            "JLTS_weapons_DP23",
            "JLTS_weapons_DC17SA",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] = {
            QGVAR(DP23_Base),
            QGVAR(DP23),
            QGVAR(DP23_Fried),
            QGVAR(DP23_RiotShield),
            QGVAR(DP23_RiotShield_Fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"