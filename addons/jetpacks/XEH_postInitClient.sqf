#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["loadout", LINKFUNC(toggleFuelDisplay), true] call CBA_fnc_addPlayerEventHandler;
    ["vehicle", LINKFUNC(toggleFuelDisplay)] call CBA_fnc_addPlayerEventHandler;
    ["featureCamera", LINKFUNC(toggleFuelDisplay)] call CBA_fnc_addPlayerEventHandler;
}] call CBA_fnc_addEventHandler;