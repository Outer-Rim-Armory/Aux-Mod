#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            QCLASS(armor),
            "GR_TKtrooper_Uniform"

        };
        units[] = {
            QCLASS(TK_Unit_Base),
            QCLASS(TK_Trooper),
            QCLASS(TK_AT_Trooper),
            QCLASS(TK_Officer)
        };
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};

#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWorlds.hpp"
#include "CfgGroups.hpp"
#include "CfgGlasses.hpp"
