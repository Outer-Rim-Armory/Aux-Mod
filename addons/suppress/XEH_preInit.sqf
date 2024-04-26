#include "script_component.hpp"

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "initSettings.sqf"

if (hasInterface) then {
  GVAR(suppressedEH) = -1;
  GVAR(interruptingDisplays) = [];
  GVAR(displayInterrupt) = false;
};

addMissionEventHandler ["Loaded", {
  0 spawn FUNC(initOverlay);
}];


ADDON = true;