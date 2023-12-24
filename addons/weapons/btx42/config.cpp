#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "SweMonkey and DartRuffian";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            "3AS_BX42",
            "WBK_PhoenixTreal_FlamethrowerMOD",
            "M2"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(X42_Base),
            QCLASS(X42),
            QCLASS(X42_Heavy)
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};