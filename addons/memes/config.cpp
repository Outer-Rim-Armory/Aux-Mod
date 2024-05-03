#include "script_component.hpp"

#ifdef APRIL_FOOL
class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            QEGVAR(weapons,load_order),
            QEGVAR(vehicles,load_order)
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgSounds.hpp"
#include "CfgEventHandlers.hpp"
#endif