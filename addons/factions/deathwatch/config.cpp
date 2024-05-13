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
            QCLASS(mandalorianBackpack_deathwatch_jt12),
            QCLASS(mandalorianBackpack_deathwatch_z6)
        };
        weapons[] = {
            QCLASS(mandalorianHelmet_deathwatch),
            QCLASS(mandalorianHelmet_deathwatch_PreVizsla)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"