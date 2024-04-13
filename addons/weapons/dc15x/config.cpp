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
            "JLTS_weapons_DC15X",
            "JLTS_weapons_DC17SA",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] = {
            QCLASS(DC15X_Base),
            QCLASS(DC15X),
            QCLASS(DC15X_Fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"