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
            "JLTS_RPS6"
        };
        units[] = {};
        weapons[] =
        {
        };
        VERSION_CONFIG;
    };
};