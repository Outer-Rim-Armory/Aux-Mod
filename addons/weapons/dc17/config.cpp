#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QGVAR(accessories),
            "JLTS_weapons_DC17SA",
            "LF_Weapon_Unit_dc17arc_dual",
            "ls_animation_reloads",
            "ace_laserpointer"
        };
        units[] = {};
        weapons[] = {
            QCLASS(DC17_base),
            QCLASS(DC17),
            QCLASS(DC17_fried),
            QCLASS(DC17_riotShield),
            QCLASS(DC17_riotShield_fried),
            QCLASS(DC17_dual_base),
            QCLASS(DC17_dual),
            QCLASS(DC17_dual_fried),
            QCLASS(DC17_dualCommander),
            QCLASS(DC17_dualCommander_fried),
            QCLASS(DC17_dualARC),
            QCLASS(DC17_dualARC_fried)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
