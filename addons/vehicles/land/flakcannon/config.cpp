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
            "3AS_Static_FlakCannon"
        };
        units[] = {
            QCLASS(Flak_Cannon_Base)
        };
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
