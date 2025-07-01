#include "..\script_component.hpp"
/*
 * Author: 3AS
 * Edited by DartRuffian
 * Dismounts an AT-RT.
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [_atrt, ace_player] call BNA_KC_vehicles_fnc_atrt_dismount;
 *
 * Public: Yes
 */

params [
    ["_atrt", objNull, [objNull]]
];
private ["_rider", "_direction", "_positionATL"];
TRACE_1("fnc_atrt_dismount",_atrt);

_rider = _atrt getVariable ["TAS_ATRT_rider", objNull];
if (isNull _rider) exitWith {};

_atrt disableAI "ANIM";
_atrt setVariable ["TAS_ATRT_rider", objNull];
_rider setVariable [QGVAR(atrt_riding), objNull];
_rider setVariable ["TAS_ATRT_isRiding", false, true];

_direction = direction _atrt;
_positionATL = getPosATL _atrt;
_positionATL = [
    _positionATL#0 - 0.35 + sin (_direction - 90),
    _positionATL#1 - 0.3 + cos (_direction - 90),
    _positionATL#2
];

detach _rider;
_rider setDir _direction - 90;
_rider setPosATL _positionATL;

_rider switchCamera cameraView;
_rider remoteControl objNull;

inGameUISetEventHandler ["Action", ""];

[_rider, "blockThrow", "TAS_ATRT_isRiding", false] call ace_common_fnc_statusEffect_set;

[_rider, ""] remoteExec ["switchMove"];

nil;
