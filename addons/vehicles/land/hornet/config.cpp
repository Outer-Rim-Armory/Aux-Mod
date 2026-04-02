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
            QCLASS(Hornet_Unarmed),
            QCLASS(Hornet_MG),
            QCLASS(Hornet_AT),
            QCLASS(Hornet_Armed),
            QCLASS(Hornet_Unarmed_Carnage),
            QCLASS(Hornet_MG_Carnage),
            QCLASS(Hornet_AT_Carnage)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
