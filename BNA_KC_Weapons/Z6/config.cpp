#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"

class CfgPatches
{
    class BNA_KC_Weapons_Z6
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = "BNA_KC_Weapons"
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "BNA_KC_Weapons_Core",
                // Ammo
            "JLTS_weapons_Z6"
                // Z-6
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_Z6_Base",
            "BNA_KC_Z6",
            "BNA_KC_Z6_Fried"
        };
    };
};