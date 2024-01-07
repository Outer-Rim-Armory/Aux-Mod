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
            "OPTRE_Vehicles_Bison"
        };
        units[] =
        {
            QCLASS(Conga_IFV_Base),
            QCLASS(Conga_MGS_Base)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};