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
            "3AS_AAT",
            "ls_vehicles_aat"
        };
        units[] = {
            QCLASS(AAT_Base),
            QCLASS(AAT_captured),
            QCLASS(AAT_Heavy_Base),
            QCLASS(AAT_King),
            QCLASS(AAT_King_Captured),
            QCLASS(Defoliator_AAT_Base),
            QCLASS(Flamer_AAT_Base),
            QCLASS(Shield_AAT_Base)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
