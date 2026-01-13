#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        author = AUTHOR;
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = 2.18; // doesnt work unless 2.18 for some reason, REQUIRED_VERSION doesnt work with wierd ass scripts idk man
        url = "https://www.armahosts.com/";
        requiredAddons[] = {};
        units[] = {};
        weapons[] =
        {
            QCLASS(Launcher_Datapad)
        };
        VERSION_CONFIG;
    };
};
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "GUIBase.hpp"
#include "CfgDisplays.hpp"
#include "CfgEventHandlers.hpp"
