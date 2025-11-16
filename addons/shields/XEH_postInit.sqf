#include "script_component.hpp"

["CBA_settingsInitialized", {
    [QGVAR(shieldToggled), LINKFUNC(shieldToggled)] call CBA_fnc_addEventHandler;
    [QGVAR(shieldHealthChanged), LINKFUNC(shieldHealthChanged)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
