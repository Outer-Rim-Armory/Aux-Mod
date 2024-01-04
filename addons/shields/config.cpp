#include "script_component.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"


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
            QEGVAR(vehicles,loadOrder)
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};