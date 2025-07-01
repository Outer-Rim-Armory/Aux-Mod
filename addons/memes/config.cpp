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
            "3AS_Backpacks"
        };
        units[] = {
            QGVAR(jetpack_hussarWings),
            QGVAR(cloneJetpack_stachePack)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"
#include "CfgEventHandlers.hpp"
