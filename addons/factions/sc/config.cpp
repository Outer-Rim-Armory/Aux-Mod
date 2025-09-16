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
            "SC_MDF"
        };
        units[] = {
            QCLASS(SC_Unit_Base),
            QCLASS(SC_Unit_Rifleman),
            QCLASS(SC_Unit_Rifleman_T2),
            QCLASS(SC_Unit_Rifleman_T3),
            QCLASS(SC_Unit_AT),
            QCLASS(SC_Unit_AT_T2),
            QCLASS(SC_Unit_AT_T3),
            QCLASS(SC_Unit_AA),
            QCLASS(SC_Unit_AA_T2),
            QCLASS(SC_Unit_AA_T3),
            QCLASS(SC_Unit_Marksman),
            QCLASS(SC_Unit_Marksman_T2),
            QCLASS(SC_Unit_Marksman_T3),
            QCLASS(SC_Unit_SL),
            QCLASS(SC_Unit_SL_T2),
            QCLASS(SC_Unit_SL_T3),
            QCLASS(SC_Backpack),
            QCLASS(SC_Backpack_Predef_Rifleman),
            QCLASS(SC_Backpack_Predef_Marksman),
            QCLASS(SC_Veteran_Backpack),
            QCLASS(SC_Veteran_Backpack_Predef_Rifleman),
            QCLASS(SC_Veteran_Backpack_Predef_Marksman),
            QCLASS(SC_Elite_Backpack),
            QCLASS(SC_Elite_Backpack_Predef_Rifleman),
            QCLASS(SC_Elite_Backpack_Predef_Marksman),
            QCLASS(SC_Backpack_Heavy),
            QCLASS(SC_Backpack_Heavy_Predef_AT),
            QCLASS(SC_Backpack_Heavy_Predef_AA),
            QCLASS(SC_Veteran_Backpack_Heavy),
            QCLASS(SC_Veteran_Backpack_Heavy_Predef_AT),
            QCLASS(SC_Veteran_Backpack_Heavy_Predef_AA),
            QCLASS(SC_Elite_Backpack_Heavy),
            QCLASS(SC_Elite_Backpack_Heavy_Predef_AT),
            QCLASS(SC_Elite_Backpack_Heavy_Predef_AA),
            QCLASS(SC_Backpack_RTO),
            QCLASS(SC_Backpack_RTO_Predef_SL),
            QCLASS(SC_Veteran_Backpack_RTO_Predef_SL),
            QCLASS(SC_Elite_Backpack_RTO),
            QCLASS(SC_Elite_Backpack_RTO_Predef_SL)
        };
        weapons[] = {
            QCLASS(SC_Helmet),
            QCLASS(SC_Helmet_SL),
            QCLASS(SC_Helmet_T2),
            QCLASS(SC_Helmet_T3),
            QCLASS(SC_Uniform),
            QCLASS(SC_Vest),
            QCLASS(SC_Vest_Medium),
            QCLASS(SC_Vest_Heavy)
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
