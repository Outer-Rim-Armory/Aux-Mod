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
            QCLASS(core)
        };
        units[] =
        {
            QCLASS(Deployable_MedicalDroid)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
#include "ACE_Medical_Facilities.hpp"