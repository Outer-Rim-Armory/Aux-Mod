#include "..\script_component.hpp"
/*
 * Author: 3AS
 * Edited by DartRuffian
 * Mounts a unit on an AT-RT
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 * 1: The unit mounting the AT-RT <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [_atrt, ace_player] call FUNC(mountATRT);
 *
 * Public: Yes
 */

params [
    ["_atrt", objNull, [objNull]],
    ["_rider", objNull, [objNull]]
];
private [];
TRACE_2("fnc_mountATRT",_atrt,_rider);

_atrt enableAI "ANIM";
_atrt setVariable [QGVAR(rider), _rider, true];
_rider setVariable [QGVAR(isRidingATRT), true, true];

nil;