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
            "JLTS_weapons_EPL2",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] = {
            QCLASS(DX50C_Base),
            QCLASS(DX50C),
            QCLASS(DX50C_UGL),
            QCLASS(DX50C_UGL_Fried),
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
