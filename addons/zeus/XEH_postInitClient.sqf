#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["featureCamera", LINKFUNC(onMenuOpen)] call CBA_fnc_addPlayerEventHandler;
}] call CBA_fnc_addEventHandler;