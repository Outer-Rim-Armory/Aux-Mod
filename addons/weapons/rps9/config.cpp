#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "3AS_Weapons_RPS6HP",
            "ls_weapons"
        };
        units[] = {};
        weapons[] = {
            QCLASS(RPS9_Base),
            QCLASS(RPS9),
            QCLASS(RPS9_Fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"