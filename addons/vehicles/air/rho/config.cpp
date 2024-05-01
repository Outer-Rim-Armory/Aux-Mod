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
            "3AS_Republic_Heli_Rho"
        };
        units[] = {
            QCLASS(Rho),
            QCLASS(Rho_medical),
            QCLASS(Rho_crate_base),
            QCLASS(Rho_crateBarracks),
            QCLASS(Rho_crateTransport),
            QCLASS(Rho_crateMedical)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Facilities.hpp"