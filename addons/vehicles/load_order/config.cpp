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
            // Air
            QGVAR(arc170),
            QGVAR(galaxy),
            QGVAR(laatc),
            QGVAR(laati),
            QGVAR(ogre),
            QGVAR(rathian),
            QGVAR(transport),
            QGVAR(vespoid),
            QGVAR(ywing),
            // Land
            QGVAR(aat),
            QGVAR(atap),
            QGVAR(atrt),
            QGVAR(atte),
            QGVAR(reek),
            QGVAR(blitz),
            QGVAR(conga),
            QGVAR(gammoth),
            QGVAR(glavenus),
            QGVAR(hornet),
            QGVAR(juggernaut),
            QGVAR(khezu),
            QGVAR(hydra),
            QGVAR(plesioth),
            QGVAR(rx200),
            QGVAR(scout_tank),
            QGVAR(tx130),
            // Static
            QGVAR(mortars)
        };
        units[] = {};
        weapons[] = {};
    };
};