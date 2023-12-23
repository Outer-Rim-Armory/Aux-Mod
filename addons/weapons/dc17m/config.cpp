#include "script_component.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "SweMonkey and DartRuffian";
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            "SWLW_clones_spec",
            "3AS_Main"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(DC17M_Base),
            QCLASS(DC17M)
        };
    };
};