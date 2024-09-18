#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            QEGVAR(factions,cis)
        };
        units[] = {
            QCLASS(CIS_Unit_Droid_B2_Revived),
            QCLASS(CIS_Unit_Droid_BX_Revived)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgMovesBasic.hpp"
#include "CfgMovesMaleSdr.hpp"
#include "CfgEventHandlers.hpp"