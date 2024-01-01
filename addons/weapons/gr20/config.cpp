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
            QCLASS(weapons_dc17),
            QCLASS(weapons_grenades)
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(GR20),
            QCLASS(GR20_Fried)
        };
        VERSION_CONFIG;
    };
};