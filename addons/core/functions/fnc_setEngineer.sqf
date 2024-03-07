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
 * [player, false] call FUNC(setEngineer)
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_state", true, [true]]
];
TRACE_2("fnc_setEngineer",_unit,_state);

_unit setUnitTrait ["Engineer", false]; // Should always be false because of ACE Repair
_unit setVariable ["ace_isEngineer", _state, true];