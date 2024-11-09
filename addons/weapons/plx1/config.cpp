#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "JLTS_weapons_PLX1",
            "3AS_Weapons"
        };
        units[] = {};
        weapons[] = {
            QCLASS(PLX1_Base),
            QCLASS(PLX1),
            QCLASS(PLX1_Fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"