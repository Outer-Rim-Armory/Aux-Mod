#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(b2Blaster),
            "WBK_PhoenixTreal_FlamethrowerMOD",
            "M2",
            "JLTS_C_Credits"
        };
        units[] = {};
        weapons[] = {
            QCLASS(B2Blaster_flamer)
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"