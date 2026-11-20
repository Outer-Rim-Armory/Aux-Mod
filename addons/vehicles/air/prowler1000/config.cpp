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
            "JLTS_drones_prowler"
        };
        units[] = {
            QCLASS(Prowler_UAV_Base),
            QCLASS(Prowler_UAV)
        };
        weapons[] = {
            QCLASS(Deployable_Prowler)
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
