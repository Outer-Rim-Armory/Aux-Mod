#include "script_component.hpp"
/*
 * Author: SzwedzikPL
 * Handles displayLoad event for interrupting displays
 */

 params ["_displayClass"];

 GVAR(interruptingDisplays) pushBackUnique _displayClass;
 GVAR(displayInterrupt) = (GVAR(interruptingDisplays) isNotEqualTo []);

 if (GVAR(displayInterrupt)) then {
   0 call FUNC(resetEffects);
 };
