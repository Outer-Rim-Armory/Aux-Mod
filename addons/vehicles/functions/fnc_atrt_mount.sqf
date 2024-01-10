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
 * [_atrt, ace_player] call FUNC(atrt_mount);
 *
 * Public: Yes
 */

params [
    ["_atrt", objNull, [objNull]],
    ["_rider", objNull, [objNull]]
];
private [];
TRACE_2("fnc_atrt_mount",_atrt,_rider);

_atrt enableAI "ANIM";
_atrt setVariable [QGVAR(rider), _rider, true];
_rider setVariable [QGVAR(atrt_isRiding), true, true];

_rider attachTo [_atrt, [0, 0, 0], "seat"];
_rider switchMove "ChopperLight_C_LIn_H";

_atrt switchCamera cameraView;
_rider remoteControl _atrt;
inGameUISetEventHandler ["Action", "if ((_this select 3) isEqualTo ""BackFromUAV"") then {true};"]; // Disables "Release UAV Controls" action

[_rider, "blockThrow", QGVAR(atrt_isRiding), true] call ace_common_fnc_statusEffect_set;

[{
    // Prevent animation if mounting and dismounting quickly
    if (_this getVariable [QGVAR(atrt_isRiding), false]) then {
        _this switchMove "driver_Quadbike"
    }
}, _rider, 1.5] call CBA_fnc_waitAndExecute;

nil;