#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(armor),
            QEGVAR(objects,resupply)
        };
        units[] =
        {
            "BNA_KC_Jetpack_JT12",
            "BNA_KC_Jetpack_JT12_LR",
            "BNA_KC_Jetpack_CDV19",
            "BNA_KC_Jetpack_CDV19_LR",
            "BNA_KC_Jetpack_CDV21",
            "BNA_KC_Jetpack_CDV21_LR",

            "BNA_KC_Jetpack_Droid",
            "BNA_KC_Jetpack_Droid_Rocket",

            "BNA_KC_Resupply_JetpackFuel"
        };
        weapons[] =
        {
            "BNA_KC_Jetpack_FuelCan_Empty",
            "BNA_KC_Jetpack_FuelCan_Mag"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgFunctions.hpp"
#include "CfgCloudlets.hpp"
#include "CfgRscTitles.hpp"
#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"