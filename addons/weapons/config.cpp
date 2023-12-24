#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "CfgEventHandlers.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core),
            "JLTS_weapons_Core",
            "3AS_Main",
            "SWLW_main"
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