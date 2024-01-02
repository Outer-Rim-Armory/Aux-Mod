#include "script_component.hpp"
#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgEventHandlers.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core),
            "ls_flags"
        };
        units[] =
        {
            QCLASS(Flag_KC_Pole),
            QCLASS(Flag_KC_Vertical),
            QCLASS(Flag_KC_Horizontal),
            QCLASS(Flag_KC_Damaged_Pole),
            QCLASS(Flag_KC_Damaged_Vertical),
            QCLASS(Flag_KC_Damaged_Horizontal),
            QCLASS(Flag_KC_Damaged_Horizontal_Mirrored)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};