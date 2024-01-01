#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"

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
            "JLTS_weapons_Z6"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(Z6_Base),
            QCLASS(Z6),
            QCLASS(Z6_Fried)
        };
    };
};