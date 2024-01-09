#include "script_component.hpp"
#include "CfgEventHandlers.hpp"
#include "ACEX_Fortify_Presets.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core),
            "ace_fortify"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};