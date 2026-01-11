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
            "212th_APC_test"
        };
        units[] = {
            QCLASS(Bantha_Unarmed),
            QCLASS(Bantha_Assault),
            QCLASS(Bantha_IFV),
            QCLASS(Bantha_MSV),
            QCLASS(Bantha_Cargo)

        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
