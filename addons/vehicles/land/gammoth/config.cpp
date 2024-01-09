#include "script_component.hpp"
#include "CfgVehicles.hpp"


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
            QGVAR(weapons),
            QGVAR(sounds)
        };
        units[] =
        {
            QCLASS(Gammoth_Base),
            QCLASS(Gammoth_Transport),
            QCLASS(Gammoth_Covered),
            QCLASS(Gammoth_Ammo),
            QCLASS(Gammoth_Medical),
            QCLASS(Gammoth_Repair),
            QCLASS(Gammoth_Refuel)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};