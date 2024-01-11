#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
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

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFactionClasses.hpp"