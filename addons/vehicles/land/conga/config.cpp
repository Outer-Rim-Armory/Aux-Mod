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
            "OPTRE_Vehicles_Bison"
        };
        units[] = {
            QCLASS(Conga_IFV_Base),
            QCLASS(Conga_MGS_Base)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"