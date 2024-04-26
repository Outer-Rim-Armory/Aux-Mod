#include "script_component.hpp"

GVAR(suppressedEH) = -1;
GVAR(interruptingDisplays) = [];
GVAR(displayInterrupt) = false;

addMissionEventHandler ["Loaded", {
  0 spawn FUNC(initOverlay);
}];

["CBA_settingsInitialized", {
  // Create overlay and hide it
  0 spawn FUNC(initOverlay);

  // Add unit EH and tigger it for current unit
  ["unit", {_this call FUNC(handlePlayerChanged)}, true] call CBA_fnc_addPlayerEventHandler;
}] call CBA_fnc_addEventHandler;