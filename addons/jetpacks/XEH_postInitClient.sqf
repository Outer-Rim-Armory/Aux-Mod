#include "script_component.hpp"

GVAR(rise) = false;
GVAR(slowFall) = false;
GVAR(hover) = false;

["CBA_settingsInitialized", {
    ["loadout", LINKFUNC(toggleFuelDisplay), true] call CBA_fnc_addPlayerEventHandler;
    ["vehicle", LINKFUNC(toggleFuelDisplay)] call CBA_fnc_addPlayerEventHandler;
    ["featureCamera", LINKFUNC(toggleFuelDisplay)] call CBA_fnc_addPlayerEventHandler;
    [QGVAR(fuelChanged), LINKFUNC(updateFuelDisplay)] call CBA_fnc_addEventHandler;
    [QGVAR(jetpackFired), LINKFUNC(createEffects)] call CBA_fnc_addEventHandler;
    [QGVAR(jetpackStopped), {
        [LINKFUNC(clearEffectsLocal), _this, 0.1] call CBA_fnc_waitAndExecute;
    }] call CBA_fnc_addEventHandler;
    [QGVAR(clearEffects), LINKFUNC(clearEffectsLocal)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
