#include "script_component.hpp"
#include "CfgWeapons.hpp"


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
            "WBK_ZombieCreatures"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};