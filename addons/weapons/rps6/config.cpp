#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "ls_weapons"
        };
        units[] = {};
        weapons[] = {
            QCLASS(RPS6_Base),
            QCLASS(RPS6_Disposable),
            QCLASS(RPS6_Loaded),
            QCLASS(RPS6_Used),
            QCLASS(RPS6_Disposable_Fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CBA_DisposableLaunchers.hpp"
