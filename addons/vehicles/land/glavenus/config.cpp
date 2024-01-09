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
            QCLASS(Glavenus_Unarmed),
            QCLASS(Glavenus_Medic),
            QCLASS(Glavenus_HMG),
            QCLASS(Glavenus_GMG)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};