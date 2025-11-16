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
            "ls_armor_greenfor",

        };
        units[] = {
            QCLASS(BS_Unit_Base),
            QCLASS(BS_Unit_Rifleman),
            QCLASS(BS_Unit_Rifleman_T2),
            QCLASS(BS_Unit_Rifleman_T3),
            QCLASS(BS_Unit_AT),
            QCLASS(BS_Unit_AT_T2),
            QCLASS(BS_Unit_AT_T3),
            QCLASS(BS_Unit_Marksman),
            QCLASS(BS_Unit_Marksman_T2),
            QCLASS(BS_Unit_Marksman_T3),
            QCLASS(BS_Unit_Heavy),
            QCLASS(BS_Unit_Heavy_T2),
            QCLASS(BS_Unit_Heavy_T3),
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
            QCLASS(BS_Veteran_Backpack_Heavy),
            QCLASS(BS_Veteran_Backpack_Heavy_Predef_AT),
            QCLASS(BS_Elite_Backpack_Heavy),
            QCLASS(BS_Elite_Backpack_Heavy_Predef_AT),
            QCLASS(BS_Backpack_RTO),
            QCLASS(BS_Backpack_RTO_Predef_SL),
            QCLASS(BS_Veteran_Backpack_RTO_Predef_SL),
            QCLASS(BS_Elite_Backpack_RTO),
            QCLASS(BS_Elite_Backpack_RTO_Predef_SL),
            QCLASS(AAT_BS),
            QCLASS(AAT_Heavy_BS),
            QCLASS(AAT_King_BS),
            QCLASS(Conga_IFV_BS),
            QCLASS(Conga_MGS_BS),
            QCLASS(ScoutTank_BS),
            QCLASS(Ogre_BS),
            QCLASS(Ogre_Armed_BS),
            QCLASS(Vespoid_BS),
            QCLASS(Vespoid_Armed_BS),
            QCLASS(Rathian_CAP_BS),
            QCLASS(Rathian_CAS_BS)
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
