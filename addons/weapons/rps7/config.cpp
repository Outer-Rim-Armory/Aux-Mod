#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "JLTS_Weapons_RPS6",
            "ls_weapons"
        };
        units[] = {};
        weapons[] = {
            QCLASS(RPS7_Base),
            QCLASS(RPS7),
            QCLASS(RPS7_Fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"