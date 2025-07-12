#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "sc_props",
            "sc_equipment",
            "LFPModels"
        };
        units[] = {
            QCLASS(TU_Unit_Base),
            QCLASS(TU_Unit_Rifleman),
            QCLASS(TU_Unit_Rifleman_Jetpack),
            QCLASS(TU_Unit_Rifleman_Shield),
            QCLASS(TU_Unit_AssaultHeavy),
            QCLASS(TU_Unit_AssaultHeavy_Jetpack),
            QCLASS(TU_Unit_HeavyGunner),
            QCLASS(TU_Unit_AssaultMedium),
            QCLASS(TU_Unit_AT),
            QCLASS(TU_Unit_AA),
            QCLASS(TU_Unit_SL),
            QCLASS(TU_Unit_Pilot),
            QCLASS(TU_Unit_Sniper),
            QCLASS(TU_Unit_Melee),
            QCLASS(TU_Backpack),
            QCLASS(TU_Backpack_Predef_Rifleman),
            QCLASS(TU_Backpack_Predef_Sniper),
            QCLASS(TU_Backpack_Heavy),
            QCLASS(TU_Backpack_Heavy_Predef_AT),
            QCLASS(TU_Backpack_Heavy_Predef_AA),
            QCLASS(TU_Backpack_Assault),
            QCLASS(TU_Backpack_Assault_Predef_Heavy),
            QCLASS(TU_Backpack_Assault_Predef_Medium),
            QCLASS(TU_Backpack_Assault_Predef_Z6),
            QCLASS(TU_Backpack_RTO),
            QCLASS(TU_Backpack_RTO_Predef_SL),
            QCLASS(EPF_Jetpack),
            QCLASS(TU_Jetpack_Predef),
            QCLASS(AAT_TU),
            QCLASS(AAT_Heavy_TU),
            QCLASS(AAT_King_TU),
            QCLASS(Plesioth_TU),
            QCLASS(Conga_IFV_TU),
            QCLASS(Conga_MGS_TU),
            QCLASS(AST_TU),
            QCLASS(Ogre_TU),
            QCLASS(Ogre_Armed_TU),
            QCLASS(Vespoid_TU),
            QCLASS(Vespoid_Armed_TU),
            QCLASS(Rathian_CAP_TU),
            QCLASS(Rathian_CAS_TU)
        };
        weapons[] = {
            QCLASS(OPFOR_Helmet_Base),
            QCLASS(TU_Helmet),
            QCLASS(TU_Helmet_Assault),
            QCLASS(TU_Helmet_Visor),
            QCLASS(TU_Helmet_Visor_Goggles),
            QCLASS(TU_Helmet_Heavy),
            QCLASS(TU_Uniform),
            QCLASS(TU_Vest),
            QCLASS(TU_Vest_Medium),
            QCLASS(TU_Vest_AssaultMedium),
            QCLASS(TU_Vest_AssaultHeavy)
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgGlasses.hpp"
#include "CfgWorlds.hpp"
#include "CfgEventHandlers.hpp"
