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
            "3AS_Weapons_WestarM5",
            "SWLW_clones",
            "JLTS_weapons_DC17SA",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] = {
            QCLASS(WestarM5_Base),
            QCLASS(WestarM5),
            QCLASS(WestarM5_UGL),
            QCLASS(WestarM5_Fried),
            QCLASS(WestarM5_UGL_Fried),
            QCLASS(Westar_M5),
            QCLASS(Westar_M5_UGL)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
