#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["loadout", LINKFUNC(toggleFuelDisplay), true] call CBA_fnc_addPlayerEventHandler;
    ["vehicle", LINKFUNC(toggleFuelDisplay)] call CBA_fnc_addPlayerEventHandler;
    ["featureCamera", LINKFUNC(toggleFuelDisplay)] call CBA_fnc_addPlayerEventHandler;
    [QGVAR(fuelChanged), LINKFUNC(updateFuelDisplay)] call CBA_fnc_addEventHandler;
    [QGVAR(jetpackFired), {systemChat format ["Fired: %1", _this]}] call CBA_fnc_addEventHandler;
    [QGVAR(jetpackStopped), {systemChat format ["Stopped: %1", _this]}] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;