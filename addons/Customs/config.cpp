#include "script_component.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "SweMonkey and DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "BNA_KC_Main",
            "BNA_KC_Armor"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};