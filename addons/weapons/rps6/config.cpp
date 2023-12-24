#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CBA_DisposableLaunchers.hpp"


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
            "ls_weapons"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(RPS6_Base),
            QCLASS(RPS6_Disposable),
            QCLASS(RPS6_Loaded),
            QCLASS(RPS6_Used),
            QCLASS(RPS6_Disposable_Fried)
        };
        VERSION_CONFIG;
    };
};