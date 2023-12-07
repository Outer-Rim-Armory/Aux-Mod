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
            "BNA_KC_Main",
            "ls_armor_bluefor",
            "lsd_units_bluefor",
            "lsd_equipment_bluefor",
            "SWLB_equipment_backpacks",
            "SWLB_Clones",
            "SWLB_CEE",
            "JLTS_core"
        };
        units[] = {};
        weapons[] =
        {
            "BNA_KC_Helmet_Base",
            "BNA_KC_Helmet_Phase1_Base",
            "BNA_KC_Helmet_Phase2_Base",
            "BNA_KC_Uniform_Base",
            "BNA_KC_Vest_Basic"
        };
    };
};