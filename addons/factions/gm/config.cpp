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
            QCLASS(GM_Unit_Base),
            QCLASS(GM_Unit_Rifleman),
            QCLASS(GM_Unit_Rifleman_T2),
            QCLASS(GM_Unit_Rifleman_T3),
            QCLASS(GM_Unit_AT),
            QCLASS(GM_Unit_AT_T2),
            QCLASS(GM_Unit_AT_T3),
            QCLASS(GM_Unit_AA),
            QCLASS(GM_Unit_AA_T2),
            QCLASS(GM_Unit_AA_T3),
            QCLASS(GM_Unit_Marksman),
            QCLASS(GM_Unit_Marksman_T2),
            QCLASS(GM_Unit_Marksman_T3),
            QCLASS(GM_Unit_SL),
            QCLASS(GM_Unit_SL_T2),
            QCLASS(GM_Unit_SL_T3),
            QCLASS(GM_RLA_Unit_Rifleman),
            QCLASS(GM_RLA_Unit_Rifleman_T2),
            QCLASS(GM_RLA_Unit_AT),
            QCLASS(GM_RLA_Unit_AT_T2),
            QCLASS(GM_RLA_Unit_AA),
            QCLASS(GM_RLA_Unit_AA_T2),
            QCLASS(GM_RLA_Unit_Marksman),
            QCLASS(GM_RLA_Unit_Marksman_T2),
            QCLASS(GM_RLA_Unit_SL),
            QCLASS(GM_RLA_Unit_SL_T2),
            QCLASS(GM_Unit_Vex),
            QCLASS(GM_Backpack),
            QCLASS(GM_Backpack_Predef_Rifleman),
            QCLASS(GM_Backpack_Predef_Marksman),
            QCLASS(GM_Veteran_Backpack),
            QCLASS(GM_Veteran_Backpack_Predef_Rifleman),
            QCLASS(GM_Veteran_Backpack_Predef_Marksman),
            QCLASS(GM_Elite_Backpack),
            QCLASS(GM_Elite_Backpack_Predef_Rifleman),
            QCLASS(GM_Elite_Backpack_Predef_Marksman),
            QCLASS(GM_Backpack_Heavy),
            QCLASS(GM_Backpack_Heavy_Predef_AT),
            QCLASS(GM_Backpack_Heavy_Predef_AA),
            QCLASS(GM_Veteran_Backpack_Heavy),
            QCLASS(GM_Veteran_Backpack_Heavy_Predef_AT),
            QCLASS(GM_Veteran_Backpack_Heavy_Predef_AA),
            QCLASS(GM_Elite_Backpack_Heavy),
            QCLASS(GM_Elite_Backpack_Heavy_Predef_AT),
            QCLASS(GM_Elite_Backpack_Heavy_Predef_AA),
            QCLASS(GM_Backpack_RTO),
            QCLASS(GM_Backpack_RTO_Predef_SL),
            QCLASS(GM_Veteran_Backpack_RTO_Predef_SL),
            QCLASS(GM_Elite_Backpack_RTO),
            QCLASS(GM_Elite_Backpack_RTO_Predef_SL),
            QCLASS(GM_RLA_Backpack_Predef_Rifleman),
            QCLASS(GM_RLA_Veteran_Backpack_Predef_Rifleman),
            QCLASS(GM_RLA_Backpack_Heavy_Predef_AT),
            QCLASS(GM_RLA_Veteran_Backpack_Heavy_Predef_AT),
            QCLASS(GM_RLA_Backpack_Heavy_Predef_AA),
            QCLASS(GM_RLA_Veteran_Backpack_Heavy_Predef_AA),
            QCLASS(GM_RLA_Backpack_Predef_Marksman),
            QCLASS(GM_RLA_Veteran_Backpack_Predef_Marksman),
            QCLASS(GM_RLA_Backpack_RTO_Predef_SL),
            QCLASS(GM_RLA_Veteran_Backpack_RTO_Predef_SL)
        };
        weapons[] = {
            QCLASS(GM_Helmet),
            QCLASS(GM_Helmet_SL),
            QCLASS(GM_Helmet_T2),
            QCLASS(GM_Helmet_T3),
            QCLASS(GM_RLA_Helmet),
            QCLASS(GM_RLA_Helmet_T2),
            QCLASS(GM_Uniform),
            QCLASS(GM_Uniform_Vex),
            QCLASS(GM_Vest),
            QCLASS(GM_Vest_Medium),
            QCLASS(GM_Vest_Heavy),
            QCLASS(GM_RLA_Vest),
            QCLASS(GM_RLA_Vest_Medium)
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
