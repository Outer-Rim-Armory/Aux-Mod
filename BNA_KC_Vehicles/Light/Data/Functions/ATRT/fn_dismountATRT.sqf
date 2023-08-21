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