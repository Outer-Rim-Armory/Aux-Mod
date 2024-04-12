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
            QCLASS(Galaxy_Gunship),
            QCLASS(Galaxy_Transport_Vehicle),
            QCLASS(Galaxy_Transport_Infantry),
            QCLASS(HAG_Base),
            QCLASS(HVT_Base),
            QCLASS(HIT_Base)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"