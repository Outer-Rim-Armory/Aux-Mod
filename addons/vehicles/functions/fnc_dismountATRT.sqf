#include "..\script_component.hpp"
/*
 * Author: 3AS
 * Edited by DartRuffian
 * Mounts a unit on an AT-RT
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 * 1: The unit dismounting the AT-RT <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [_atrt, ace_player] call FUNC(dismountATRT);
 *
 * Public: Yes
 */

params [
    ["_atrt", objNull, [objNull]],
    ["_rider", objNull, [objNull]]
];
private [];
TRACE_2("fnc_dismountATRT",_atrt,_rider);

_atrt disableAI "ANIM";
_atrt setVariable [QGVAR(rider), objNull, true];
_rider setVariable [QGVAR(isRidingATRT), false, true];

nil;