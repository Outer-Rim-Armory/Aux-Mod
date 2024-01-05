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
            QCLASS(Galaxy_Gunship),
            QCLASS(Galaxy_Transport_Vehicle),
            QCLASS(Galaxy_Transport_Infantry),
            QCLASS(HAG_Base),
            QCLASS(HVT_Base),
            QCLASS(HIT_Base)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};