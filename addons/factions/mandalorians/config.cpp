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
            QCLASS(mandalorianArmor_unit_base),
            QCLASS(mandalorianArmor_backpack_base),
            QCLASS(mandalorianArmor_backpack_jt12),
            QCLASS(mandalorianArmor_backpack_jt12_Dart),
            QCLASS(mandalorianArmor_backpack_z6)
        };
        weapons[] = {
            QCLASS(mandalorianArmor_helmet_base),
            QCLASS(mandalorianArmor_helmet_traditional),
            QCLASS(mandalorianArmor_helmet_traditional_Dart),
            QCLASS(mandalorianArmor_uniform_base),
            QCLASS(mandalorianArmor_vest_base),
            QCLASS(mandalorianArmor_vest_medium),
            QCLASS(mandalorianArmor_vest_medium_Dart),
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