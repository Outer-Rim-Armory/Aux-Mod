#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON
    {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            QCLASS(armor),
            "JLTS_characters_DroidArmor"
        };
        units[] =
        {
            QCLASS(CIS_Unit_Base),
            QCLASS(CIS_Unit_Droid_Base),
            QCLASS(CIS_Unit_Droid_B1),
            QCLASS(CIS_Unit_Droid_B1_Crew),
            QCLASS(CIS_Unit_Droid_BX),
            QCLASS(AAT_CIS)
        };
        weapons[] =
        {
            QCLASS(CIS_Uniform_Base),
            QCLASS(CIS_Uniform_Droid_Base),
            QCLASS(CIS_Uniform_Droid_B1),
            QCLASS(CIS_Uniform_Droid_B1_Crew),
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
#include "XtdGearModels.hpp"