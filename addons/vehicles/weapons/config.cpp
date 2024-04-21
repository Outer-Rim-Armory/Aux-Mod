#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QCLASS(weapons),
            "3AS_Main",
            "3AS_Weapons",
            "3AS_VehicleWeapons",
            "3AS_Static",
            "3AS_Mortar",
            "3AS_Ammo"
        };
        units[] = {};
        weapons[] = {
            QCLASS(Autocannon_Reek),
            QCLASS(Autocannon_Galaxy),
            QCLASS(Cannon_ARC),
            QCLASS(Cannon_ARC_Heavy),
            QCLASS(Cannon_ARC_Light),
            QCLASS(Cannon_Galaxy),
            QCLASS(Cannon_YWing),
            QCLASS(Coax_Reek),
            QCLASS(Coax_Commander),
            QCLASS(Gatling_Galaxy),
            QCLASS(Mortar_Turret_Base),
            QCLASS(Mortar_M190_Turret)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "ACE_CSW_Groups.hpp"