#include "script_component.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            QCLASS(weapons_dc15a),
            QCLASS(weapons_dc15c),
            QCLASS(weapons_dc15l),
            QCLASS(weapons_dc15s),
            QCLASS(weapons_dc15sa),
            QCLASS(weapons_dc15x),
            QCLASS(weapons_dc17),
            QCLASS(weapons_dc17m),
            QCLASS(weapons_dp23),
            QCLASS(weapons_e5),
            QCLASS(weapons_e5c),
            QCLASS(weapons_e60r),
            QCLASS(weapons_gr20),
            QCLASS(weapons_hi12),
            QCLASS(weapons_lw38),
            QCLASS(weapons_rps6),
            QCLASS(weapons_rps7),
            QCLASS(weapons_valken38x),
            QCLASS(weapons_westarM5),
            // QCLASS(weapons_x42), // Not included due to Burn 'Em requirement, causes circular dependency
            QCLASS(weapons_z6)
        };
        units[] = {};
        weapons[] = {};
    };
};