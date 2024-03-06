#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns if a unit is an engineer.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * True if unit is an engineer, otherwise false
 *
 * Example:
 * player call FUNC(isEngineer)
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
TRACE_1("fnc_isEngineer",_unit);

_unit getVariable ["ace_isEngineer", false];