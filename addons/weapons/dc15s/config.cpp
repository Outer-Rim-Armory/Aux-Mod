#include "script_component.hpp"
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
            "JLTS_weapons_DC15S",
            "Aux501_Patch_Accessories",
            "JLTS_weapons_DC17SA",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(DC15S_Base),
            QCLASS(DC15S),
            QCLASS(DC15S_Fried),
            QCLASS(DC15S_RiotShield),
            QCLASS(DC15S_RiotShield_Fried)
        };
    };
};