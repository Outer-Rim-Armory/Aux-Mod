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
            "JLTS_characters_DroidArmor"
        };
        units[] =
        {
            QCLASS(CIS_Unit_Base),
            QCLASS(CIS_Unit_DroidBase)
        };
        weapons[] =
        {
            QCLASS(CIS_Uniform_Base),
            QCLASS(CIS_Uniform_DroidBase)
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFactionClasses.hpp"