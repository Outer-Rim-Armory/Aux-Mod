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
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            "JLTS_weapons_DC17SA",
            "Aux501_Patch_Accessories",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(Muzzle_FakeUGL),
            QCLASS(DC17_Base),
            QCLASS(DC17),
            QCLASS(DC17_Fried),
            QCLASS(DC17_RiotShield),
            QCLASS(DC17_RiotShield_Fried)
        };
        VERSION_CONFIG;
    };
};