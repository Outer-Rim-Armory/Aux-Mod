#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            QEGVAR(vehicles,load_order),
            "ls_armor_bluefor",
            "ls_armor_redfor",
            "ls_armor_greenfor"
        };
        units[] = {
            QCLASS(BLUFOR_Unit_Base),
            QCLASS(OPFOR_Unit_Base),
            QCLASS(INDEP_Unit_Base),
        };
        weapons[] = {
            QCLASS(BLUFOR_Helmet_Base),
            QCLASS(BLUFOR_Uniform_Base),
            QCLASS(BLUFOR_Vest_Base),
            QCLASS(OPFOR_Helmet_Base),
            QCLASS(OPFOR_Uniform_Base),
            QCLASS(OPFOR_Vest_Base),
            QCLASS(INDEP_Helmet_Base),
            QCLASS(INDEP_Uniform_Base),
            QCLASS(INDEP_Vest_Base)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
