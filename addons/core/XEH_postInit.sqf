#include "script_component.hpp"

["CBA_settingsInitialized", {
    [QGVAR(localSound), LINKFUNC(playLocalSound)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;