#include "script_component.hpp"
#include "CfgWeapons.hpp"


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
            QUOTE(ADDON)
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(Optic_Base),
            QCLASS(Optic_Holosight)
        };
        VERSION_CONFIG;
    };
};