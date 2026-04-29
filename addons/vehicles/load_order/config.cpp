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
            QGVAR(gozanti),
            QGVAR(hmp),
            QGVAR(laatc),
            QGVAR(laati),
            QGVAR(las),
            QGVAR(maf),
            QGVAR(nu),
            QGVAR(ogre),
            QGVAR(rathian),
            QGVAR(rho),
            QGVAR(transport),
            QGVAR(tridroid),
            QGVAR(v19),
            QGVAR(vespoid),
            QGVAR(vulture),
            QGVAR(vwing),
            QGVAR(ywing),
            QGVAR(z95),
            // Land
            QGVAR(aat),
            QGVAR(atap),
            QGVAR(atrt),
            QGVAR(atte),
            QGVAR(bantha),
            QGVAR(barc),
            QGVAR(cisnavalgun),
            QGVAR(combatspeeder),
            QGVAR(conga),
            QGVAR(deka),
            QGVAR(flakcannon),
            QGVAR(fliknot),
            QGVAR(gammoth),
            QGVAR(gat),
            QGVAR(glavenus),
            QGVAR(hag),
            QGVAR(hailfire),
            QGVAR(hermitaur),
            QGVAR(hornet),
            QGVAR(hydra),
            QGVAR(j1),
            QGVAR(j10),
            QGVAR(juggernaut),
            QGVAR(khezu),
            QGVAR(mtt),
            QGVAR(octuptarra),
            QGVAR(og9),
            QGVAR(pac_sac),
            QGVAR(particlecannon),
            QGVAR(plesioth),
            QGVAR(protoncannon),
            QGVAR(raptor),
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
