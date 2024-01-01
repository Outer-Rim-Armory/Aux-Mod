#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"


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
        units[] =
        {
            QCLASS(Creature_Rancor)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};