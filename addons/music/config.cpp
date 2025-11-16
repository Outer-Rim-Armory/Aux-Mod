#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core)
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgSounds.hpp"
#include "CfgSFX.hpp"
#include "CfgMusicClasses.hpp"
#include "CfgMusic.hpp"
#include "CfgVehicles.hpp"
