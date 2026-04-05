#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "WBK_SomeSciFiWeapons"
        };
        units[] = {};
        weapons[] = {
            QCLASS(VibroBlade),
            QCLASS(VibroBlade_BX)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
