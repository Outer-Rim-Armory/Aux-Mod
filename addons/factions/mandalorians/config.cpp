#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON)
        };
        units[] = {
        };
        weapons[] = {
            QCLASS(mandalorian_helmet_base),
            QCLASS(mandalorian_helmet_traditional),
            QCLASS(mandalorian_helmet_traditional_Dart),
            QCLASS(mandalorian_vest_base),
            QCLASS(mandalorian_vest_medium),
            QCLASS(mandalorian_vest_medium_Dart)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"