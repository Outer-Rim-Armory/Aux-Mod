#include "script_component.hpp"
#include "CfgEditorSubcategories.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "SweMonkey and DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "cba_main"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};