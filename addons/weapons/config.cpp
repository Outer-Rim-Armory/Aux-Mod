#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            QCLASS(particles),
            "JLTS_weapons_Core",
            "3AS_Main",
            "SWLW_main"
        };
        units[] = {};
        weapons[] = {
            QCLASS(Muzzle_Stun),
            QCLASS(Muzzle_Stun_Fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "CfgEffects.hpp"
#include "CfgCloudlets.hpp"
#include "CfgEventHandlers.hpp"
#include "ACE_Arsenal_Stats.hpp"