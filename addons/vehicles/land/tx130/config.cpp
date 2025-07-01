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
            "3AS_SaberTank"
        };
        units[] = {
            QCLASS(TX130_M1),
            QCLASS(TX130_M1_Recon),
            QCLASS(TX130_M1_GL),
            QCLASS(TX130_Super)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
