#include "script_component.hpp"

// TODO: Make dev an optional addon, so that it is not included in release

class CfgPatches
{
    class ADDON
    {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core)
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};