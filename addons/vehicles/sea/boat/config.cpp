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
            QCLASS(Boat_Base),
            QCLASS(Boat_Medical),
            QCLASS(Boat_Unarmed),
            QCLASS(Boat_Armed),
            QCLASS(Boat_Armed_Engineer),
            QCLASS(Boat_ATGM),
            QCLASS(Boat_AA),
            QCLASS(Boat_Gauss)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
