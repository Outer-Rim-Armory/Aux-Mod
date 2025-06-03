#include "script_component.hpp"


class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QCLASS(weapons_load_order),
            "3AS_Prop_Crates"
        };
        units[] = {
            QCLASS(Resupply_Base),
            QCLASS(Resupply_SquadAmmo),
            QCLASS(Resupply_PlatoonAmmo),
            QCLASS(Resupply_SquadAmmo_Heavy),
            QCLASS(Resupply_PlatoonAmmo_Heavy),
            QCLASS(Resupply_SquadMedical),
            QCLASS(Resupply_PlatoonMedical),
            QCLASS(Resupply_DisposableLaunchers),
            QCLASS(Resupply_PlatoonAmmo_Commando),
            QCLASS(Resupply_Rockets),
            QCLASS(Resupply_Raptor_PlatoonAmmo),
            QCLASS(Resupply_Raptor_Drone),
            QCLASS(Resupply_Misc),
            QCLASS(Resupply_Sapper),
            QCLASS(Resupply_Spartan),
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"