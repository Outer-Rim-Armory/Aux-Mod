#include "script_component.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"


class CfgPatches
{
    class BNA_KC_Armor
    {
        author = "SweMonkey and DartRuffian";
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "BNA_KC_Main"
        };
        units[] = {};
        weapons[] = {};
    };
};