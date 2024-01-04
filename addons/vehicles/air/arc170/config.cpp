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
            QCLASS(armor),
            QCLASS(vehicles_weapons),
            QCLASS(vehicles_sounds)
        };
        units[] =
        {
            QCLASS(ARC170)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};