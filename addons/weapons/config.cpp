#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "CfgEventHandlers.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "SweMonkey and DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core)
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(Muzzle_Stun),
            QCLASS(Muzzle_Stun_Fried)
        };
        VERSION_CONFIG;
    };
};