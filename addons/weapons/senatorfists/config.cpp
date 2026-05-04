#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
	        "WBK_NewMeleeWEaponsTier2",
        };
        units[] = {};
        weapons[] = {
            QCLASS(Armstrong)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
