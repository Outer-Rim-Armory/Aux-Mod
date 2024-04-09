#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(e5),
            "ls_weapons",
            "SWLW_clones",
            "SWLW_droids",
            "3AS_Weapons_DWBlaster"
        };
        units[] = {};
        weapons[] = {
            QCLASS(B2Blaster_base),
            QCLASS(B2Blaster),
            QCLASS(B2Blaster_grenadeLauncher),
            QCLASS(B2Blaster_rocket)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"