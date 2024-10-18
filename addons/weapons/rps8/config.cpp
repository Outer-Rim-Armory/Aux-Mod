#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "LF_Weapon_Unit_RPS6",
            "ls_weapons"
        };
        units[] = {};
        weapons[] = {
            QCLASS(RPS8_Base),
            QCLASS(RPS8),
            QCLASS(RPS8_Fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"