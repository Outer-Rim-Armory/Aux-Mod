#include "script_component.hpp"
#include "CfgVehicles.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            QGVAR(weapons),
            QGVAR(sounds),
            "3AS_LAAT"
        };
        units[] =
        {
            QCLASS(LAATi_Base),
            QCLASS(LAATi_MK1),
            QCLASS(LAATi_MK1_Lamps),
            QCLASS(LAATi_MK2),
            QCLASS(LAATi_MK2_Lamps)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};