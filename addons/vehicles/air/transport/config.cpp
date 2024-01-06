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
            "3as_Starships"
        };
        units[] =
        {
            QCLASS(RepublicTransport),
            QCLASS(RepubTransport)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};