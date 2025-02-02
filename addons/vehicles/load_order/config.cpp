#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(sounds),
            QGVAR(weapons),
            // Air
            QGVAR(arc170),
            QGVAR(delta7),
            QGVAR(laatc),
            QGVAR(laati),
            QGVAR(nu),
            QGVAR(ogre),
            QGVAR(rathian),
            QGVAR(rho),
            QGVAR(transport),
            QGVAR(v19),
            QGVAR(vespoid),
            QGVAR(vwing),
            QGVAR(ywing),
            QGVAR(z95),
            // Land
            QGVAR(aat),
            QGVAR(atap),
            QGVAR(atrt),
            QGVAR(atte),
            QGVAR(barc),
            QGVAR(blitz),
            QGVAR(conga),
            QGVAR(gammoth),
            QGVAR(glavenus),
            QGVAR(hermitaur),
            QGVAR(hornet),
            QGVAR(hydra),
            QGVAR(juggernaut),
            QGVAR(khezu),
            QGVAR(plesioth),
            QGVAR(reek),
            QGVAR(rx200),
            QGVAR(scout_tank),
            QGVAR(tx130),
            QGVAR(utat),
            // Static
            QGVAR(command_post),
            QGVAR(mortars)
        };
        units[] = {};
        weapons[] = {};
    };
};