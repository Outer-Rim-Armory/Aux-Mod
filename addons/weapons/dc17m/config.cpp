#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"


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
            "SWLW_clones_spec",
            "3AS_Main"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(DC17M_Base),
            QCLASS(DC17M)
        };
        VERSION_CONFIG;
    };
};