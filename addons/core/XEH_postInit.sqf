#include "script_component.hpp"

["CBA_settingsInitialized", {
    if (!GVAR(enabled)) exitWith {};

    // Register fire event handler
    [QGVAR(localSound), LINKFUNC(playLocalSound)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;