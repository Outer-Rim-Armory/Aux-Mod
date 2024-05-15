#include "script_component.hpp"


class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QEGVAR(weapons,load_order),
            "3AS_Prop_Crates"
        };
        units[] = {
            QCLASS(resupply_base),
            QCLASS(resupply_squadAmmo),
            QCLASS(resupply_platoonAmmo),
            QCLASS(resupply_squadAmmo_Heavy),
            QCLASS(resupply_platoonAmmo_Heavy),
            QCLASS(resupply_squadMedical),
            QCLASS(resupply_platoonMedical),
            QCLASS(resupply_disposableLaunchers),
            QCLASS(resupply_mortarLaunchers)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"