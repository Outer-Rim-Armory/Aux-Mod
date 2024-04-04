#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            QCLASS(objects)
        };
        units[] = {
            QCLASS(Gonk_Uniforms),
            QCLASS(Gonk_Loadouts)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
#include "BNA_KC_Gonks_Loadouts.hpp"
#include "BNA_KC_Gonks_Ranks.hpp"
#include "BNA_KC_Gonks_Weapons.hpp"