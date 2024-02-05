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
            QCLASS(armor)
        };
        units[] =
        {
            QCLASS(Unit_Fil),
            QCLASS(Unit_FilSquad),
            QCLASS(Unit_Phase2_HowzerBlue),
            QCLASS(Unit_Phase2_HowzerBrown),
            QCLASS(Unit_91st_Ponds),
            QCLASS(Unit_91st_Stone),
            QCLASS(Unit_187th_Trooper),
            QGROUND_CLASS(Helmet_Phase1_HowzerBlue),
            QGROUND_CLASS(Helmet_Phase1_HowzerBrown),
            QGROUND_CLASS(Helmet_Phase1_91st_Ponds),
            QGROUND_CLASS(Helmet_Phase2_Fil),
            QGROUND_CLASS(Helmet_Phase2_FilSquad),
            QGROUND_CLASS(Helmet_Phase2_HowzerBlue),
            QGROUND_CLASS(Helmet_Phase2_HowzerBrown),
            QGROUND_CLASS(Helmet_Phase2_91st_Ponds),
            QGROUND_CLASS(Helmet_Phase2_91st_Stone),
            QGROUND_CLASS(Helmet_Phase2_187th)
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
            QCLASS(Helmet_Phase2_187th),
            QCLASS(Uniform_Fil),
            QCLASS(Uniform_FilSquad),
            QCLASS(Uniform_HowzerBlue),
            QCLASS(Uniform_HowzerBrown),
            QCLASS(Uniform_91st_Ponds),
            QCLASS(Uniform_91st_Stone),
            QCLASS(Uniform_187th),
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"