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
            "3AS_LAAT"
        };
        units[] = {
            QCLASS(LAATi_Base),
            QCLASS(LAATi_MK1),
            QCLASS(LAATi_MK1_Lamps),
            QCLASS(LAATi_MK2),
            QCLASS(LAATi_MK2_Lamps)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"