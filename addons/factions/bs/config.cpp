#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "SC_MDF",
            "sc_equipment",
            "ScionPatch"
        };
        units[] = {
            QCLASS(BS_Unit_Base),
            QCLASS(BS_Unit_Rifleman),
            QCLASS(BS_Unit_AT),
            QCLASS(BS_Unit_Sniper),
            QCLASS(BS_Unit_Heavy),
            QCLASS(BS_Unit_Captain),
            QCLASS(BS_Backpack),
            QCLASS(BS_Backpack_Predef_Rifleman),
            QCLASS(BS_Backpack_Heavy),
            QCLASS(BS_Backpack_Heavy_Predef_AT),
            QCLASS(BS_Backpack_RTO),
            QCLASS(BS_Backpack_RTO_Predef_SL)
        };
        weapons[] = {
            QCLASS(BS_Captain_Helmet),
            QCLASS(BS_Helmet_Rifleman),
            QCLASS(BS_Helmet_Heavy),
            QCLASS(BS_Uniform),
            QCLASS(BS_Vest),
            QCLASS(BS_Vest_Medium),
            QCLASS(BS_Vest_Heavy),
            QCLASS(BS_Vest_Captain)
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"