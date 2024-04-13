#include "CWR_VoiceLines.hpp"


class CfgPatches {
    class ChatWheelRedux {
        author = "DartRuffian";
        weapons[] = {};
        units[] = {};
        requiredversion = 0.1;
        requiredaddons[] = {
            "cba_events",
            "cba_hashes",
            "cba_settings",
            "cba_keybinding"
        };
    };
};

#include "CfgHints.hpp"


class CfgFunctions {
    class CWR {
        class Settings {
            file = "ChatWheelRedux\Data\Functions\Settings";
            class configureAddonKeybinds {};
            class configureAddonOptions {};
            class createTagMenu {};
        };

        class Chat {
            file = "ChatWheelRedux\Data\Functions\Chat";
            class openChatWheel {};
            class processTags {};
            class sendGroupMessage {};
            class sendLocalMessage {};
            class configureMenus {};
        };

        class Sounds {
            file = "ChatWheelRedux\Data\Functions\Sounds";
            class playLocalSound {};
        };

        class Utils {
            file = "ChatWheelRedux\Data\Functions\Utils";
            class getDirFromBearing {};
            class stringReplace {};
            class removeQuotes {};
            class findAllVoicelineTags {};
            class getConfigNameFromTag {};
            class devLog {};

            class isPlayer {};
            class getNearbyPlayers {};

            class sortByDistance {};
        };

        class EventHandlers {
            file = "ChatWheelRedux\Data\Functions\EventHandlers";
            class throwGrenadeMain {};
            class throwGrenadeEH {};
            class throwGrenadeEHACE {};
            class unconsciousEH {};
        };
    };
};

#define QUOTE(CODE) #CODE

class Extended_PreInit_EventHandlers {
    class CWR_ConfigureKeybinds {
        init = QUOTE(call CWR_fnc_configureAddonKeybinds;);
    };
    class CWR_ConfigureOptions {
        init = QUOTE(call CWR_fnc_configureAddonOptions;);
    };
    class CWR_ConfigureChatMenus {
        init = QUOTE(call CWR_fnc_configureMenus;);
    };
};


class Extended_PostInit_EventHandlers {
    class CWR_ChatWheel {
        clientInit = QUOTE(call compileScript ['\ChatWheelRedux\XEH_postInitClient.sqf']);
    };
    class CWR_CreateTagDiary {
        init = QUOTE(call CWR_fnc_createTagMenu;);
    };
    class CWR_ThrowGrenadeEH {
        init = QUOTE(if isClass (configFile >> 'CfgPatches' >> 'ace_common') then { call CWR_fnc_throwGrenadeEHACE; } else { call CWR_fnc_throwGrenadeEH; };);
    };
    class CWR_UnconciousEH {
        init = QUOTE(call CWR_fnc_unconsciousEH);
    };
};
