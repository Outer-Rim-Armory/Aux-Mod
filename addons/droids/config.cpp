#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            QEGVAR(factions,cis),
            "WBK_Droids_3AS",
            "WBK_Droids_LS"
        };
        units[] = {
            QCLASS(CIS_Unit_Droid_B2_Revived),
            QCLASS(CIS_Unit_Droid_BX_Revived)
        };
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
