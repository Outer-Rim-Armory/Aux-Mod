#include "script_component.hpp"

[QGVAR(shieldToggled), LINKFUNC(onShieldToggle)] call CBA_fnc_addEventHandler;
[QGVAR(shieldHealthChanged), LINKFUNC(shieldHealthChanged)] call CBA_fnc_addEventHandler;