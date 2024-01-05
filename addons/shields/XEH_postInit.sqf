#include "script_component.hpp"

[QGVAR(shieldToggled), LINKFUNC(shieldToggled)] call CBA_fnc_addEventHandler;
[QGVAR(shieldHealthChanged), LINKFUNC(shieldHealthChanged)] call CBA_fnc_addEventHandler;