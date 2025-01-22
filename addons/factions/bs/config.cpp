#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "OPTRE_UNSC_Units_Army",
            "OPTRE_UNSC_Units_NVGs",
            "OPTRE_Weapons_Backpacks",
            "SC_MDF",
            "sc_equipment",
            "ScionPatch",

        };
        units[] = {
            QCLASS(BS_Unit_Base),
            QCLASS(BS_Unit_Rifleman),
            QCLASS(BS_Unit_Rifleman_T2),
            QCLASS(BS_Unit_Rifleman_T3),
            QCLASS(BS_Unit_AT),
            QCLASS(BS_Unit_AT_T2),
            QCLASS(BS_Unit_AT_T3),
            QCLASS(BS_Unit_AA),
            QCLASS(BS_Unit_AA_T2),
            QCLASS(BS_Unit_AA_T3),
            QCLASS(BS_Unit_Marksman),
            QCLASS(BS_Unit_Marksman_T2),
            QCLASS(BS_Unit_Marksman_T3),
            QCLASS(BS_Unit_SL),
            QCLASS(BS_Unit_SL_T2),
            QCLASS(BS_Unit_SL_T3),
            QCLASS(BS_Backpack),
            QCLASS(BS_Backpack_Predef_Rifleman),
            QCLASS(BS_Backpack_Predef_Marksman),
            QCLASS(BS_Veteran_Backpack),
            QCLASS(BS_Veteran_Backpack_Predef_Rifleman),
            QCLASS(BS_Veteran_Backpack_Predef_Marksman),
            QCLASS(BS_Elite_Backpack),
            QCLASS(BS_Elite_Backpack_Predef_Rifleman),
            QCLASS(BS_Elite_Backpack_Predef_Marksman),
            QCLASS(BS_Backpack_Heavy),
            QCLASS(BS_Backpack_Heavy_Predef_AT),
            QCLASS(BS_Backpack_Heavy_Predef_AA),
            QCLASS(BS_Veteran_Backpack_Heavy),
            QCLASS(BS_Veteran_Backpack_Heavy_Predef_AT),
            QCLASS(BS_Veteran_Backpack_Heavy_Predef_AA),
            QCLASS(BS_Elite_Backpack_Heavy),
            QCLASS(BS_Elite_Backpack_Heavy_Predef_AT),
            QCLASS(BS_Elite_Backpack_Heavy_Predef_AA),
            QCLASS(BS_Backpack_RTO),
            QCLASS(BS_Backpack_RTO_Predef_SL),
            QCLASS(BS_Veteran_Backpack_RTO_Predef_SL),
            QCLASS(BS_Elite_Backpack_RTO),
            QCLASS(BS_Elite_Backpack_RTO_Predef_SL)
        };
        weapons[] = {
            QCLASS(BS_Helmet),
            QCLASS(BS_Helmet_SL),
            QCLASS(BS_Helmet_T2),
            QCLASS(BS_Helmet_T3),
            QCLASS(BS_Uniform),
            QCLASS(BS_Vest),
            QCLASS(BS_Vest_Medium),
            QCLASS(BS_Vest_Heavy)
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgGroups.hpp"
#include "CfgWorlds.hpp"