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
            QCLASS(weapons_loadOrder),
            "3AS_Prop_Crates"
        };
        units[] =
        {
            s
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};