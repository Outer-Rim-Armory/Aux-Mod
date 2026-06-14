#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(weapons),
            QGVAR(sounds),
            "optre_catfish",
            "RD501_patch_speed_boats"
        };
        units[] = {
            QCLASS(Duna_Base),
            QCLASS(Duna_Medical),
            QCLASS(Duna_Unarmed),
            QCLASS(Duna_Armed),
            QCLASS(Duna_Armed_Engineer),
            QCLASS(Duna_ATGM),
            QCLASS(Duna_AA),
            QCLASS(Duna_Gauss)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
