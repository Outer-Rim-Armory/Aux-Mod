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
            "3AS_CIS_Walkers_Octopara",
        };
        units[] = {
            QCLASS(Octuptarra_Combat_Base),
            QCLASS(Octuptarra_Static_Combat_Base),
            QCLASS(Octuptarra_Magna_Base),
            QCLASS(Octuptarra_Static_Magna_Base),
            QCLASS(Octuptarra_Torpedo_Base),
            QCLASS(Octuptarra_Static_Torpedo_Base)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
