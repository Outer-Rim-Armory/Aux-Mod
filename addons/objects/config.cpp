#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QCLASS(core),
            "ls_flags",
            "3as_GNK_Prop",
            "3AS_Prop_Droids",
            "442_misc_forklift"
        };
        units[] = {
            QCLASS(Flag_KC_Pole),
            QCLASS(Flag_KC_Vertical),
            QCLASS(Flag_KC_Horizontal),
            QCLASS(Flag_KC_Damaged_Pole),
            QCLASS(Flag_KC_Damaged_Vertical),
            QCLASS(Flag_KC_Damaged_Horizontal),
            QCLASS(Flag_KC_Damaged_Horizontal_Mirrored),
            QCLASS(Gonk_Base),
            QCLASS(Gonk_Permissions),
            QCLASS(Utility_Arsenal),
            QCLASS(Utility_FullHeal),
            QCLASS(AIRSpawner),
            QCLASS(LandSpawner),
            QCLASS(CrateSpawner),
            QCLASS(SwapTerm),
            QCLASS(SideSwapper),
            QCLASS(Forklift_Droid),
            QCLASS(Personal_Locker),
            QCLASS(TurboTank_Static)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgEventHandlers.hpp"
