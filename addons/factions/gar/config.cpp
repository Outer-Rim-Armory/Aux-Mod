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
            QCLASS(custom_armor)
        };
        units[] =
        {
        };
        weapons[] =
        {
            QCLASS(Helmet_Phase1_HowzerBlue),
            QCLASS(Helmet_Phase1_HowzerBrown),
            QCLASS(Helmet_Phase1_91st_Ponds),
            QCLASS(Helmet_Phase2_Fil),
            QCLASS(Helmet_Phase2_FilSquad),
            QCLASS(Helmet_Phase2_HowzerBlue),
            QCLASS(Helmet_Phase2_HowzerBrown),
            QCLASS(Helmet_Phase2_91st_Ponds),
            QCLASS(Helmet_Phase2_91st_Stone),
            QCLASS(Helmet_Phase2_187th)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"