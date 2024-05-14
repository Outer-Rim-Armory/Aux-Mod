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
            QCLASS(rdfArmor_backpack),
            QCLASS(rdfArmor_backpack_predef_rifleman),
            QCLASS(rdfArmor_backpack_predef_grenadier),
            QCLASS(rdfArmor_backpack_predef_autorifleman),
            QCLASS(rdfArmor_backpack_predef_riflemanAT),
            QCLASS(rdfArmor_backpack_medic),
            QCLASS(rdfArmor_backpack_medic_predef_medic),
            QCLASS(rdfArmor_backpack_swat),
            QCLASS(rdfArmor_backpack_swat_predef_rifleman),
            QCLASS(rdfArmor_backpack_swat_predef_chaingun)
        };
        weapons[] = {
            QCLASS(rdfArmor_helmet),
            QCLASS(rdfArmor_helmet_marksman),
            QCLASS(rdfArmor_uniform),
            QCLASS(rdfArmor_vest_light),
            QCLASS(rdfArmor_vest_medium),
            QCLASS(rdfArmor_vest_swat)
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgWorlds.hpp"