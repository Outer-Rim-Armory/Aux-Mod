/*
 * Author: 3AS, Edited DartRuffian
 * Handles dismounting from an AT-RT, i.e. resetting the camera, controls, etc.
 *
 * Arguments:
 * atrt: Object - The AT-RT to dismount
 *
 * Return Value:
 * None
 *
 * Example:
 * atrt call BNAKC_fnc_dismountATRT;
 */


params ["_atrt"];

private _rider = _atrt getVariable ["BNA_KC_ATRT_Rider", nil];
if (isNil "_rider") exitWith {};

// Prevent the player getting stuck on top
private _direction = direction _rider;
private _position = getPosASL _atrt;
_position =
[
    _position#0 - 0.35 + sin (_direction - 90),
    _position#1 - 0.3 + cos (_direction - 90),
    _position#2 + 1
];

detach _rider;
[_rider, "ChopperLight_C_LOut_H"] remoteExec ["switchMove", 0];
_rider setDir _direction - 90;
_rider setPosASL _position;

_rider setVariable ["BNA_KC_ATRT_isRiding", false];

// Switch camera back to rider
if (cameraOn != (vehicle _rider)) then
{
    // Reset camera view to player
    (vehicle _rider) switchCamera cameraView;
};

_atrt remoteControl objNull;
_rider remoteControl objNull;

if (isClass (configFile >> "CfgPatches" >> "ace_advanced_throwing") and isClass (configFile >> "CfgPatches" >> "ace_common")) then
{
    [_rider, "blockThrow", "ridingATRT", false] call ace_common_fnc_statusEffect_set;
};

private _collision = _atrt getVariable ["BNA_KC_ATRT_CollisionObj", objNull]; // Remove collision
deleteVehicle _collision;

_atrt setVariable ["BNA_KC_ATRT_Rider", nil, true]; // Reset rider
inGameUISetEventHandler ["Action", ""];

[
    {
        params ["_rider"];
        [_rider, ""] remoteExec ["switchMove", 0]; // Seated animation
    },
    [_rider],
    0.5
] call CBA_fnc_waitAndExecute;