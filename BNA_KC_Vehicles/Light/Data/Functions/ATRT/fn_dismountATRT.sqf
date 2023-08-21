/*
 * Author: DartRuffian
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

// Prevent the player getting stuck on top
private _direction = direction _rider;
private _position = getPosASL walker;
_position =
[
	_position#0 - 0.35 + sin (_direction - 90),
	_position#1 - 0.3 + cos (_direction - 90),
	_position#2 - 3   
];

[_rider, ""] remoteExec ["switchMove", 0];      // Reset animation
detach _rider;
_rider setVariable ["BNA_KC_ATRT_isRiding", false];

objNull remoteControl driver _atrt; // Reset control
player remoteControl _rider;

if (cameraOn != (vehicle _rider)) then
{
    // Reset camera view to player
    (vehicle _rider) switchCamera cameraView;
};

private _collision = _atrt getVariable ["BNA_KC_ATRT_CollisionObj", objNull]; // Remove collision
deleteVehicle _collision;

_atrt setVariable ["BNA_KC_ATRT_Rider", nil, true]; // Reset rider
_atrt allowDamage true;
inGameUISetEventHandler ["Action", ""];

_rider switchMove "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon_getOutMedium";
_rider setDir _direction - 90;
_rider setPosASL _position;