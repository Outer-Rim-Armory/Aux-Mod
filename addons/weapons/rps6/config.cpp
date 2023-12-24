#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CBA_DisposableLaunchers.hpp"


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
            "ls_weapons"
        };
        units[] = {};
        weapons[] =
        {
        };
        VERSION_CONFIG;
    };
};