#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
            "cba_main",
            "ace_common"
        };
        units[] = {
            QUOTE(DOUBLES(Ground,CLASS(Holder_Base)))
        };
        weapons[] = {
            QCLASS(helmet_base),
            QCLASS(vest_base),
            QCLASS(nvg_base),
            QCLASS(ItemCore),
            QCLASS(ItemCore_ItemInfo)
        };
        VERSION_CONFIG;
    };
};

#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgEventHandlers.hpp"
#include "BNA_KC_ReplacementItems.hpp"