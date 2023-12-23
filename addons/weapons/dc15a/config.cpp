#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            "JLTS_weapons_DC15A",
            "Aux501_Patch_Accessories",
            "JLTS_weapons_DC17SA",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(DC15A_Base),
            QCLASS(DC15A),
            QCLASS(DC15A_Fried),
            QCLASS(DC15A_UGL),
            QCLASS(DC15A_UGL_Fried)
        };
        magazines[] =
        {
            "Aux12thFleet_Mag_DC15A"
        };
        ammo[] = {};
    };
};