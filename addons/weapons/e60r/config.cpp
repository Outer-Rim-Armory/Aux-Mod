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
            "JLTS_weapons_E60R",
            "LS_weapon_core"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(E60R_AT_Base),
            QCLASS(E60R_AT),
            QCLASS(E60R_AT_Fried),
            QCLASS(E60R_AA_Base),
            QCLASS(E60R_AA),
            QCLASS(E60R_AA_Fried)
        };
        VERSION_CONFIG;
    };
};