#include "script_component.hpp"
#include "CfgVehicles.hpp"
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
            QUOTE(ADDON),
            QGVAR(weapons),
            QGVAR(sounds),
            "ace_csw",
            "ace_mk6mortar",
            "3AS_Mortar",
            "3AS_Main",
            "ls_vehicles_ground"
        };
        units[] =
        {
            QCLASS(Mortar_Base),
            QCLASS(Mortar_M190)
        };
        weapons[] =
        {
            QCLASS(Mortar_M190_Carry),
            QCLASS(Mortar_M190_ProxyWeapon)
        };
        VERSION_CONFIG;
    };
};