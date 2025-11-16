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
TRACE_2("fnc_atrt_mount",_atrt,_rider);

_atrt enableAI "ANIM";
_atrt setVariable ["TAS_ATRT_rider", _rider];
_rider setVariable [QGVAR(atrt_riding), _atrt];
_rider setVariable ["TAS_ATRT_isRiding", true, true];

_rider attachTo [_atrt, [0, 0, 0], "seat"];
[_rider, "ChopperLight_C_LIn_H"] remoteExec ["switchMove"];

_atrt switchCamera cameraView;
_rider remoteControl _atrt;
inGameUISetEventHandler ["Action", "if ((_this select 3) isEqualTo ""BackFromUAV"") then {true};"]; // Disables "Release UAV Controls" action

[_rider, "blockThrow", "TAS_ATRT_isRiding", true] call ace_common_fnc_statusEffect_set;

[{
    // Prevent animation if mounting and dismounting quickly
    if (_this getVariable ["TAS_ATRT_isRiding", false]) then {
        [_this, "driver_Quadbike"] remoteExec ["switchMove"];
    }
}, _rider, 1.5] call CBA_fnc_waitAndExecute;

nil;
