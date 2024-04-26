#include "..\script_component.hpp"
/*
 * Author: SzwedzikPL
 * Edited by DartRuffian
 * Handles displayLoad event for interrupting displays
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

GVAR(interruptingDisplays) pushBackUnique _displayClass;
GVAR(displayInterrupt) = (GVAR(interruptingDisplays) isNotEqualTo []);

if (GVAR(displayInterrupt)) then {
    0 call FUNC(resetEffects);
};