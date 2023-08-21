/*
 * Author: DartRuffian
 * Mounts a given unit on a given AT-RT.
 *
 * Arguments:
 * rider: Object - The unit to mount the AT-RT
 * atrt: Object - The AT-RT to mount
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, atrt] call BNAKC_fnc_mountATRT;
 */


params ["_rider", "_atrt"];

if
(
    (typeOf _rider isKindOf "3AS_ATRT_Base") // Blocks AT-RT "stacking"
) exitWith {};

_atrt setVariable ["BNA_KC_ATRT_Rider", _rider, true];
_atrt allowDamage false; // Player could potentially get stuck if the AT-RT "dies" while riding it

[_rider, "driver_Quadbike"] remoteExec ["switchMove", 0]; // Seated animation
_rider attachTo [_atrt, [0, 0, 0], "seat"];               // Attach the user to the ATRT
_rider setVariable ["BNA_KC_ATRT_isRiding", true];

_collision = "3AS_ATRT_Collision" createVehicle (position _atrt); // Object to simulate collision for the vehicle
_collision attachTo [_atrt, [0.0, 0.3, -2.3], "seat"];
_atrt setVariable ["BNA_KC_ATRT_CollisionObj", _collision];

// Give control of the unit to the player
objNull remoteControl driver _rider;
player remoteControl _atrt;

// We have to switch the camera to the ATRT now
if (cameraOn != (vehicle _atrt)) then
{
    (vehicle _atrt) switchcamera cameraview;
    _atrt enableStamina false;
    _atrt forceWalk false;
};

// Makes the "Release UAV Controls" action not do anything to avoid issues
// TODO: Make it so that the option does not appear at all
inGameUISetEventHandler ["Action", "if ((_this select 3) isEqualTo ""BackFromUAV"") then {true};"];