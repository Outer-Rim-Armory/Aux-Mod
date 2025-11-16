#include "script_component.hpp"

if !(GVAR(enabled)) exitWith {};

GVAR(suppressedEH) = -1;
GVAR(interruptingDisplays) = [];
GVAR(displayInterrupt) = false;

addMissionEventHandler ["Loaded", LINKFUNC(initOverlay)];

["CBA_settingsInitialized", {
  // Create overlay and hide it
  call FUNC(initOverlay);

  // Add unit EH and tigger it for current unit
  ["unit", LINKFUNC(handlePlayerChanged), true] call CBA_fnc_addPlayerEventHandler;
}] call CBA_fnc_addEventHandler;
