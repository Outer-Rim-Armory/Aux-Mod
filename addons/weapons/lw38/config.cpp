#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(dc15a),
            "LF_Weapon_Unit_lw38m",
            "LF_Weapon_Unit_Westar45"
        };
        units[] = {};
        weapons[] = {
            QCLASS(LW38_Base),
            QCLASS(LW38),
            QCLASS(LW38_Fried),
            QCLASS(LW38_Green),
            QCLASS(LW38_Green_Fried),
            QCLASS(LW38_Green_Scoped)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"