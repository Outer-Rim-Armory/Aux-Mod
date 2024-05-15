#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(mandalorians)
        };
        units[] = {
            QCLASS(mandalorianArmor_backpack_deathwatch_jt12),
            QCLASS(mandalorianArmor_backpack_deathwatch_z6)
        };
        weapons[] = {
            QCLASS(mandalorianArmor_helmet_deathwatch),
            QCLASS(mandalorianArmor_helmet_deathwatch_PreVizsla)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"