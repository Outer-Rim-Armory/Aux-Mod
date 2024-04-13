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
            "lsd_vehicles_cars"
        };
        units[] = {
            QCLASS(ScoutTank_Base)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"