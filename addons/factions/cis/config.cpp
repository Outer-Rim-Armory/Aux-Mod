#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QCLASS(armor),
            "JLTS_characters_DroidArmor"
        };
        units[] = {
            QCLASS(CIS_Unit_Base),
            QCLASS(CIS_Unit_Droid_Base),
            QCLASS(CIS_Unit_Droid_B1),
            QCLASS(CIS_Unit_Droid_B1_Heavy),
            QCLASS(CIS_Unit_Droid_B1_AT),
            QCLASS(CIS_Unit_Droid_B1_AA),
            QCLASS(CIS_Unit_Droid_B1_Sniper),
            QCLASS(CIS_Unit_Droid_B1_Marine),
            QCLASS(CIS_Unit_Droid_B1_CQC),
            QCLASS(CIS_Unit_Droid_B1_Security),
            QCLASS(CIS_Unit_Droid_B1_Commander),
            QCLASS(CIS_Unit_Droid_B1_Crew),
            QCLASS(CIS_Unit_Droid_B1_Pilot),
            QCLASS(CIS_Unit_Droid_B1_Saboteur),
            QCLASS(CIS_Unit_Droid_B1_Geonosis),
            QCLASS(CIS_Unit_Droid_B1_Commander_Geonosis),
            QCLASS(CIS_Unit_Droid_B1_Training),
            QCLASS(CIS_Unit_Droid_BX),
            QCLASS(CIS_Backpack_Droid_B1),
            QCLASS(CIS_Backpack_Droid_B1_predef_AT),
            QCLASS(CIS_Backpack_Droid_B1_predef_AA),
            QCLASS(CIS_Backpack_Droid_B1_Saboteur),
            QCLASS(CIS_Backpack_Droid_B1_Antenna),
            QCLASS(AAT_CIS)
        };
        weapons[] = {
            QCLASS(CIS_Uniform_Base),
            QCLASS(CIS_Uniform_Droid_Base),
            QCLASS(CIS_Uniform_Droid_B1),
            QCLASS(CIS_Uniform_Droid_B1_Marine),
            QCLASS(CIS_Uniform_Droid_B1_Security),
            QCLASS(CIS_Uniform_Droid_B1_Commander),
            QCLASS(CIS_Uniform_Droid_B1_Crew),
            QCLASS(CIS_Uniform_Droid_B1_Pilot),
            QCLASS(CIS_Uniform_Droid_B1_Saboteur),
            QCLASS(CIS_Uniform_Droid_B1_Geonosis),
            QCLASS(CIS_Uniform_Droid_B1_Commander_Geonosis),
            QCLASS(CIS_Uniform_Droid_B1_Training),
            QCLASS(CIS_Uniform_Droid_BX),
            QCLASS(CIS_Vest_Droid_BX),
            QCLASS(CIS_Vest_Droid_BX_Actor)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "XtdGearModels.hpp"