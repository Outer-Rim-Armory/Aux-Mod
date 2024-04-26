#include "script_component.hpp"

if !(hasInterface) exitWith {};

["CBA_settingsInitialized", {
  // Create overlay and hide it
  0 spawn FUNC(initOverlay);

  // Add unit EH and tigger it for current unit
  ["unit", {_this call FUNC(handlePlayerChanged)}, true] call CBA_fnc_addPlayerEventHandler;
}] call CBA_fnc_addEventHandler;