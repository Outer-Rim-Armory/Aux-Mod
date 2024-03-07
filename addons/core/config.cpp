#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "cba_main",
            "ace_common"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"