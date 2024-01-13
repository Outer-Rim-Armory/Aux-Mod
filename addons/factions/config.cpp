#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core),
            QEGVAR(vehicles,load_order),
            "ls_armor_redfor",
            "ls_armor_greenfor"
        };
        units[] =
        {
            QCLASS(OPFOR_Unit_Base),
            QCLASS(INDEP_Unit_Base),
            QCLASS(OtherSide_Backpack_Base)
        };
        weapons[] =
        {
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