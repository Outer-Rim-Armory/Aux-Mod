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
            QCLASS(weapons_dc15s),
            "3AS_Main",
            "3AS_Weapons_DC15C",
            "Aux501_Patch_Accessories",
            "JLTS_weapons_DC17SA",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(DC15C_Base),
            QCLASS(DC15C),
            QCLASS(DC15C_Fried)
        };
        VERSION_CONFIG;
    };
};