#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["acex_fortify_objectPlaced", LINKFUNC(objectPlaced)] call CBA_fnc_addEventHandler;

    [GVAR(preset), parseNumber GVAR(budget), GVAR(sides)] call FUNC(registerPreset);
}] call CBA_fnc_addEventHandler;