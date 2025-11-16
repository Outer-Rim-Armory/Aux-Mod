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
            "ace_mk6mortar",
            "3AS_Mortar",
            "3AS_Main",
            "ls_vehicles_ground"
        };
        units[] = {
            QCLASS(Mortar_Base),
            QCLASS(Mortar_M190)
        };
        weapons[] = {
            QCLASS(Mortar_M190_Carry),
            QCLASS(Mortar_M190_ProxyWeapon)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
