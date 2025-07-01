#include "script_component.hpp"

GVAR(jammerHandlerServer) = -1;

["CBA_settingsInitialized", {
    [QGVAR(addJammer), LINKFUNC(addJammerServer)] call CBA_fnc_addEventHandler;
    [QGVAR(removeJammer), LINKFUNC(removeJammerServer)] call CBA_fnc_addEventHandler;

    GVAR(ready) = true;
    publicVariable QGVAR(ready);
}] call CBA_fnc_addEventHandler;
