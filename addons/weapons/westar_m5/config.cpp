#include "script_component.hpp"

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
            "3AS_Weapons_WestarM5",
            "SWLW_clones",
            "Aux501_Patch_Accessories",
            "JLTS_weapons_DC17SA",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(WestarM5_Base),
            QCLASS(WestarM5),
            QCLASS(WestarM5_UGL),
            QCLASS(WestarM5_Fried),
            QCLASS(WestarM5_UGL_Fried),
            QCLASS(Westar_M5),
            QCLASS(Westar_M5_UGL),
            QCLASS(WestarM5_Scope)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"