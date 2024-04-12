#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "3AS_BX42",
            "WBK_PhoenixTreal_FlamethrowerMOD",
            "M2",
            "JLTS_C_Credits"
        };
        units[] = {};
        weapons[] = {
            QCLASS(X42_Base),
            QCLASS(X42),
            QCLASS(X42_Fried),
            QCLASS(BTX42),
            QCLASS(BTX45_Heavy)
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"