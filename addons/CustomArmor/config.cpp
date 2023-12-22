#include "script_component.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "SweMonkey and DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(Core),
            QCLASS(Armor)
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(Helmet_ARC_Drake),
            QCLASS(Helmet_ARC_DrakeBacta),
            QCLASS(Helmet_ARC_Hagrid),
            QCLASS(Helmet_ARC_HagridPlasma),
            QCLASS(Helmet_ARC_Tyrant),
            QCLASS(Helmet_ARC_TyrantCrimson),
            QCLASS(Helmet_ARF_Patriot),
            QCLASS(Helmet_ARF_Sin),
            QCLASS(Helmet_ARF_Tugz),
            QCLASS(Helmet_BARC_Rat),
            QCLASS(Helmet_BARC_RatCrimson)
        };
        VERSION_CONFIG;
    };
};