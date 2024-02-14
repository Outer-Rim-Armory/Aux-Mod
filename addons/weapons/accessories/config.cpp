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
            QUOTE(ADDON)
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(Optic_Base),
            QCLASS(Optic_Pistol),
            QCLASS(Optic_Pistol2),
            QCLASS(Optic_SR_Holosight),
            QCLASS(Optic_SR_Holosight2),
            QCLASS(Optic_SR_Holosight3),
            QCLASS(Optic_MR_Holosight),
            QCLASS(Optic_MR_Holosight2),
            QCLASS(Optic_MR_Holosight3),
            QCLASS(Optic_LR_Holosight),
            QCLASS(Optic_LR_Holosight2),
            QCLASS(Optic_LR_Holosight3),
            QCLASS(Optic_LR_Holosight4),
            QCLASS(Optic_Holosight),
            QCLASS(Optic_Holosight2),
            QCLASS(Optic_Holosight3),
            QCLASS(Optic_Holoscope),
            QCLASS(Optic_Holoscope2),
            QCLASS(Optic_Holoscope3)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"