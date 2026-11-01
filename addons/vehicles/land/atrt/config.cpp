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
            "3AS_ATRT",
            "ls_vehicles_atrt"
        };
        units[] = {
            QCLASS(ATRT),
            QCLASS(ATRT_LS)
        };
        weapons[] = {
            QCLASS(Uniform_ATRT),
            QCLASS(Uniform_ATRT_LS)
    };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
