#include "script_component.hpp"

call FUNC(registerPreset);

["CBA_settingsInitialized", {
    ["acex_fortify_objectPlaced", LINKFUNC(objectPlaced)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;