#include "script_component.hpp"
#include "CfgSounds.hpp"


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
            "WBK_PhoenixTreal_FlamethrowerMOD"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};