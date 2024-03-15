#include "script_component.hpp"

GVAR(activeJammers) = [] call CBA_fnc_hashCreate;
GVAR(jammerHandler) = -1;

["CBA_settingsInitialized", {
    [QGVAR(addJammer), LINKFUNC(addJammerServer)] call CBA_fnc_addEventHandler;
    [QGVAR(removeJammer), LINKFUNC(removeJammerServer)] call CBA_fnc_addEventHandler;

    GVAR(ready) = true;
    publicVariable QGVAR(ready);
}] call CBA_fnc_addEventHandler;