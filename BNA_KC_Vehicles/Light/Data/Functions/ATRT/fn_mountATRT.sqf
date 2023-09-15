/*
 * Author: 3AS, Edited DartRuffian
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

_atrt setVariable ["BNA_KC_ATRT_rider", _rider, true];

_rider attachTo [_atrt, [0, 0, 0], "seat"];
[_rider, "ChopperLight_C_LIn_H"] remoteExec ["switchMove", 0];
_rider setVariable ["BNA_KC_ATRT_isRiding", true];

_collision = "3AS_ATRT_Collision" createVehicle (position _atrt); // Object to simulate collision for the vehicle
_collision attachTo [_atrt, [0.0, 0.3, -2.3], "seat"];
_atrt setVariable ["BNA_KC_ATRT_collisionObj", _collision, true];

// Switch camera to AT-RT
if (cameraOn != (vehicle _atrt)) then
{
    (vehicle _atrt) switchCamera cameraView;
    _atrt enableStamina false;
    _atrt forceWalk false;
};

// Give control of the unit to the player
objNull remoteControl driver _rider;
player remoteControl _atrt;


if (isClass (configFile >> "CfgPatches" >> "ace_advanced_throwing") and isClass (configFile >> "CfgPatches" >> "ace_common")) then
{
    [_rider, "blockThrow", "ridingATRT", true] call ace_common_fnc_statusEffect_set;
};

// Makes the "Release UAV Controls" action not do anything to avoid issues
inGameUISetEventHandler ["Action", "if ((_this select 3) isEqualTo ""BackFromUAV"") then {true};"];

[
    {
        params ["_rider"];
        [_rider, "driver_Quadbike"] remoteExec ["switchMove", 0]; // Seated animation
    },
    [_rider],
    1.5
] call CBA_fnc_waitAndExecute;
