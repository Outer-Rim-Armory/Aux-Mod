#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(armor),
            QEGVAR(factions,cis),
            QEGVAR(objects,resupply),
            "ace_refuel",
            "ace_parachute"
        };
        units[] = {
            QCLASS(Resupply_JetpackFuel)
        };
        weapons[] = {
            QCLASS(Jetpack_FuelCan_Empty),
            QCLASS(Jetpack_FuelCan_Mag)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgFunctions.hpp"
#include "CfgCloudlets.hpp"
#include "CfgRscTitles.hpp"
#include "CfgUIGrids.hpp"
#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "ACE_Arsenal_Stats.hpp"