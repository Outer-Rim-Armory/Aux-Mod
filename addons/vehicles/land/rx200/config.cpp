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
            QGVAR(sounds)
        };
        units[] = {
            QCLASS(RX200_Base),
            QCLASS(RX200_AA),
            QCLASS(RX200_Artillery)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"