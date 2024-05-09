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
            QCLASS(mandalorianBackpack_base),
            QCLASS(mandalorianBackpack_jt12),
            QCLASS(mandalorianBackpack_jt12_Dart),
            QCLASS(mandalorianBackpack_z6)
        };
        weapons[] = {
            QCLASS(mandalorianHelmet_base),
            QCLASS(mandalorianHelmet_traditional),
            QCLASS(mandalorianHelmet_traditional_Dart),
            QCLASS(mandalorianVest_base),
            QCLASS(mandalorianVest_medium),
            QCLASS(mandalorianVest_medium_Dart),
            QCLASS(mandalorianNvg_base),
            QCLASS(mandalorianNvg_rangefinder),
            QCLASS(mandalorianNvg_rangefinder_Dart)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"