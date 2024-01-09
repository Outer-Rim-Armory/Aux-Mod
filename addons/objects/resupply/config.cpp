#include "script_component.hpp"
#include "CfgVehicles.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            QCLASS(weapons_load_order),
            "3AS_Prop_Crates"
        };
        units[] =
        {
            QCLASS(Resupply_Base),
            QCLASS(Resupply_SquadAmmo),
            QCLASS(Resupply_PlatoonAmmo),
            QCLASS(Resupply_SquadAmmo_Heavy),
            QCLASS(Resupply_PlatoonAmmo_Heavy),
            QCLASS(Resupply_SquadMedical),
            QCLASS(Resupply_PlatoonMedical)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};