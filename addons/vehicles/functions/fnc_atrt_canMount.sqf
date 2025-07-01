#include "..\script_component.hpp"
/*
 * Author: 3AS
 * Edited by DartRuffian
 * Determines whether a unit can mount an AT-RT.
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 * 1: The unit attempting to ride the AT-RT <OBJECT>
 *
 * Return Value:
 * True if the AT-RT can be mounted, otherwise false  <BOOL>
 *
 * Examples:
 * [_atrt, ace_player] call BNA_KC_vehicles_fnc_atrt_canMount;
 *
 * Public: Yes
 */

params [
    ["_atrt", objNull, [objNull]],
    ["_unit", objNull, [objNull]]
];
TRACE_2("fnc_atrt_canMount",_atrt,_unit);

if (!alive _atrt or {
    _unit isKindOf "3AS_ATRT_Base" or
    !(_unit call ace_common_fnc_isAwake) or
    !(isNull (_atrt getVariable ["TAS_ATRT_rider", objNull]))
}) exitWith {false};

true;
