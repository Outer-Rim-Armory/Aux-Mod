#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QCLASS(armor),
            "sc_equipment"
        };
        units[] = {
            QCLASS(rdfArmor_unit_base),
            QCLASS(rdfArmor_unit_rifleman),
            QCLASS(rdfArmor_unit_rifleman_DC15C),
            QCLASS(rdfArmor_unit_grenadier),
            QCLASS(rdfArmor_unit_autorifleman),
            QCLASS(rdfArmor_unit_marksman),
            QCLASS(rdfArmor_unit_riflemanAT),
            QCLASS(rdfArmor_unit_riflemanAT_disposable),
            QCLASS(rdfArmor_unit_medic),
            QCLASS(rdfArmor_unit_swat),
            QCLASS(rdfArmor_unit_swat_chaingun),
            QCLASS(RDF_Unit_Rifleman), // Deprecated classes
            QCLASS(RDF_Unit_Rifleman_DC15C),
            QCLASS(RDF_Unit_Grenadier),
            QCLASS(RDF_Unit_Autorifleman),
            QCLASS(RDF_Unit_Marksman),
            QCLASS(RDF_Unit_Rifleman_AT),
            QCLASS(RDF_Unit_Rifleman_AT_Disposable),
            QCLASS(RDF_Unit_Medic),
            QCLASS(RDF_Unit_SWAT),
            QCLASS(RDF_Unit_SWAT_Chaingun),
            QCLASS(rdfBackpack),
            QCLASS(rdfBackpack_predef_rifleman),
            QCLASS(rdfBackpack_predef_grenadier),
            QCLASS(rdfBackpack_predef_autorifleman),
            QCLASS(rdfBackpack_predef_riflemanAT),
            QCLASS(rdfBackpack_medic),
            QCLASS(rdfBackpack_medic_predef_medic),
            QCLASS(rdfBackpack_swat),
            QCLASS(rdfBackpack_swat_predef_rifleman),
            QCLASS(rdfBackpack_swat_predef_chaingun),
            QCLASS(Hornet_RDF),
            QCLASS(Hornet_MG_RDF),
            QCLASS(Hornet_AT_RDF),
            QCLASS(Hermitaur_Class_I_RDF),
            QCLASS(Hermitaur_Class_E_RDF),
            QCLASS(Hermitaur_Class_M_RDF),
            QCLASS(TX130_RDF),
            QCLASS(TX130_RDF_Recon),
            QCLASS(TX130_RDF_GL),
            QCLASS(TX130_RDF_Super),
            QCLASS(LAATi_MK1_RDF),
            QCLASS(LAATi_MK1_Lamps_RDF),
            QCLASS(LAATi_MK2_RDF),
            QCLASS(LAATi_MK2_Lamps_RDF),
            QCLASS(V19_RDF)
        };
        weapons[] = {
            QCLASS(helmet_base),
            QCLASS(uniform_base),
            QCLASS(vest_base),
            QCLASS(rdfArmor_helmet),
            QCLASS(rdfArmor_helmet_marksman),
            QCLASS(rdfArmor_uniform),
            QCLASS(rdfArmor_vest_light),
            QCLASS(rdfArmor_vest_medium),
            QCLASS(rdfArmor_vest_swat),
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgWorlds.hpp"
