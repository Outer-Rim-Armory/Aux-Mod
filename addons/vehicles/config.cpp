#include "script_component.hpp"
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
            QCLASS(armor),
            "ls_vehicles_weapons",
            "ls_functions"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};