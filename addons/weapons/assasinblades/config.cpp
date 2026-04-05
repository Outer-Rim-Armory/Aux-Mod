#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "WBK_NewStarWars_Weapons"
        };
        units[] = {};
        weapons[] = {
            QCLASS(Assasin_Blades),
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
