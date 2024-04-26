#include "..\script_component.hpp"
/*
 * Author: SzwedzikPL
 * Handles displayUnload event for interrupting displays
 */

params ["_displayClass"];

private _index = GVAR(interruptingDisplays) find _displayClass;

if (_index isNotEqualTo -1) then {
    GVAR(interruptingDisplays) deleteAt _index;
};

GVAR(displayInterrupt) = (GVAR(interruptingDisplays) isNotEqualTo []);