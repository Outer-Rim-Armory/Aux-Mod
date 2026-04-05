#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "LF_Weapon_Unit_Melee"
        };
        units[] = {};
        weapons[] = {
            QCLASS(ElectroStaff),
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
