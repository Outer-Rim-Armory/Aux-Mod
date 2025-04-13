#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "sc_equipment",
        };
        units[] = {
            QCLASS(EPF_Unit_Base),
            QCLASS(EPF_Unit_Rifleman),
            QCLASS(EPF_Unit_Rifleman_Jetpack),
            QCLASS(EPF_Unit_Rifleman_Shield),
            QCLASS(EPF_Unit_AT),
            QCLASS(EPF_Unit_AA),
            QCLASS(EPF_Unit_AssaultHeavy),
            QCLASS(EPF_Unit_AssaultHeavy_Jetpack),
            QCLASS(EPF_Unit_HeavyGunner),
            QCLASS(EPF_Unit_AssaultMedium),
            QCLASS(EPF_Unit_Pilot),
            QCLASS(EPF_Unit_SL),
            QCLASS(EPF_Unit_Sniper),
            QCLASS(EPF_Unit_Melee),
            QCLASS(EPF_Unit_Presidente),
            QCLASS(EPF_Unit_General),
            QCLASS(EPF_Backpack),
            QCLASS(EPF_Backpack_Predef_Rifleman),
            QCLASS(EPF_Backpack_Heavy),
            QCLASS(EPF_Backpack_Heavy_Predef_AT),
            QCLASS(EPF_Backpack_Heavy_Predef_AA),
            QCLASS(EPF_Backpack_Assault),
            QCLASS(EPF_Backpack_Assault_Predef_Heavy),
            QCLASS(EPF_Backpack_Assault_Predef_Medium),
            QCLASS(EPF_Backpack_Assault_Predef_Z6),
            QCLASS(EPF_Backpack_Predef_Sniper),
            QCLASS(EPF_Jetpack),
            QCLASS(EPF_Jetpack_Predef),
            QCLASS(EPF_Backpack_RTO),
            QCLASS(EPF_Backpack_RTO_Predef_SL),
            QCLASS(AAT_EPF),
            QCLASS(AAT_Heavy_EPF),
            QCLASS(AAT_King_EPF),
            QCLASS(Plesioth_EPF),
            QCLASS(Conga_IFV_EPF),
            QCLASS(Conga_MGS_EPF),
            QCLASS(Hornet_EPF),
            QCLASS(Hornet_MG_EPF),
            QCLASS(Hornet_AT_EPF),
            QCLASS(Khezu_EPF),
            QCLASS(Khezu_Armed_EPF),
            QCLASS(AST_EPF),
            QCLASS(Ogre_EPF),
            QCLASS(Ogre_Armed_EPF),
            QCLASS(Vespoid_EPF),
            QCLASS(Vespoid_Armed_EPF),
            QCLASS(Rathian_CAP_EPF),
            QCLASS(Rathian_CAS_EPF)
        };
        weapons[] = {
            QCLASS(EPF_Helmet),
            QCLASS(EPF_Helmet_Assault),
            QCLASS(EPF_Helmet_Visor),
            QCLASS(EPF_Helmet_Visor_Goggles),
            QCLASS(EPF_Helmet_Heavy),
            QCLASS(EPF_Helmet_Presidente),
            QCLASS(EPF_Helmet_General),
            QCLASS(EPF_Uniform),
            QCLASS(EPF_Uniform_Presidente),
            QCLASS(EPF_Uniform_General),
            QCLASS(EPF_Vest),
            QCLASS(EPF_Vest_Medium),
            QCLASS(EPF_Vest_AssaultMedium),
            QCLASS(EPF_Vest_AssaultHeavy),
            QCLASS(EPF_Vest_General)
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgIdentities.hpp"
#include "CfgWorlds.hpp"
#include "CfgEventHandlers.hpp"