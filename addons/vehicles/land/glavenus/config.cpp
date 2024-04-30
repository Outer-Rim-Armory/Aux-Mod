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
            QGVAR(sounds)
        };
        units[] = {
            QCLASS(Glavenus_Unarmed),
            QCLASS(Glavenus_Medic),
            QCLASS(Glavenus_HMG),
            QCLASS(Glavenus_GMG)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"