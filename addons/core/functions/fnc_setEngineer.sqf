#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Gives or removes engineer permissions from a unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Give/revoke permissions <BOOL>
 *    - true assigns permissions
 *    - false removes permissions
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, false] call BNA_KC_core_fnc_setEngineer;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_state", 1, [true, 1]]
];
TRACE_2("fnc_setEngineer",_unit,_state);

_unit setUnitTrait ["Engineer", false]; // Should always be false because of ACE Repair
_unit setVariable ["ace_isEngineer", _state, true];
nil;
