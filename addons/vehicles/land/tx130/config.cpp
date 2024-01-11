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
            QGVAR(weapons),
            QGVAR(sounds),
            "3AS_SaberTank"
        };
        units[] =
        {
            QCLASS(TX130_M1),
            QCLASS(Saber_M1)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"