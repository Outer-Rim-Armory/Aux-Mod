#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            QCLASS(armor),
            QEGVAR(weapons,load_order),
            QEGVAR(vehicles,load_order),
            "3AS_Backpacks",
            "ace_flags"
        };
        units[] = {
            QGVAR(jetpack_hussarWings),
            QGVAR(cloneJetpack_stachePack),
            "BNA_KC_carrierFlag_kc",
            "BNA_KC_carrierFlag_kcmed"
        };
        weapons[] = {
            "BNA_KC_carrierFlag_kc_item",
            "BNA_KC_carrierFlag_kcmed_item"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"
#include "CfgEventHandlers.hpp"
