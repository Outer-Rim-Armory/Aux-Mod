#include "script_component.hpp"

GVAR(activeJammers) = [];
publicVariable QGVAR(activeJammers);

GVAR(jammerHandler) = -1;

["CBA_settingsInitialized", {
    [QGVAR(addJammer), LINKFUNC(addJammer)] call CBA_fnc_addEventHandler;
    [QGVAR(removeJammer), LINKFUNC(removeJammer)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;