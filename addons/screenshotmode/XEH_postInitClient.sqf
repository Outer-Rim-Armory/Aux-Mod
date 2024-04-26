#include "script_component.hpp"

GVAR(active) = false;
[QGVAR(screenshotMode), {GVAR(active)}] call CBA_fnc_registerFeatureCamera;