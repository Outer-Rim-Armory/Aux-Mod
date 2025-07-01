#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "LFPMeleeWeapon"
        };
        units[] = {};
        weapons[] = {
            QCLASS(Clone_Knife),
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
