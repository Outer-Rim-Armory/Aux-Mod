#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "sc_equipment"
        };
        units[] = {
            QCLASS(RDF_Unit_Base),
            QCLASS(RDF_Unit_Rifleman),
            QCLASS(RDF_Unit_Rifleman_DC15C),
            QCLASS(RDF_Unit_Grenadier),
            QCLASS(RDF_Unit_Autorifleman),
            QCLASS(RDF_Unit_Marksman),
            QCLASS(RDF_Unit_Rifleman_AT),
            QCLASS(RDF_Unit_Rifleman_AT_Disposable),
            QCLASS(RDF_Unit_SWAT),
            QCLASS(RDF_Unit_SWAT_Chaingun),
            QCLASS(RDF_Backpack),
            QCLASS(RDF_Backpack_Predef_Rifleman),
            QCLASS(RDF_Backpack_Predef_Rifleman_DC15S),
            QCLASS(RDF_Backpack_Predef_Grenadier),
            QCLASS(RDF_Backpack_Predef_Autorifleman),
            QCLASS(RDF_Backpack_Predef_Rifleman_AT),
            QCLASS(RDF_Backpack_SWAT),
            QCLASS(RDF_Backpack_SWAT_Predef_Rifleman),
            QCLASS(RDF_Backpack_SWAT_Predef_Chaingun),
            QCLASS(RDF_Backpack_Medic),
            QCLASS(RDF_Backpack_Medic_Predef_Medic),
        };
        weapons[] = {
            QCLASS(RDF_Helmet),
            QCLASS(RDF_Helmet_Marksman),
            QCLASS(RDF_Uniform),
            QCLASS(RDF_Vest),
            QCLASS(RDF_Vest_Medium),
            QCLASS(RDF_Vest_Swat)
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgWorlds.hpp"