#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(accessories),
            QGVAR(b2Blaster),
            QGVAR(dc15a),
            QGVAR(dc15c),
            QGVAR(dc15l),
            QGVAR(dc15s),
            QGVAR(dc15sa),
            QGVAR(dc15x),
            QGVAR(dc17),
            QGVAR(dc17m),
            QGVAR(dc20y),
            QGVAR(dp23),
            QGVAR(e5),
            QGVAR(e5c),
            QGVAR(e5s),
            QGVAR(e60r),
            QGVAR(gr20),
            QGVAR(hi12),
            QGVAR(lw38),
            QGVAR(rps6),
            QGVAR(rps7),
            QGVAR(sbb3),
            QGVAR(valken38x),
            QGVAR(westar_m5),
            QGVAR(westar35),
            QGVAR(x42),
            QGVAR(z6),
            QGVAR(z8)
        };
        units[] = {};
        weapons[] = {};
    };
};