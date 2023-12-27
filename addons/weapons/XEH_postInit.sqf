#include "script_component.hpp"

["CBA_settingsInitialized", {
    if (!GVAR(enabled)) exitWith {};

    // Register fire event handler
    ["ace_firedPlayer", LINKFUNC(fired)] call CBA_fnc_addEventHandler;
    ["ace_firedNonPlayer", LINKFUNC(fired)] call CBA_fnc_addEventHandler;
    // ["ace_firedPlayerVehicle", LINKFUNC(fired)] call CBA_fnc_addEventHandler;
    // ["ace_firedNonPlayerVehicle", LINKFUNC(fired)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;