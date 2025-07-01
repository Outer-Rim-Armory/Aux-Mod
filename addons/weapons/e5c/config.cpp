#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(e5),
            "JLTS_weapons_E5C"
        };
        units[] = {};
        weapons[] = {
            QCLASS(E5C_Base),
            QCLASS(E5C),
            QCLASS(E5C_Fried),
            QCLASS(E5C_Stock),
            QCLASS(E5C_Stock_Fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
