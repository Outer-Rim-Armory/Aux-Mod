#include "..\script_component.hpp"
/*
 * Author: SzwedzikPL
 * Edited by DartRuffian
 * Handles displayUnload event for interrupting displays
 *
 * Arguments:
 * 0: Display class name <STRING>
 *
 * Return Value:
 * None
 *
 * Examples:
 * 'RscDisplayCamera' call BNA_KC_suppress_fnc_displayLoad;
 *
 * Public: No
 */

params ["_displayClass"];

private _index = GVAR(interruptingDisplays) find _displayClass;

if (_index isNotEqualTo -1) then {
    GVAR(interruptingDisplays) deleteAt _index;
};

GVAR(displayInterrupt) = (GVAR(interruptingDisplays) isNotEqualTo []);