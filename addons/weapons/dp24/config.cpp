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
            "OPTRE_Weapons_Shotgun",
            "JLTS_weapons_DC17SA",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] = {
            QGVAR(DP24_Base),
            QGVAR(DP24)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"